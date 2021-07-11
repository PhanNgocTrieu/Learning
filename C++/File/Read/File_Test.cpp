//I/O Redirection in C++
// propotype: FILE * freopen (const char *filename, const char *mode, File* stream);

//in other way:
// Streams Objects in C++ are mainly of three types:
// 1) istream: Stream object of this type can only perform input operations from the stream
// 2) ostream: These object can only be used for output operations.
// 3) iostream: can be used for both input and output operations

// When we read data from a stream, we don’t read it directly from the source, 
// but instead, we read it from the buffer which is linked to the source
// to redirect a Stream A to Stream B we need to do

// Get the stream buffer of A and store it somewhere
// Set the stream buffer of A to the stream buffer of B
// If needed reset the stream buffer of A to its previous stream buffer

// we can use function ios::rdbuf() to perform two operations:
// 1) stream_object.rdbuf(): Returns pointer to the stream buffer of stream_object
// 2) stream_object.rdbuf(streambuf * p): Sets the stream buffer to the object pointed by p

//Example:
#include <fstream>
#include <string>
#include <iostream>


int main()
{
    std::fstream file;
    file.open("cout.txt", std::ios::out);
    std::string line;

    // Backup strambuffers of content!
    std::streambuf* stream_buffer_content = std::cout.rdbuf(); 
    std::streambuf* stream_buffer_cin = std::cin.rdbuf();
    
    // Get the streambuffer of the file
    std::streambuf* stream_buffer_file = file.rdbuf();

    // Redirect cout to file
    std::cout.rdbuf(stream_buffer_file);
    std::cout << "This line writen to file" << std::endl;
    std::cout << "My name is John! I'm doing this!" << std::endl;

    // Redirect cout back to screen
    std::cout.rdbuf(stream_buffer_content);
    std::cout << "This is is written to screen" << std::endl;
    

    file.close();
    return 0;
}