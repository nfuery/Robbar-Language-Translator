#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H


#include "Translator.h"
#include <iostream>
#include <string>
#include <fstream>

class FileProcessor{
public:
    FileProcessor();
    virtual ~FileProcessor();
    void processFile(std::string inputFile, std::string outputFile);
};

#endif