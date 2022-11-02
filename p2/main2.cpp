/***************************************************
  Programmer: Dillon Hendrix
  Discription: Kattis problem saving daylight. Convert 2 times inputted into the amount the sun is up that day. If the sun setting time is less than the sun rising time then through it out cause thats not possible. 
  Date: 10/30/22
***************************************************/

#include <iostream>
#include <string>
using namespace std;

int main() {

  // initialize variables
  string month;
  string day;
  string year;
  
  int firsthour, firstmin;
  int sechour, secmin;
  
  // Setup a loop to read 
  while(cin >> month && cin >> day && cin >> year){

    // initialize loop variables for time added
    int THPD = 0; // total hours per day
    int TMPD = 0; // total mins per day
    
    cin >> firsthour;
    cin.ignore();
    cin >> firstmin;

    cin >> sechour;
    cin.ignore();
    cin >> secmin;

    // make an equation get total hours and mins per day
    THPD = sechour - firsthour;
    TMPD = secmin - firstmin;

    // displey the month, day and year
    cout << month << " " << day << " " << year << " ";

    if(TMPD < 0){
      TMPD += 60;
      THPD --;
    }

  cout << THPD << " hours " << TMPD << " minutes " << endl;
    
  }
}