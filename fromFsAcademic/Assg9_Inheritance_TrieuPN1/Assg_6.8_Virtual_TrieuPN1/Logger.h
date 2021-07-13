#pragma once
#ifndef __LOGGER_H__
#define __LOGGER_H__
#include <iostream>
using namespace std;



// Singleton Clas
class Logger
{
public:
	// block copy constructor
	Logger(Logger& other) = delete;
	// block constructor by assigning
	void operator=(const Logger&) = delete;

	virtual ~Logger();
	static Logger* getInstace(const int& stdchannel);
	static Logger* getInstace(const string& FileName);
	void setSecurityLevel(const int& _level);
	int getSecurity() const;

	virtual void log(int level, const char* format) = 0;
protected:
	static Logger* instance;
	Logger() : _severity{ 3 } {}
	int _severity;
};



class LoggerFile : public Logger
{
public:
	LoggerFile();
	LoggerFile(const string& fileName);
	~LoggerFile();
	
	void log(int level, const char* format);

private:
	
	string _fileName;
};

class LoggerStdout : public Logger
{
public:
	LoggerStdout();
	LoggerStdout(const int& stdCode);
	~LoggerStdout();
	void log(int level, const char* format);
private:
	int _stdout;
};

class LoggerStderr : public Logger
{
public:
	LoggerStderr();
	LoggerStderr(const int& stdCode);
	~LoggerStderr();
	void log(int level, const char* format);
private:

	int _stderr;
};

#endif // !__LOGGER_H__

