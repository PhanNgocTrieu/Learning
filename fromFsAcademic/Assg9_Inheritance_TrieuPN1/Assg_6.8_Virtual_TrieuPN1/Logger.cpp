#include "Logger.h"

#include <iostream>

using namespace std;


/* ************************** LOGGER ************************** */
Logger* Logger::instance = nullptr;

//Logger::Logger()
//{
//	_severity = -1; // save code
//}

Logger::~Logger()
{
	cout << "Logger Destructor!" << endl;
}
Logger* Logger::getInstace(const int& stdchannel)
{
	if (stdchannel == 0)
	{
		if (instance == nullptr)
		{
			instance = new LoggerStdout();
		}
	}
	else
	{
		if (instance == nullptr)
		{
			instance = new LoggerStderr(stdchannel);
		}
	}

	return instance;
}
Logger* Logger::getInstace(const string& FILE)
{
	if (instance == NULL)
	{
		Logger::instance = new LoggerFile(FILE);
	}
	return instance;
}

void Logger::setSecurityLevel(const int& _level)
{
	_severity = _level;
}

int Logger::getSecurity() const
{
	return _severity;
}



/* **********************LOGGER FILE************************** */

LoggerFile::LoggerFile() : _fileName{ "" } {}
LoggerFile::LoggerFile(const string& fileName)
{

}
LoggerFile::~LoggerFile()
{
	cout << "Logger File Destructor!" << endl;
}

void LoggerFile::log(int severLevel, const char* format)
{
	if (severLevel == 0)
	{

	}
	if (severLevel == 1)
	{

	}
	if (severLevel == 2)
	{

	}
	if (severLevel == 3)
	{

	}
}

/* **********************LOGGER STDOUT************************** */
LoggerStdout::LoggerStdout()
{
	_stdout = 0;
}

LoggerStdout::LoggerStdout(const int& stdCode)
{
	_stdout = stdCode;
}

LoggerStdout::~LoggerStdout()
{
	cout << "LoggerSTD Destructor!" << endl;
}

void LoggerStdout::log(int level, const char* format)
{

}

/* **********************LOGGER STDerr************************** */
LoggerStderr::LoggerStderr()
{
	_stderr = 0;
}

LoggerStderr::LoggerStderr(const int& stdCode)
{
	_stderr = stdCode;
}

LoggerStderr::~LoggerStderr()
{
	cout << "LoggerStderr Destructor!" << endl;
}

void LoggerStderr::log(int level, const char* format)
{

}
