#include"Header2.h"


void Matrix::Show(Matrix *a, int index)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << a[index].matr[i][j] << " ";
		}
		cout << endl;
	}

}
//Matrix& Matrix ::operator=(const Matrix& pa)
//{
//	Matrix rezult(*this);
//	for (size_t i = 0; i < 10; ++i)
//	{
//		for (size_t j = 0; j < 10; ++j)
//		{
//			this->matr[i][j] = pa.matr[i][j];
//		}
//	}
//	return *this;
//}

Matrix Matrix ::operator+(const Matrix &ma)
{

	Matrix rezult(*this);
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			rezult.matr[i][j] = this->matr[i][j] + ma.matr[i][j];
		}
	}
	return rezult;
}
Matrix Matrix ::operator- (const Matrix &ma)
{

	Matrix rezult(*this);
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			rezult.matr[i][j] = this->matr[i][j] - ma.matr[i][j];
		}
	}
	return rezult;
}

Matrix operator* (const int x, Matrix &ma)
{

	Matrix rezult;
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			rezult.matr[i][j] = ma.matr[i][j] * x;
		}
	}
	return rezult;
}
Matrix Matrix:: operator* (const Matrix ma)
{
	Matrix rezult;
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			rezult.matr[i][j] = matr[i][j] * ma.matr[j][i];
		}
	}
	return rezult;
}
