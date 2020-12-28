

#include <iostream>
#include <string>




//Forward Declarations
std::string ConvertToMorse(char);
void AddToTextOutput(std::string);

//Variables
std::string TextInput;
std::string TextOutput;
bool converting=true;

int main()
{
    while (converting) {
        //Introduction Message
        std::cout << "Please provide some text to turn into morse code, then press enter...\n";
       //Reset the TextOutput (Or initialize it)
        TextOutput = "Converting To Morse...\n";
        //Receive Input from user
        std::getline(std::cin, TextInput);

        //Loop Through each character of the string
        for (unsigned int i = 0; i < TextInput.length(); i++) {

            //Convert the character into morse code and attach it to the text output
            AddToTextOutput(ConvertToMorse(TextInput[i]));
        }

        //Print the newly converted morse onto a new line in console
        std::cout << std::endl << TextOutput << std::endl;
        

       
        
    }
}

std::string ConvertToMorse(char character) {

    
    if (character == 'a'||character=='A') {
        return " .- ";
    }
    else if (character == 'b' || character == 'B') {
        return " -... ";
    }
    else if (character == 'c' || character == 'C') {
        return " -.-. ";
    }
    else if (character == 'd' || character == 'D') {
        return " -.. ";
    }
    else if (character == 'e' || character == 'E') {
        return " . ";
    }
    else if (character == 'f' || character == 'F') {
        return " ..-. ";
    }
    else if (character == 'g' || character == 'G') {
        return " --. ";
    }
    else if (character == 'h' || character == 'H') {
        return " .... ";
    }
    else if (character == 'i' || character == 'I'){
        return " .. ";
    }
    else if (character == 'j' || character == 'J') {
        return " .--- ";
    }
    else if (character == 'k' || character == 'K') {
        return " -.- ";
    }
    else if (character == 'l' || character == 'L') {
        return " .-.. ";
    }
    else if (character == 'm' || character == 'M') {
        return " -- ";
    }
    else if (character == 'n' || character == 'N') {
        return " -. ";
    }
    else if (character == 'o' || character == 'O') {
        return " --- ";
    }
    else if (character == 'p' || character == 'P') {
        return " .--. ";
    }
    else if (character == 'q' || character == 'Q') {
        return " --.- ";
    }
    else if (character == 'r' || character == 'R') {
        return " .-. ";
    }
    else if (character == 's' || character == 'S') {
        return " ... ";
    }
    else if (character == 't' || character == 'T') {
        return " - ";
    }
    else if (character == 'u' || character == 'U') {
        return " ..- ";
    }
    else if (character == 'v' || character == 'V') {
        return " ...- ";
    }
    else if (character == 'w' || character == 'W') {
        return " .-- ";
    }
    else if (character == 'x' || character == 'X') {
        return " -..- ";
    }
    else if (character == 'y' || character == 'Y') {
        return " -.-- ";
    }
    else if (character == 'z' || character == 'Z') {
        return "--.. ";
    }
    else if (character == '1') {
        return " .---- ";
    }
    else if (character == '2') {
        return " ..--- ";
    }
    else if (character == '3') {
        return " ...-- ";
    }
    else if (character == '4') {
        return " ....- ";
    }
    else if (character == '5') {
        return " ..... ";
    }
    else if (character == '6') {
        return " -.... ";
    }
    else if (character == '7') {
        return " --... ";
    }
    else if (character == '8') {
        return " ---.. ";
    }
    else if (character == '9') {
    return " ----. ";
    }
    else if (character == '0') {
    return " ----- ";
    }
    else {
        std::string temp="";
        temp.append(1,character);
        return temp;
    }
    
}

void AddToTextOutput(std::string textToAdd) {
    TextOutput.insert(TextOutput.length(), textToAdd);
}

