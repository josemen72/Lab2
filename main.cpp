#include <ctime>
#include <iostream>
using namespace std;


int main() 
{
  srand(time(nullptr));
  int wins(0);
  int losses(0);
  int draws(0);

  cout << "***Welcome to ROCK, PAPER, SCISSORS***" << endl;
  
  bool KeepPlaying(true);
  while (KeepPlaying == true)
  {
    cout << "To play make a selection from 1-3\n" << endl;
    
    cout << "1 - Rock" << endl;
    cout << "2 - Paper" << endl;
    cout << "3 - Scissors" <<endl;

    int userChoice;
    cin >> userChoice;

    if (userChoice == 1)
    {
      cout << "You have picked ROCK" << endl;
    }
    else if (userChoice == 2)
    {
      cout << "You Have picked PAPER" << endl;
    }
    else if (userChoice == 3)
    {
      cout << "You have picked SCISSORS" << endl;
    }
    else 
    {
      cout << "Invalid Choice" << endl;
    }

    int computerPicked = rand() % 3 + 1;
    if (computerPicked == 1)
    {
    cout << "Computer Picked ROCK" << endl;
    } 
    else if (computerPicked == 2) 
    {
    cout << "Computer Picked PAPER" <<endl;
    }
    else if (computerPicked == 3)
    {
    cout << "Computer Picked SCISSORS" << endl;
    }

    if (computerPicked == userChoice)
    {
     cout << "Draw\n" << endl;
     draws++;
    }

    else if((computerPicked == 1 && userChoice == 2) || 
     (computerPicked == 3 && userChoice == 1) || 
     (computerPicked == 2 && userChoice == 3))
    {
     cout << "You win\n" << endl;
     wins++;
    }
    else
    {
      cout << "You Lose\n" << endl;
      losses++;
    }
   
    
   char answer;
   cout << "Play again (y/n)?" << endl;
   cin >> answer;
   if (toupper(answer) == 'N' || toupper(answer) == 'n') 
   {
    KeepPlaying = false;
    cout << "Wins: " << wins << endl;
    cout << "Losses: " << losses << endl; 
    cout << "Draws: " << draws <<endl;
   }
   
  }
}
