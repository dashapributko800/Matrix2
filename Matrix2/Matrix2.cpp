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
		cout << "1-�������� ��'���;" << endl;
		cout << "2-³������ ��'���" << endl;
		cout << "3-����������� �� ��������� ��'���� ��������:" << endl;
		cout << "0-�����" << endl;
		cout << "��� ���� = ";
		cin >> choise;

		system("cls");
		switch (choise)
		{
		case 1:

			x = new Matrix[++size];
			cout << "������ ������" << endl;
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
				cout << "������� �� ��������" << endl;
			}
			break;
		case 3:
			cout << "1-C��������� �������" << endl;
			cout << "2-ϳ�������� � �������" << endl;
			cout << "3-�������� �������" << endl;
			cout << "4-�������� ������� �� �����" << endl;
			cout << "5-��������� �������" << endl;
			cout << "6-г����� �������" << endl;
			cin >> t;

			switch (t)
			{
			case 1:
				cout << "�������, ��� ����� �� �� ������������" << endl;
				break;
			case 2:
				cout << "�������, ��� ����� �� �� ������������" << endl;
				break;
			case 3:
				
				cout << "�� ������� ������ �����������? ������ ��� �������" << endl;
				cin >> n >> m;

				cout << "� ����� ������ ���������?" << endl;
				cin >> k;
				if (k >= 0 && k <= size)
				{
					x[k] = x[n] * x[m];
					x[k].Show(x, k);
				}
				break;
			case 4:
				
				cout << "�������, ��� ����� �� �� ������������, �������!!!!!!" << endl;
				cout << "��� ������� ������ �����������? ������ ������ �� �����" << endl;
				cin >> n;
				cin >> mnoz;
				int k;
				cout << "� ����� ������ ���������?" << endl;
				cin >> k;
				/*if (k >= 0 && k <= size)
				{
					x[k] = x[n] * mnoz;
					x[k].Show(x, k);
				}
*/
				break;
			case 5:
				
				cout << "�� ������� ������ �����������? ������ ��� �������" << endl;
				cin >> n >> m;
				
				cout << "� ����� ������ ���������?" << endl;
				cin >> k;
				if (k >= 0 && k <= size)
				{
					x[k] = x[n] + x[m];
					x[k].Show(x, k);
				}
				
				break;
			case 6:
				cout << "�� ������� ������ �����������? ������ ��� �������" << endl;
				cin >> n >> m;
				cout << "� ����� ������ ���������?" << endl;
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