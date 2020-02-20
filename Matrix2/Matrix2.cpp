#include"Header2.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int task = 1;
	int size = 0;
	int siz = 0;
	int n,k;
	int m;
	int mnoz;
	Matrix *x = new Matrix[size];

	int choise = 1, t = 1;
	while (choise != 0)
	{
		cout << "1-Створити об'єкт;" << endl;
		cout << "2-Візувати об'єкт" << endl;
		cout << "3-Застосувати до створених об'єктів операції:" << endl;
		cout << "0-Вихід" << endl;
		cout << "Ваш вибір = ";
		cin >> choise;

		system("cls");
		switch (choise)
		{
		case 1:

			x = new Matrix[++size];
			cout << "Обьект создан" << endl;
			break;

		case 2:
			if (size > 0)
			{
				for (int i = 0; i < size; i++)
				{
					x[i].Show(x, i);
					cout << endl << endl;
				}
				cout << endl;
			}
			else
			{
				cout << "Матриці не знайдено" << endl;
			}
			break;
		case 3:
			cout << "1-Cортування матриці" << endl;
			cout << "2-Підвищення в степень" << endl;
			cout << "3-Множення матриць" << endl;
			cout << "4-Множення матриці на число" << endl;
			cout << "5-Додавання матриць" << endl;
			cout << "6-Різниця матриць" << endl;
			cin >> t;

			switch (t)
			{
			case 1:
				cout << "Вибачте, цей пункт ще не реализованно" << endl;
				break;
			case 2:
				cout << "Вибачте, цей пункт ще не реализованно" << endl;
				break;
			case 3:
				
				cout << "Які матриці бажаєти використати? Введіть два індикси" << endl;
				cin >> n >> m;

				cout << "В какой обьект поместить?" << endl;
				cin >> k;
				if (k >= 0 && k <= size)
				{
					x[k] = x[n] * x[m];
					x[k].Show(x, k);
				}
				break;
			case 4:
				
				cout << "Вибачте, цей пункт ще не реализованно, повністю!!!!!!" << endl;
				cout << "Яку матрицю бажаєти використати? Введіть індикс та число" << endl;
				cin >> n;
				cin >> mnoz;
				int k;
				cout << "В какой обьект поместить?" << endl;
				cin >> k;
				/*if (k >= 0 && k <= size)
				{
					x[k] = x[n] * mnoz;
					x[k].Show(x, k);
				}
*/
				break;
			case 5:
				
				cout << "Які матриці бажаєти використати? Введіть два індикси" << endl;
				cin >> n >> m;
				
				cout << "В какой обьект поместить?" << endl;
				cin >> k;
				if (k >= 0 && k <= size)
				{
					x[k] = x[n] + x[m];
					x[k].Show(x, k);
				}
				
				break;
			case 6:
				cout << "Які матриці бажаєти використати? Введіть два індикси" << endl;
				cin >> n >> m;
				cout << "В какой обьект поместить?" << endl;
				cin >> k;
				if (k >= 0 && k <= size)
				{
					x[k] = x[n] - x[m];
					x[k].Show(x, k);
				}

				break;

			}
			break;


		default:
			break;
		}
	}
	system("pause");
}