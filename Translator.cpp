#include "Translator.h"
using namespace std;

Translator::Translator(){ // Empty constructor since no member variables are needed

}

Translator::~Translator(){ // Empty destructor since no memory needs deallocation

}

string Translator::translateEnglishWord(string word){ // Takes in an english words and translates it to Rovarspraket
    Model model; // Creates Model object
    string translatedWord = "";
    for (int let = 0; let < word.length(); let++) { // Loops through each character in the inputted word
        if(isalpha(word[let]) != 0){ // If the current letter is part of the alphabet
            if(word[let] == 'a' || word[let] == 'e' || word[let] == 'i' || word[let] == 'o' || word[let] == 'u'){ // If the current letter is a vowel
                translatedWord += model.translateSingleVowel(word[let]); // Append the current letter to the string through model's translateSingleVowel method
            }
            else{
                translatedWord += model.translateSingleConsonant(word[let]); // If letter is consonant, append through translateSingleConsonant method        
            }
        }
        else{
            translatedWord += word[let]; // If character is a symbol, append without translation
        }   
    }
    return translatedWord;
}

string Translator::translateEnglishSentence(string sentence){ // Intakes an english sentence and returns a translated sentence
    string translatedSentence = "";
    string tempWord = ""; // tempWord allows each word in sentence to be appended indivdually
    Translator translator; // Creates Translator object
    for (int word = 0; word <= sentence.length(); word++) { // Loops through each word in the sentence
        if(sentence[word] == ' ' || word == sentence.length()){ // If the current word is a space or at the end of the sentence
            translatedSentence += translator.translateEnglishWord(tempWord) + " "; // Append the translated word plus a space
            tempWord = ""; // Resets tempWord for next loop iteration
        }
        else{
            tempWord += sentence[word]; // Otherwise, append word directly
        }
    }
    return translatedSentence;
}