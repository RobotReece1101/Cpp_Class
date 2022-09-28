#include <iostream>
using namespace std;

int main() {
   const int ROCK = 0;
   const int PAPER = 1;
   const int SCISSORS = 2;

   int seed;
   int numRounds;
   int roundIndex = 0;
   string player1;
   string player2;
   int player1Hand = 0;
   int player2Hand = 0;
   int player1Win = 0;
   int player2Win = 0;

   cin >> seed;
   srand(seed);

   cin >> player1;
   cin >> player2;
   cin >> numRounds;

   while (numRounds <= 0)
   {
        cout << "Rounds must be > 0" << endl;
        cin >> numRounds;
   }

   cout << player1 << " vs " << player2 << " for " << numRounds << " rounds" << endl;

   while (roundIndex < numRounds)
   {
        player1Hand = rand() % 3;
        player2Hand = rand() % 3; 
        if (player1Hand == player2Hand)
        {        
                while (player1Hand == player2Hand) 
                {
                    cout << "Tie" << endl;
                    player1Hand = rand() % 3;
                    player2Hand = rand() % 3;

                }
  
            }

        if (player1Hand == 0)
        {
            if (player2Hand == 1)
            {
                cout << player2 << " wins with paper" << endl;
                player2Win += 1;
            }
            else if (player2Hand == 2)
            {
                cout << player1 << " wins with rock" << endl;
                player1Win += 1;
            }
        }
        else if (player1Hand == 1)
        {
            if (player2Hand == 2)
            {
                cout << player2 << " wins with scissors" << endl;
                player2Win += 1;
            }
            else if (player2Hand == 0)
            {
                cout << player1 << " wins with paper" << endl;
                player1Win += 1;
            }
        }
        else if (player1Hand == 2)
        {
            if (player2Hand == 0)
            {
                cout << player2 << " wins with rock" << endl;
                player2Win += 1;
            }
            else if (player2Hand == 1)
            {
                cout << player1 << " wins with scissors" << endl;
                player1Win += 1;
            }
        }
        roundIndex += 1;
    }
    cout << player1 << " wins " << player1Win << " and " << player2 << " wins " << player2Win << endl;

   return 0;

}
