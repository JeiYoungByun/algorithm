#include <cctype>
#include <iostream>
#include "Morse.h"
using namespace std;

Morse::Morse(){
    alphabet = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
    digit = {"-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "----..", "----."};
    slash = "-..-.";
    question = "..--..";
    comma = "--..--";
    period = ".-.-.-";
    plus = ".-.-.";
    equal = "-...-";
}

void Morse::text2Morse(string text, string& morse) {
    morse = "";
    
    for(int i=0; i<text.length(); i++){
        char c = text.at(i);

        if(isalpha(c)){
            if(c>=65 && c<=90) c = tolower(c);
            morse += alphabet[c-97];
            morse += " ";
        }
        
        else if(c>=48 && c<=57){
            morse += digit[c-48];
            morse += " ";
        }
        
        else if(c == 47) {
            morse += slash;
            morse += " ";
        }

        else if(c == 63) {
            morse += question;
            morse += " ";
        }

        else if(c == 44) {
            morse += comma;
            morse += " ";
        }

        else if(c == 46) {
            morse += period;
            morse += " ";
        }
        else if(c == 43) {
            morse += plus;
            morse += " ";
        }
        else if(c == 61) {
            morse += equal;
            morse += " ";
        }
        else morse += "   ";
    }

}

void Morse::morse2Text(string morse, string& text){
    text = "";
    char c = 0;
    int index = 0;

    while(index < morse.size()){
        int space = morse.find(' ', index);

        string character = morse.substr(index, space-index);

        if(character == ""){
            text += ' ';
            space += 2;
        } else {
            for(int i=0; i<alphabet.size(); i++){
                if(character == alphabet[i]) text += (char)97+i;
            }

            for(int i=0; i<digit.size(); i++){
                if(character == digit[i]) text += (char)48+i;
            }

            if(character == slash) text += '/';
            else if(character == question) text += '?';
            else if(character == comma) text += ',';
            else if(character == period) text += '.';
            else if(character == plus) text += '+';
            else if(character == equal) text += '=';
        }

        index = space + 1;
    }
}
