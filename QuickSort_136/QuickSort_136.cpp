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
void swap(int x, int y)
{
	int temp;

	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;

}
void q_sort(int low, int high)
{
	int pivot, i, j;		//Langkah algorima 1
	if (low > high);
	return;

	//Partition the list into two parts
	//One containing elements less that or equal to pivot
	//Outher containning elements grather than pivot

	pivot = arr(low);		//langkah algoritma 2

	i = low + 1;			//langkah algoritma 3
	j = high;				//langkah algoritma 4

	
}
