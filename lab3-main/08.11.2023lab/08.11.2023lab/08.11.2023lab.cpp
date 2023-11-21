#include <iostream>
#include <cmath>

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
	/*int n,m; //zad 4
	string odp,odp1;
	cout << "podaj wielkosc zakresu" << endl;
	cin >> m >> n;
	int n1 = (n - m);
	int* tab = new int[n1];
	for (int i = 0; i < n1; i++)
	{
		tab[i] = m;
		m++;
	}
	int j = n1/2;
		cout << "czy to twoja liczba " << tab[j] << " (t/n)" << endl;
		cin >> odp1;
		if (odp1 == "t")
		{
			cout << "dziekuje za gre " << endl;
		}
		else
		{
			cout << "czy twoja liczba jest wieksza? (t/n)" << endl;
			cin >> odp;
			if (odp == "t")
			{
				for (int i = n/2; i < n; i++)
				{
					cout << "czy to twoja liczba " << tab[i] << " (t/n)" << endl;
					cin >> odp1;
					if (odp1 == "t")
					{
						cout << "dziekuje za gre " << endl;
						return 0;
					}
				}
			}
			else
			{
				for (int i = n / 2; i >= 0; i--)
				{
					cout << "czy to twoja liczba " << tab[i] << " (t/n)" << endl;
					cin >> odp1;
					if (odp1 == "t")
					{
						cout << "dziekuje za gre " << endl;
						return 0;
					}
				}
			}
			delete[] tab;
		}*/
	int n,q,a1;
	cin >> n;
	cin >> q >> a1;
	int suma1 = 0, suma2 = 0;
	int* tab = new int[n];
	for (int i = 0; i < n; i++)
	{
		tab[i] = a1 * pow(q, i);
		suma1 += tab[i];
		cout << tab[i] << endl;
	}
	suma2 = a1 * (1 - pow(q, n) / (1 - q));
	cout << "suma z pentli " << suma1 << " suma ze wzoru " << suma2;
	delete[] tab;
}