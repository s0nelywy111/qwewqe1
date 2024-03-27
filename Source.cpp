//#include <iostream>
//#include <Windows.h>
//#include <conio.h>
//#include <thread>
//#include <chrono>
//
//using namespace std::chrono_literals;
//using namespace std;
//
//const int WIDTH = 60;
//const int HEIGHT = 20;
//
//HANDLE console;
//COORD blocksPos;
//COORD direction;
//COORD scorePos;
//COORD blocks;
//
//int score = 0;
//
//void area()
//{
//	COORD pos;
//	pos.X = 0;
//	pos.Y = 0;
//
//
//	SetConsoleCursorPosition(console, pos);
//	for (int i = 0; i < HEIGHT; ++i)
//	{
//		for (int j = 0; j < WIDTH; ++j)
//		{
//			if (i == 0 || j == 0 || (j == WIDTH - 1) || (i == HEIGHT - 1))
//			{
//				cout << "#";
//			}
//			else
//			{
//				cout << " ";
//			}
//		}
//		cout << "\n";
//	}
//}
//
//void createBlocks()
//{
//
//}
//
//void blocksDowns()
//{
//	SetConsoleCursorPosition(console, blocksPos);
//	blocksPos.Y = 1;
//
//}
//void moveBlocks()
//{
//	SetConsoleCursorPosition(console, blocksPos);
//	cout << " ";
//
//	blocksPos.X += direction.X;
//	blocksPos.Y += direction.Y;
//	blocksPos.Y += 1;
//
//	SetConsoleCursorPosition(console, blocksPos);
//	cout << "L";
//}
//
//
//
//void updateScore()
//{
//	SetConsoleCursorPosition(console, scorePos);
//	cout << score;
//}
//
//
//void updateDirection(char user_input)
//{
//	switch (user_input)
//	{
//	case 'a':
//	case 'A':
//	{
//		if (blocksPos.X <= 1)
//		{
//			direction.X = 0;
//
//		}
//		else
//		{
//			direction.X = -1;
//
//		}
//		if (blocksPos.Y >= HEIGHT - 3)
//		{
//			direction.Y = 0;
//		}
//		else
//		{
//			direction.Y = 1;
//		}
//		if (blocksPos.Y >= HEIGHT - 2)
//		{
//			blocksPos.X = direction.X;
//			blocksPos.Y = direction.Y;
//		}
//
//		break;
//	}
//	case 'd':
//	case 'D':
//	{
//		if (blocksPos.X >= WIDTH - 2)
//		{
//			direction.X = 0;
//		}
//		else
//		{
//			direction.X = 1;
//		}
//		if (blocksPos.Y >= HEIGHT - 2)
//		{
//			direction.Y = 0;
//		}
//		else
//		{
//			direction.Y = 1;
//		}
//		break;
//	}
//	case 'q':
//	case 'Q':
//	{
//		score++;
//		updateScore();
//	}
//	case '1':
//	{
//		break;
//	}
//	default:
//		break;
//	}
//}
//
//int main1()
//{
//	setlocale(LC_ALL, " ");
//	srand(time(NULL));
//
//	//console 
//	console = GetStdHandle(STD_OUTPUT_HANDLE);
//
//	//color
//	SetConsoleTextAttribute(console, 11);
//
//	area();
//
//	blocksPos.X = WIDTH / 2;
//	blocksPos.Y = 1;
//
//	scorePos.X = 0;
//	scorePos.Y = HEIGHT;
//	SetConsoleCursorPosition(console, scorePos);
//	cout << "Wynik: " << score;
//	scorePos.X = 7;
//
//
//	char user_input = 0;
//
//	while (user_input != 20)
//	{
//		if (_kbhit())
//		{
//			user_input = _getch();
//		}
//		updateDirection(user_input);
//		moveBlocks();
//		std::this_thread::sleep_for(0.2s);
//
//	}
//
//	COORD end;
//	end.X = 0;
//	end.Y = HEIGHT - 1;
//	SetConsoleCursorPosition(console, end);
//
//	return 0;
//
//}