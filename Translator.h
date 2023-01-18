#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include "Model.h"
#include <cctype> 

class Translator{ // Defines Translator class
public: // All methods are public
    Translator();
    virtual ~Translator();
    std::string translateEnglishWord(std::string word);
    std::string translateEnglishSentence(std::string vowel);
};

#endif
