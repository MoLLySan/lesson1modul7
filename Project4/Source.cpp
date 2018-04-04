#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;


//1.	�������� ���������, ����� ��������� ����� ���� ��������� � ������� � ������� ����������.
void runSumm();
double summ(int *mas, int n);


//2.	�������� ���������, ����� ���������� �������� ������� � �������� �������
void runObrat();
void Obrat(int *mas,int n);
//3.	�������� ���������, ������� ��������� ������ ����� ����� � ������� �����������.������, ���� � ��������� ������
//������������ ������������� �����, ���� ��������� ������ ����������� ������ � ������� ��������. (�� ������ ������������ ����� ��������� ����������, ������� �� ������)
void runSort();
int sort1(int *mas, int);
void sort2(int *mas, int);

//4.	��������� ����� ����������� �� ������ ����� �����, ����������� ���� ������ � ������.������������ � ��������� ���������� ���������� ��� ����������� �� �������, � ����� �������� �������������.
void runZumen();
void Zumen(int *mas,int *mas2, int n);


//5.	��������� ���������� �� ������ ����� �����, �������� ������� ���������� ��������� ������� �� ���������������.������������ � ��������� ���������� ���������� ��� ����������� �� �������, � ����� �������� �������������.
void runZerkal();
void Zerkal(int *mas, int n);


//6.	�������� �������, ������� �������� ��������� �� ������ � ��� ������, � ���������� ���������� �������������, ������������� � ������� ��������� �������.
void runShet();
void schet(int *mas,int n,int *pol,int *otr);

//7.	���� ��� ������� : �[M] � B[N](M �  N �������� � ����������).���������� ������� ������ ������ ���������� ���������� �������, � ������� ����� ������� ����� �������� ���� �������� ��� ����������.
void runObch();
void obch(int *mas1,int*mas2,int n,int m);

//8.	�������� ������� countEven(int *, int), ������� �������� ������������� ������ � ��� ������, � ���������� ����� ������ ����� � �������.


//9.	�������� �������, ������� ���������� ��������� �� ������������ �������� ������� double.���� ������ ����, ������� NULL.


//10.	�������� ������� myStrLen(char *), ������� ���������� ����� ��������� cstring.�������� �������, �� ��������� ������� C.





void main()
{
	srand(time (NULL));
	rand();
	setlocale(LC_ALL, ("RUS"));
	while (true)
	{

		
		

		cout << "�������� �������\n0-exit\n";


		int a;cin >> a;


		if (a == 0)
			break;

		switch (a)
		{
		case 1:runSumm();break;
		case 2:runObrat();break;
		case 3:runSort();break;
		case 4:runZumen();break;
		case 5:runZerkal();break;
		case 6:runShet();break;	
		case 7:runObch();break;
		}

		system("pause");
		system("cls");
	}
	
}




void runSumm()
{
	int const n = 5;
	int *mas = new int[n]; 
		for (int i = 0;i < n;i++)
		{
			*(mas + i) = rand()%11-5;
			cout << *(mas + i);
		}
		cout<<endl<<"summ="<<summ( mas,  n)<<endl;
}
double summ(int *mas, int n)
{
	double summ = 0;
	for (int i = 0;i < n;i++)
	{
		summ+=*(mas + i) ;	
	}
	summ = summ / n;
	return summ;
}
void runObrat()
{
	int const n = 5;
	int *mas = new int[n];
	for (int i = 0;i < n;i++)
	{
		*(mas + i) = rand() % 11 - 5;
		cout << *(mas + i);
	}
	cout << endl;
	Obrat(mas, n);
}
void Obrat(int *mas, int n)
	{
	for (int i = n-1;i >= 0;i--)
	{
		
		cout << *(mas + i);
	}
	}
