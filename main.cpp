#include "FileProcessor.h"
#include <iostream>   
#include <string>
using namespace std;

int main(int argc, char** argv) // argc and argv are command line arguments which are used to intake 2 files
{
	FileProcessor fileProcessor; // Creates a FileProcessor object
	fileProcessor.processFile(argv[1], argv[2]); // Runs processFile, taking the first command line argument as the english file and the second as the translation file
	return 0;
}