#include <iostream>
#include <conio.h>
using namespace std;
int nTail;
class tic_tac_toe
{
private:
	
	int player = 1;
	int choice=0;
	char mark=0;
	char squareNo[10] = { 'o','1','2','3','4','5','6','7','8','9' };

public:
	
	void board()
	{

		system("cls");
		cout << "\t\t\t\t\tTic Tac Toe" << endl;
		for (int i = 0; i < 92; i++)
		{
			cout << "*";
		}
		cout << endl;
		for (int i = 0; i < 92; i++)
		{
			cout << "*";
		}
		cout << endl;
		cout << "**\t\t\t\t" << "|||" << "\t\t\t" << "|||\t\t\t\t  **" << endl;
		cout << "**\t\t\t\t" << "|||" << "\t\t\t" << "|||\t\t\t\t  **" << endl;
		cout << "**\t\t      " << squareNo[1] << "\t\t" << "|||" << "\t      " << squareNo[2] << "\t\t" << "|||\t" << squareNo[3] << "\t\t\t  **" << endl;
		cout << "**\t\t\t\t" << "|||" << "\t\t\t" << "|||\t\t\t\t  **" << endl;
		cout << "**\t\t===========================================================" << "\t\t  **" << endl; 
		cout << "**\t\t===========================================================" << "\t\t  **" << endl;
		cout << "**\t\t\t\t" << "|||" << "\t\t\t" << "|||\t\t\t\t  **" << endl;
		cout << "**\t\t      " << squareNo[4] << "\t\t" << "|||" << "\t      " << squareNo[5] << "\t\t" << "|||\t" << squareNo[6] << "\t\t\t  **" << endl;
		cout << "**\t\t\t\t" << "|||" << "\t\t\t" << "|||\t\t\t\t  **" << endl;
		cout << "**\t\t===========================================================" << "\t\t  **" << endl;
		cout << "**\t\t===========================================================" << "\t\t  **" << endl;
		cout << "**\t\t\t\t" << "|||" << "\t\t\t" << "|||\t\t\t\t  **" << endl;
		cout << "**\t\t      " << squareNo[7] << "\t\t" << "|||" << "\t      " << squareNo[8] << "\t\t" << "|||\t" << squareNo[9] << "\t\t\t  **" << endl;
		cout << "**\t\t\t\t" << "|||" << "\t\t\t" << "|||\t\t\t\t  **" << endl;
		cout << "**\t\t\t\t" << "|||" << "\t\t\t" << "|||\t\t\t\t  **" << endl;
		cout << "**\t\t\t\t\t\t\t\t\t\t\t  **" << endl;
		cout << "**\t\t\t\t\t\t\t\t\t\t\t  **" << endl;
		cout << "**\t\t\t\t\t***********************\t\t\t\t  **" << endl;
		cout << "**\t\t\t\t\t** INFORMATION       **\t\t\t\t  **" << endl;
		cout << "**\t\t\t\t\t**\t\t     **\t\t\t\t  **" << endl;
		cout << "**\t\t\t\t\t** Player 1 --> \"X\"  **\t\t\t\t  **" << endl;
		cout << "**\t\t\t\t\t** Player 2 --> \"O\"  **\t\t\t\t  **" << endl;
		for (int i = 0; i < 92; i++)
		{
			cout << "*";
		}
		cout << endl;
		for (int i = 0; i < 92; i++)
		{
			cout << "*";
		}
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t   Created By:\n\t\t\t\t\t\t\t\t\t\tYousafkamran" << endl;
	}
	int wincheck()
	{
	
		if (squareNo[1] == squareNo[2] && squareNo[2] == squareNo[3])
		{

			return 1;
		}
		else if (squareNo[4] == squareNo[5] && squareNo[5] == squareNo[6])
		{
			return 1;
		}
		else if (squareNo[7] == squareNo[8] && squareNo[8] == squareNo[9])
		{
			return 1;
		}
		else if (squareNo[1] == squareNo[4] && squareNo[4] == squareNo[7])
		{
			return 1;
		}
		else if (squareNo[2] == squareNo[5] && squareNo[5] == squareNo[8])
		{
			return 1;
		}
		else if (squareNo[3] == squareNo[6] && squareNo[6] == squareNo[9])
		{
			return 1;
		}
		else if (squareNo[1] == squareNo[5] && squareNo[5] == squareNo[9])
		{
			return 1;
		}
		else if (squareNo[3] == squareNo[5] && squareNo[5] == squareNo[7])
		{
			return 1;
		}
		else if (squareNo[1] != '1' && squareNo[2] != '2' && squareNo[3] != '3' && squareNo[4] != '4' && squareNo[5] != '5' && squareNo[6] != '6' && squareNo[7] != '7' && squareNo[8] != '8' && squareNo[9] != '9')
		{
			return 0;
		}
		else
		{
			return -1;
		}
	

	}
	int game()
	{
		int player = 1;
		int i = 0;
	

		char mark;
		do
		{
			board();
			player = (player % 2) ? 1 : 2;

			cout << "Player " << player << ", enter a number:  ";
			cin >> choice;

			mark = (player == 1) ? 'X' : 'O';

			if (choice == 1 && squareNo[1] == '1')

				squareNo[1] = mark;
			else if (choice == 2 && squareNo[2] == '2')

				squareNo[2] = mark;
			else if (choice == 3 && squareNo[3] == '3')

				squareNo[3] = mark;
			else if (choice == 4 && squareNo[4] == '4')

				squareNo[4] = mark;
			else if (choice == 5 && squareNo[5] == '5')

				squareNo[5] = mark;
			else if (choice == 6 && squareNo[6] == '6')

				squareNo[6] = mark;
			else if (choice == 7 && squareNo[7] == '7')

				squareNo[7] = mark;
			else if (choice == 8 && squareNo[8] == '8')

				squareNo[8] = mark;
			else if (choice == 9 && squareNo[9] == '9')

				squareNo[9] = mark;
			else
			{
				cout << "Invalid move ";

				player--;
				cin.ignore();
				cin.get();
			}
		i = wincheck();

			player++;
		} while (i == -1);
		board();
		if (i == 1)
		{
			cout << "!!!\aPLAYER " << --player << " WIN!!! ";
		}
		else
		{
			cout << "!!!\aGAME DRAW!!!";
		}
		cin.ignore();
		cin.get();
		return 0;
	}

};
class snake
{
private:
	bool game_over;
	const int wth = 60;
	const int ht = 20;
	int x, y, fruit_X, fruit_Y, score;
	int tail_X[100], tail_Y[100];
	
