#include"Header.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int task = 1;
	int size = 0;
	int siz = 0;
	Matrix *x = new Matrix[size];
	Matrix *k = new Matrix[siz];
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
				cout << "�������, ��� ����� �� �� ������������" << endl;
				break;
			case 4:
				cout << "�������, ��� ����� �� �� ������������" << endl;
				break;
			case 5:
				int n;
				int m;
				cout << "�� ������� ������ �����������? ������ ��� �������" << endl;
				cin >> n >> m;
				x[size] = x[n] + x[m];
				x[size].Show(x, size);
				break;
			case 6:
				cout << "�� ������� ������ �����������? ������ ��� �������" << endl;
				cin >> n >> m;
				x[size] = x[n] - x[m];
				x[size].Show(x,size);
				break;

			}
			break;
		
	
		default:
			break;
		}
	}
	system("pause");
}