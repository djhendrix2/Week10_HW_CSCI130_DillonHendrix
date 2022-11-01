/***************************************************
  Programmer: Dillon Hendrix
  Discription: Make Hangman into a code that takes in a word as a non empty string value all upper case up to 16 letters. Then takes in a sequence of letters from the alphabet that try and guess the word. If the alphebet sequence is correct the user wins and output win and if not output loss. 
  Date: 10/30/22
***************************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/************* Function Prototypes **************/


int main() {

  string word;
  cout << "Input a word in all caps no longer than 16 charactures: ";
  cin >> word;
  cout << endl;

  string alphabetOrder;
  cout << "Input a random order of the english alphabet in which you think the letters will corrispond with the word: ";
  cin >> alph;
  cout << endl;

  // Convert the 2 inputs into 2 seperate 1d arrays each letter getting its own spot.
   
    // the c_str() function returns
    // a const pointer to null
    // terminated contents.
    const char* arrayword = word.c_str();
    cout << arrayword << endl;

    const char* arrayalpha = alph.c_str();
    cout << alph << endl;
  
  // Function that runs through the first array letter by letter starting at the first letter of the second array. Keep going until all of that same letter are found in the starting word then move the the second letter.

  // Setup an if statement if less than 10 missed letters accure before finding the word output a win.

  
  // Else the word isn't found in after missing 10 letters output loss.

  
}

/******************* Function *********************/

// function that goes throught the arrays in parrallel

