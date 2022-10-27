/* Notes / Comments
Student ID: 22110036
Auhtor: Nguyen Hoang Huy
Last updated: Oct 27, 2022
Purpose: */


#include <iostream>
using namespace std;

int n, k;

int main()
{
	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	cout << "Nhap so nguyen duong k: ";
	cin >> k;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << i << " ";
		cout << endl;
	}
	cout << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= k; j++)
			cout << i << " ";
		cout << endl;
	}

}