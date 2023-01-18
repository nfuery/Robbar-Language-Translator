#ifndef MODEL_H
#define MODEL_H

#include <iostream>
#include <string>
#include <cctype> // Includes cctype library for tolower() method

class Model{ // Defines Model class
public: // All methods are public
    Model();
    virtual ~Model();
    std::string translateSingleConsonant(char consonant);
    std::string translateSingleVowel(char vowel);
};

#endif 