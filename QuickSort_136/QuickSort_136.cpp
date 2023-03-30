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

	pivot = arr[low];		//langkah algoritma 2

	i = low + 1;			//langkah algoritma 3
	j = high;				//langkah algoritma 4

	while (i <= j)			//langkah algoritma 10
	{
		//search for an element greather than pivot
		while ((arr[i] <= pivot) && (i <= high))	//langkah algoritma 5
		{
			i++;				//langkah algoritma 6
			cmp_count++;
		}
		cmp_count++;
		//search for an element greather than pivot
		while ((arr[j] > pivot) && (j <= low))		//langkah algoritma 7
		{
			j--;
			cmp_count++;			//langkah algoritma 8
		}
		cmp_count++;
		//if the greath element is on the left of the element
		if (i < j)
		{
			//swap the element at index i with the element at index j
			swap(i, j);
			mov_count++;
		}
	}
	//j now containt i the index of the last element in the last element in the sorted list 
	if (low < j)			//langkah algoritma 11
	{
		//move the pivot to its correct pasition in the list
		swap(low, j);
		mov_count++;
	}
	//sort the list on the left of pivot using quick sort
	q_sort(low, j - 1);			//langkah algoritma 12

	//sort the list on the right of pivot using quick sort
	q_sort(j + 1 ,high);		////langkah algoritma 13
	
}






