//Task 1:
#include<iostream>
using namespace std;
//a) Write a function to input data continuously and store an array of integers.
void input(int array[],int &n)
{
	int a = 0;
	cout << " Quantity : ";
	cin >> n; ;
	cout << "Enter element in array: ";
	while (cin >> array[a] && array[a] != n ) {
		a++; //add element 1
	}
}
//b) Write a function to export integer array data from above.
void output(int array[],int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i]<<" ";
	}
	cout << endl;
}
//c) Write a function that couting and pronts to the screen all sets of numbers in the array that from a triangle.
//c.1) algorithm a function that logic find three sides of the triangle.
bool logic(int a, int b, int c)
{
	return a + b > c && a + c > b && b + c > a;
}
//c.2) Function find triangle.
void triangle(int array[], int &n) 
{
	int number = 0;
		for(int a = 0 ; a < n - 2; a++)
		{
			for (int b = a + 1; b < n - 1; b++)
			{
				for (int c = b + 1; c < n; c++)
				{
					if (logic(array[a], array[b], array[c])) 
					{
						++number;
						cout << number << " : " << array[a] << "," << array[b] << "," << array[c] << endl;
					}
				}
			}
		}
		if (number == 0) 
		{
			cout << "NO\n";
		}
}
////d) Write a function with sort_order(int data[], int a, int b, bool flag) to sort the array from starting position a to ending position b according to the flag 
// variable.If flag = true it is ascending sort and flag = flase is descending sort.
void swap(int& a, int& b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
//Sort_order
void sort_order(int array[], int a, int b, bool flag)
{
	int element = b;
	if (a < 0 || b < 0 || a >= b)
	{ 
		cout << "ERROR";
		return ;
	}
	// increate
	if (flag = true)
	for (int i = a; i < element - 1; i++)
	{
		for (int j = i + 1; j < element; j++)
		{
			if (array[i] > array[j])
			{
				swap(array[i], array[j]);
			}
		}
	}
	// decreate
	else
	{
		for (int i = 1; i < element - 1; i++)
		{
			for (int j = i + 1; j < element; j++)
			{
				if (array[i] < array[j])
				{
					swap(array[i], array[j]);
				}
			}
		}
	}
	
}
//Main
int main()
{
	int n,a,b;
	int array[100];
	input(array,n);
	output(array,n);
	cout << "S :"; // locaction start.
	cin >> a;
	cout << "E :"; // location end.
	cin >> b;
	triangle(array, n);
	sort_order(array, a, b, true);
	output(array, n);
	return 0;
}
