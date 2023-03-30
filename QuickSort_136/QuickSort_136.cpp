#include <iostream>
using namespace std;

int arr[20];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
	while (true)
	{
		cout << "Masukan panjang elemen pada array :";
		cin >> n;

		if (n <= 20)
			break;
		else;
		cout << "\nMaksimum panjang pada array adalah 20" << endl;
	}
	cout << "\n===================" << endl;
	cout << "\nEnter array element" << endl;
	cout << "\n-------------------" << endl;

	for (int i = 0;i < n;i++)
	{
		cout << "<" << (i + i) << "<";
		cin >> arr[i];
	}
}
