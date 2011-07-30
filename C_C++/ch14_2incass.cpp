#include <iostream>
#include <iomanip>

using namespace std;

void fill(int **p, int rowSize, int columnSize);
void fill(int **p, int rowSize, int columnSize);
void print(int **p, int rowSize, int columnSize)
{
	for(int row = 0; row < rowSize; row++)
	{
		for(int col = 0; col < columnSize; col++)
		{
			cout<<setw(5) << p[row][col];
			cout<<endl;
		}
	}
}

void fill(int **p, int rowSize, int columnSize)
{
	for(int row = 0; row<rowSize; row++)
	{
		cout<<"Enter"<<columnSize<<"number for row"<< "number"<<row + 1<<":";
		for(int col = 0; col< columnSize; col++)
		{
			cin>>p[row][col];
			cout<<endl;
		}
	}
}

void sumRows(int **p, int rowSize, int columnSize)
{
	

	cout<<"Executing sumRows function"<<endl;

	for(int row = 0; row<rowSize; row++)
	{
		int total = 0;
		for(int col = 0; col<columnSize; col++)
		{
		    total = total + p[row][col];
		}
		cout<<"Row"<<row+1<< "Total" << ":" << total<<endl;
	}


}

void sumCol(int **p, int rowSize, int columnSize)
{
	

	cout<<"Executing sunCol function"<<endl;

	for( int col = 0; col<columnSize; col++)
	{
		int total = 0;
		for(int row = 0; row<rowSize; row++)
		{
			total = total + p[row][col];
		}
		cout<<"Column"<<col+1<< "Total" << ":" << total<<endl;
	}
}


int main()
{
	int stopper;
	int **board;
	int rows;
	int columns;
	cout<<"Enter the number of rows and columns:"<<endl;
	cin>>rows>>columns;
	cout<<endl;

	board = new int*[rows];

	for(int row = 0; row< rows; row++)
	{
		board[row] = new int[columns];
	}

	fill(board, rows, columns);

	//cout<<"Board"<<endl;
	//print(board, rows, columns);

	sumRows(board, rows, columns);
	sumCol(board, rows, columns);

	cin>>stopper;
	return 0;
}