	enum num_directon
	{
		STOP = 0, LEFT, RIGHT, UP, DOWN
	};
	

public:
	num_directon dir;

	void Setup() {
		game_over = false;
		dir = STOP;
		x = wth / 2;
		y = ht / 2;
		fruit_X = rand() % wth;
		fruit_Y = rand() % ht;
		score = 0;
	}
	void Draw() 
	{
		
		system("CLS");
		cout << endl;
		cout << "\t\t\t\tSnake Game" << endl;
		cout << endl;
		cout << "     ";
		for (int i = 0; i < wth + 6; i++)
		{
			cout << "*";
		}
		cout << endl;
		cout << "     ";
		for (int i = 0; i < wth + 6; i++)
		{
			cout << "*";
		}
		cout << endl;
		cout << "     ";
		for (int i = 0; i < wth + 6; i++)
		{
			cout << "*";
		}
		cout << endl;

		for (int i = 0; i < ht; i++) 
		{
			cout << "     ";
			for (int j = 0; j < wth; j++) 
			{
				//leftmost wall
				if (j == 0)
				{
					cout << "***";
				}
				//top & bottom wall
				if (i == y && j == x)
				{
					cout << "#";
				}
				
				else if (i == fruit_Y && j == fruit_X)
				{
					cout << "O";
				}
				else 
				{
					bool print = false;
					for (int k = 0; k < nTail; k++) {
						if (tail_X[k] == j && tail_Y[k] == i) {
							cout << "#";
							print = true;
						}
					}
					if (!print)
					{
						cout << " ";
					}
					
					if (j == wth - 1)
					{
						cout << "***";
					}
				

				}
			}
			cout << endl;
		}
		cout << "     ";
		for (int i = 0; i < wth + 6; i++)
		{
			cout << "*";
		}
		cout << endl;
		cout << "     ";
		for (int i = 0; i < wth + 6; i++)
		{
			cout << "*";
		}
		cout << endl;
		cout << "     ";
		for (int i = 0; i < wth + 6; i++)
		{
			cout << "*";
		}
		cout << endl;
		cout << endl;
		cout << "                                ";
		for (int i = 0; i < 23; i++)
		{
			cout << "*";
		}
		cout << endl;

		cout << "                                **      Score:" << score<<"      **" << endl;
		cout << "                                ";
		for (int i = 0; i < 23; i++)
		{
			cout << "*";
		}
		cout << endl;
		cout << "                                **    Insturctions   **" << endl;
		cout << "                                ** \"W\"-To move up    **\n                                ** \"S\"-To move down  **\n                                ** \"D\"-To move right **\n                                ** \"A\"-To move left  **\n                                ** \"X\"-To exit game  **" << endl;
		cout << "                                ";
		for (int i = 0; i < 23; i++)
		{
			cout << "*";
		}
		cout << endl;
		cout << "\t\t\t\t\t\t   Created By:\n\t\t\t\t\t\t\t\tYousafkamran" << endl;
	}
	void Input() {
		if (_kbhit()) {
			switch (_getch()) {
				
			case 'a':
				dir = LEFT;
				break;
			case 'A':
				dir = LEFT;
				break;
			case 'd':
				dir = RIGHT;
				break;		
			case 'D':
				dir = RIGHT;
				break;
			case 'w':
				dir = UP;
				break;
			case 'W':
				dir = UP;
				break;
			case 's':
				dir = DOWN;
				break;
			case 'S':
				dir = DOWN;
				break;
				//x for force quit.
			case 'x':
				game_over = true;
				break;
			case 'X':
				game_over = true;
				break;
			}
		}
	}
	void Logic() {
		int prevX = tail_X[0];
		int prevY = tail_Y[0];
		int prev2X, prev2Y;
		tail_X[0] = x;
		tail_Y[0] = y;
		for (int i = 1; i < nTail; i++) {
			
			prev2X = tail_X[i];
			prev2Y = tail_Y[i];
			tail_X[i] = prevX;
			tail_Y[i] = prevY;
			prevX = prev2X;
			prevY = prev2Y;
		}
		
		switch (dir) {
		case LEFT:
			x--;
			break;

		case RIGHT:
			x++;
			break;
		case UP:
			y--;
			break;
		case DOWN:
			y++;
			break;
		default:
			break;
		}

		if (x >= wth)
			x = 0;
		else if (x < 0)
			x = wth - 1;
		if (y >= ht)
			y = 0;
		else if (y < 0)
			y = ht - 1;	
		for (int i = 0; i < nTail; i++)
			if (tail_X[i] == x && tail_Y[i] == y)
				game_over = true;
		if (x == fruit_X && y == fruit_Y) {
			score += 10;
			fruit_X = rand() % wth;
			fruit_Y = rand() % ht;
			nTail++;
		}
	}

