#include <iostream>

using namespace std;

int main()
{
	/*
	int n;
	cout<<"podaj ilosc liczb"<<endl;
	cin >> n;
	int *tab = new int [n];
	*/
	/*
	* cout<<"podaj liczby"<<endl;
	for (int i = 0; i < n; i++)//zad 1
	{
		cin >> tab[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << tab[i] << endl;
	}
	*/

	/*
	int i=0;//zad 2
	cout<<"podaj liczby"<<endl;
	while (i<n)
	{
		cin >> tab[i];
		i++;
	}
	int j = n;
	while (j>0)
	{
		cout << tab[j-1] << endl;
		j--;
	}
	delete[] tab;
	*/
	/*
	string odp;	//zad 3
	int i = 0,max=0,min=0,n=1;
	double sr = 0;
	do
	{
		cin >> odp;
		cout<<"czy chcesz zakonczyc (t/n)"<<endl;
		cin >> i;
		if (max <= i || n==1)
		{
			max = i;
		}
		if (min>=i || n == 1)
		{
			min = i;
		}
		sr = sr + i;
		n++;
	} while (odp=="n");
	cout << max << " " << min << " " << sr / n << endl;
	*/
	int n,m;
	string odp,odp1;
	cout << "podaj wielkosc zakresu" << endl;
	cin >> m >> n;
	int n1 = (n - m)-1;
	int* tab = new int[n1];
	for (int i = m; i < n; i++)
	{
		tab[i] = m;
	}
	int j = n1/2;
	while(j<n1)
	{
		
		cout << "czy twoja liczba " << tab[j] << " (t/n)" << endl;
		cin >> odp1;
		if (odp1 == "t")
		{
			break;
		}
		else
		{
			cout << "czy twoja liczba jest wieksza? (t/n)" << endl;
			cin >> odp;
			if (odp == "t")
			{
				j = n1-j;

			}
			else
			{
				j = j - n1;
			}
		}
	}
}