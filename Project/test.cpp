#include<iostream>
using namespace std;
int main()
{
    int gameGrid[20][10];

    for (int i=0 ; i < 20 ; i++)
    {
        for (int j=0 ; j < 10 ; j++)
        {
            gameGrid[i][j] = 0;
        }
    }

    for (int j=0 ; j < 10 ; j++)
    {
        gameGrid[10][j] = 2;
        gameGrid[9][j] = 1;
        gameGrid[8][j] = 1;
        gameGrid[7][j] = 1;
        gameGrid[6][j] = 1;
        gameGrid[5][j] = 1;
        gameGrid[4][j] = 1;
    }

    for (int i=0 ; i < 20 ; i++)
        {
            for (int j=0 ; j < 10 ; j++)
            {
                cout << gameGrid[i][j] << "  ";
            }
            cout << endl;
        }
    int s=10;
    for (s ; s!=0; s--)
    {
        for (int j=0 ; j < 10 ; j++ )
        {   
            gameGrid[s][j] = gameGrid[s-1][j];
        }
    }

    cout << endl;
    cout << endl;
    cout << endl;
     for (int i=0 ; i < 20 ; i++)
        {
            for (int j=0 ; j < 10 ; j++)
            {
                cout << gameGrid[i][j] << "  ";
            }
            cout << endl;
        }
    
       return 0;
}