#include "Model.h"
using namespace std;

Model::Model(){ // Empty constructor since no member variables are needed

}

Model::~Model(){ // Empty destructor since no memory deallocation is needed

}

string Model::translateSingleConsonant(char consonant){ // Takes in a char and returns a string
    string translatedConsonant = ""; // String variable to be returned
    translatedConsonant += consonant; // Appends consonant char to string, maintaining case
    translatedConsonant += 'o'; // Appends 'o' to string
    translatedConsonant += tolower(consonant); // Appends consonant to string in lowercase
    return translatedConsonant; 
    
}

string Model::translateSingleVowel(char vowel){ // Takes in char and returns string
    string newVowel = "";
    newVowel += vowel; // Since char is a vowel, no changes are needed
    return newVowel;
}
