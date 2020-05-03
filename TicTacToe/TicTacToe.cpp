#include <iostream>
using namespace std;

class TicTacToe
{
	public:
	char board[10] = {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
	int choice, player;

	void displayBoard()
	{
		cout<<"       |       |      "<<endl;
		cout<<"       |       |      "<<endl;
		cout<<"  "<<board[7]<<"    |"<<"  "<<board[8]<<"    |"<<"  "<<board[9]<<endl;
		cout<<"       |       |      "<<endl;
    	cout<<"-------|-------|-------"<<endl;
    	cout<<"       |       |      "<<endl;
    	cout<<"  "<<board[4]<<"    |"<<"  "<<board[5]<<"    |"<<"  "<<board[6]<<endl;
    	cout<<"       |       |      "<<endl;    	
    	cout<<"-------|-------|-------"<<endl;
    	cout<<"       |       |      "<<endl;
    	cout<<"  "<<board[1]<<"    |"<<"  "<<board[2]<<"    |"<<"  "<<board[3]<<endl;
    	cout<<"       |       |      "<<endl; 
    	cout<<"       |       |      "<<endl;
	}

	int winCheck()
	{
    	int retvalue;
    
    	if(board[1] == 'X' && board[2] == 'X' && board[3] == 'X' || board[1] == 'O' && board[2] == 'O' && board[3] == 'O')
    	{
        	retvalue = 1;
    	}
    	else if(board[4] == 'X' && board[5] == 'X' && board[6] == 'X' || board[4] == 'O' && board[5] == 'O' && board[6] == 'O')
    	{
    	    retvalue = 1;
    	}
    	else if(board[7] == 'X' && board[8] == 'X' && board[9] == 'X' || board[7] == 'O' && board[8] == 'O' && board[9] == 'O')
    	{
    	    retvalue = 1;
    	}
    	else if(board[1] == 'X' && board[4] == 'X' && board[7] == 'X' || board[1] == 'O' && board[4] == 'O' && board[7] == 'O')
    	{
    	    retvalue = 1;
    	}
    	else if(board[2] == 'X' && board[5] == 'X' && board[8] == 'X' || board[2] == 'O' && board[5] == 'O' && board[8] == 'O')
    	{
    	    retvalue = 1;
    	}
    	else if(board[3] == 'X' && board[6] == 'X' && board[9] == 'X' || board[3] == 'O' && board[6] == 'O' && board[9] == 'O')
    	{
    	    retvalue = 1;
    	}
    	else if(board[3] == 'X' && board[5] == 'X' && board[7] == 'X' || board[3] == 'O' && board[5] == 'O' && board[7] == 'O')
    	{
    	    retvalue = 1;
    	}
    	else if(board[1] == 'X' && board[5] == 'X' && board[9] == 'X' || board[1] == 'O' && board[5] == 'O' && board[9] == 'O')
    	{
    	    retvalue = 1;
   		}
    	else if(board[1] == ' ' || board[2] == ' ' || board[3] == ' ' || board[4] == ' ' || 
    	    board[5] == ' ' || board[6] == ' ' || board[7] == ' ' || board[8] == ' ' || board[9] == ' ')
    	{
    	    retvalue = 0;
    	}   
    	else
    	{
    	    retvalue = -1;
    	}

    	return retvalue;
	}

	void markBoard(char mark)
	{
			if(choice == 1 && board[1] == ' ')
	    	{
	    	    board[1] = mark;
	    	}

	    	else if(choice == 2 && board[2] == ' ')
	    	{
	    	    board[2] = mark;
	    	}

	    	else if(choice == 3 && board[3] == ' ')
	    	{
	    	    board[3] = mark;
	    	}

	    	else if(choice == 4 && board[4] == ' ')
	    	{
	    	    board[4] = mark;
	    	}

	    	else if(choice == 5 && board[5] == ' ')
	    	{
	    	    board[5] = mark;
	    	}

	    	else if(choice == 6 && board[6] == ' ')
	    	{
	    	    board[6] = mark;
	    	}

	    	else if(choice == 7 && board[7] == ' ')
	    	{
	        	board[7] = mark;
	    	}

	    	else if(choice == 8 && board[8] == ' ')
	    	{
	    	    board[8] = mark;
	    	}

	    	else if(choice == 9 && board[9] == ' ')
	    	{
	        	board[9] = mark;
	    	}
	    	else
	    	{
	        	cout<<"\nInvalid Move! ";
	        	player--;
	        	cin.clear();
				cin.ignore();
	    	}
		
	}
};

int main()
{
	TicTacToe t;

	char ch;
    char mark;
    t.player = 1;
    cout<<"Do you want to Play the game? Enter y or n: ";
    cin>>ch;
    int gamestatus = 0;

    if(ch == 'y')
    {
        cout<<"\nUse Numpad To play the game!";
        cout<<"\nPlayer1 is X and Player2 is O";

        while(gamestatus == 0)
        {
            cout<<"\n\n\t\tTic Tac Toe\n";

            t.displayBoard();

            t.player = (t.player%2 != 0) ? 1:2;

            cout<<"\nPlayer "<<t.player<<" Enter a number to place your Marker: ";
            cin>>t.choice;

            mark = (t.player == 1) ? 'X':'O';
            
            t.markBoard(mark);
            
            gamestatus = t.winCheck();
            
            t.player++;
        }

        if(gamestatus == 1)
        {
            cout<<"\nPlayer "<<--t.player<<" Won! \n";
        }
        else
        {
            cout<<"\nIts a Draw!\n";
        }

        t.displayBoard();
    }

    return 0;
}