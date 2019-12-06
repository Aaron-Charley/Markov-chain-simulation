#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{

int exp[9][9] = {0};

exp[1][2] = 25;
exp[3][4] = 25;
exp[5][6] = 25;
exp[7][8] = 25;

exp[9][6] = 25;
exp[8][7] = 25;
exp[6][5] = 25;
exp[4][3] = 25;

exp[2][1] = 25;
exp[6][6] = 25;

	srand(time(NULL));
	int row = 0;
	int pog = 100;


	size_t go = 0;
	int results[pog] = {0};
	int roll = rand() % 100;

	for (int i = 0; i < pog; i++)
	{
		while(row != 9)
		{
			int percent = 0;
			roll = rand() % 100;
			for( int next = 0; next < 10; next++)
			{

			percent += exp[row][next];
			if(roll < percent)
			{

			row = next;
		go++;
	break;
			}
			}
		}
	results[i] = go;
	row = 0;
	go = 0;
	}
	int Max = 0;
	int Min = results[0];
	int Mean = 0;

	for( int n = 0; n < pog; n++)
	{
	int point = results[n];
	Mean += results[n];

if(point > Max)
{
Max = point;
}

if(point < Min)
{
	Min = point;
}
}
int rep = (Mean / pog);

std::cout << "maximum" << Max << std::endl;
std::cout << "minimum" << Min <<std::endl;
std::cout << "mean" << rep <<std::endl;





return 0;


}