void runSort()
{
	int const n = 5;
	int *mas = new int[n];
	for (int i = 0;i < n;i++)
	{
		*(mas + i) = rand() % 11 - 1;
		cout << *(mas + i);
	}
	cout << endl;
	sort1(mas, n);
	for (int i = 0;i < n;i++)
	{
		
		cout << *(mas + i);
	}

}
int sort1(int *mas, int n)
{
	for (int i = 0;i < n;i++)
	{
		if (*(mas + i) < 0)
		{
			sort2(mas, n);
			return 0;
		}
		
	}
	for (int j = 0;j < n;j++)
	for (int i = 0;i < n-1;i++)
	{
		if (*(mas + i) > *(mas + i + 1))
			swap(*(mas + i), *(mas + i + 1));
	}

}
void sort2(int *mas, int n)
{
	for (int j = 0;j < n;j++)
		for (int i = 0;i < n - 1;i++)
		{
			if (*(mas + i) < *(mas + i + 1))
				swap(*(mas + i), *(mas + i + 1));
		}
}
void runZumen()
{
	int const n = 5;
	int *mas1 = new int[n];
	for (int i = 0;i < n;i++)
	{
		*(mas1 + i) = rand() % 11 - 1;
		cout << *(mas1 + i);
	}
	cout << endl;
	
	int *mas2 = new int[n];
	for (int i = 0;i < n;i++)
	{
		*(mas2 + i) = rand() % 11 - 1;
		cout << *(mas2 + i);
	}
	cout << endl;
	
	Zumen(mas1, mas2, n);
	for (int i = 0;i < n;i++)
	{
		
		cout << *(mas2 + i);
	}
	cout << endl;
	for (int i = 0;i < n;i++)
	{
		
		cout << *(mas1 + i);
	}
	cout << endl;
}
void Zumen(int *mas1, int *mas2, int n) 
{
	for (int i = 0;i < n;i++)
	{
		
		*(mas1 + i) = *(mas2 + i);
}
}
void runZerkal()
{
	int const n = 5;
	int *mas = new int[n];
	for (int i = 0;i < n;i++)
	{
		*(mas + i) = rand() % 11 - 1;
		cout << *(mas + i);
	}
	cout << endl;
	Zerkal(mas, n);
	for (int i = 0;i < n;i++)
	{
		
		cout << *(mas + i);
	}
	cout << endl;
}
void Zerkal(int *mas, int n)
{
	for (int i = 0;i < n / 2;i++)
		swap(*(mas + i), *(mas + n-1 - i));
		
}
void runShet()
{
	int const n = 5;
	int *mas = new int[n];
	for (int i = 0;i < n;i++)
	{
		*(mas + i) = rand() % 11 - 1;
		cout << *(mas + i);
	}
	cout << endl;

	int pol = 0, otr = 0;
	schet(mas, n, &pol,&otr);
	cout << "pol=" << pol << endl << "otr=" << otr << endl;
}
void schet(int *mas, int n, int *pol, int *otr)
{
	for (int i = 0;i < n;i++)
	{
		if ((*mas + i) >= 0)
			*pol = *pol + 1;
		else
			*otr = *otr + 1;
	}
}
void runObch()
{
	cout << "������� ������� �������\n";
	int n, m;cin >> n >> m;
	int *mas1 = new int[n];
	for (int i = 0;i < n;i++)
	{
		*(mas1 + i) = rand() % 11 - 1;
		cout << *(mas1 + i);
	}
	cout << endl;
	int *mas2 = new int[m];
	for (int i = 0;i < m;i++)
	{
		*(mas2 + i) = rand() % 11 - 1;
		cout << *(mas2 + i);
	}
	cout << endl;
	obch(mas1, mas2, n,m);
}
void obch(int *mas1, int*mas2, int n,int m) 
{
	int kol_vo = 0;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (*(mas1 + i) == *(mas2 + j))
				kol_vo++;
		}
	}
		int *mas3 = new int[kol_vo];
		int scht = 0;
		for (int i = 0;i < n;i++)
		{
			for (int j = 0;j < n;j++)
			{
				if (*(mas1 + i) == *(mas2 + j))
				{
					*(mas3 + scht) = *(mas1 + i);
				}
					
			}
		}
		for (int j = 0;j < kol_vo;j++)
		{
			cout << *(mas3 + j) << " ";
		}cout << endl;
}

