#include <iostream>
#include <Windows.h>
#include<ctime>

using namespace std;

class Matrix
{
private:
	int**matr;
public:
	Matrix()
	{
		
		matr = new int*[10];
		for (int i = 0; i < 10; i++)
			matr[i] = new int[10];

		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				matr[i][j] = rand() % 10 - 2;
			}
		}
	}
	void Show(Matrix *a, int index);
	 Matrix operator+ (const Matrix&);
	 Matrix operator- (const Matrix&);
	/* Matrix operator=(const Matrix& pa);*/
	 Matrix  operator* (const Matrix ma);
	 friend Matrix operator* (const int x, Matrix &ma);
	
};