	int game()
	{
		Setup();
		while (!game_over)
		{

			Draw();
			Input();
			Logic();

		}
		return 0;
	}
};
void menu(int choice,tic_tac_toe a1,snake b1)
{
	int i = 1;

		for (int i = 0; i <= 100; i++)
		{
			cout << "*";
		}
		cout << endl;
		for (int i = 0; i <= 100; i++)
		{

			cout << "*";
		}
		cout << endl;
		cout << "**                                                                                                 **" << endl;
		cout << "**                                      Which Game do you want to play:                            **" << endl;
		cout << "**                                                                                                 **" << endl;
		cout << "**                                            1.Tic Tac Toe                                        **" << endl;
		cout << "**                                                                                                 **" << endl;
		cout << "**                                            2.Snake                                              **" << endl;
		cout << "**                                                                                                 **" << endl;
		cout << "**                                            0.Exit                                               **" << endl;
		for (int i = 0; i <= 100; i++)
		{
			cout << "*";
		}
		cout << endl;
		for (int i = 0; i <= 100; i++)
		{

			cout << "*";
		}
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t   Created By:\n\t\t\t\t\t\t\t\t\t\t\tYousafkamran" << endl;
		cout << "Enter your choice:";
		cin >> choice;
		cout << endl;
		if (choice == 0)
		{
			system("CLS");
			cout << "Goodbye";
			cout << endl;
		}
		if (choice == 1)
		{

			cout << a1.game();
		}
		else if (choice == 2)
		{
			cout << b1.game();
		}
		else
		{
			cout << "Invalid Entry please enter choice again" << endl;
			
		}
}
int main()
{
	tic_tac_toe a1;
	snake b1;
	int choice=0;
	char cho;
	do {
		system("CLS");
		menu(choice,a1,b1);
		system("pause");
		system("CLS");
		cout << "Do you want to Play again(Y/N): ";
		cin >> cho;
	} while (cho=='y'||cho=='Y');
	
	return 0;
}