#include "FileProcessor.h" // Implementing FileProcessor header file to define class and include necessary libraries

using namespace std;

FileProcessor::FileProcessor(){ // Constructor is empty since no member variables are necessary for this class
    
}

FileProcessor::~FileProcessor(){ // Destructor is empty since no memory needs to be deleted, since no pointers are created

}

void FileProcessor::processFile(string inputFile, string outputFile){ // processFile reads the inputFile and then outputs the english and translation to the output file
    Translator translator; // Translator object instantiated 
    string currentLine = ""; // currentLine string to store each line of inputFile
    ifstream inFile; // ifstream variable allows inputFile to be opened
    ofstream outFile; // ofstream variable allows outputFile to be opened
    outFile.open(outputFile); // Opening of both files
    inFile.open(inputFile);
    outFile << "<!DOCTYPE html>" << endl; // Setting up outFile as an html file
    outFile << "<html> <body> <b>" << endl; // <b> makes all following text bold until </b> is written
    if (inFile.is_open()) { // If the inputFile is open
        while(!inFile.eof()) { // Iterate through the file until it reaches end of file (eof) 
	        getline(inFile, currentLine); // Gets the current line of inFile and writes it to the string currentLine
            outFile << "<p>" << currentLine << "</p>" << endl; // Writes currentLine to the outFile, which is in english
        }
    }
    outFile << "</b> <p><br></p> <i>"<< endl; // Closes bold, writes a bar (<br>) to format code, and opens italics (<i>)
    inFile.close(); // Closes and opens inputFile so the new while loop starts from the top of the file, instead of the bottom
    inFile.open(inputFile);
    if (inFile.is_open()) {
        while(!inFile.eof()){
            getline(inFile, currentLine);          
            outFile << "<p>" << translator.translateEnglishSentence(currentLine) << "</p>" << endl; // Writes the translation of currentLine to the outFile
        }
    }
    outFile << "</i> </body> </html>" << endl; // Closes italics, body and html
	inFile.close(); // Closes both files 
    outFile.close();
}



