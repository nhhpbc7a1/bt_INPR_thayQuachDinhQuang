/* Notes / Comments
Student ID: 22110036
Author: Nguyen Hoang Huy
Last updated: Oct 27, 2022
Purpose: */

#include <iostream>
using namespace std;

int n;

int main()
{
	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	int luu_n = n;

	int dem = 0, dem_cs_le = 0, m = 0, re = 10, kt_tang = 1;
	while (n > 0)
	{
		int tam = n % 10;
		// dem so luong chu so
		dem++;
		// dem so luong chu so le
		if (tam % 2 == 1)
			dem_cs_le++;
		// tim so dao nguoc cua n
		m = m * 10 + tam;
		// kiem tra cac chu so cua n co tang dan tu trai sang phai hay khong
		if (tam >= re)
			kt_tang = 0;

		re = tam;
		n /= 10;
	}
	cout << "a. So luong chu so cua n: " << dem << endl;
	cout << "b. So luong chu so le cua n: " << dem_cs_le << endl;
	cout << "c. So dao nguoc cua n: " << m << endl;

	if (luu_n == m) cout << "d. True" << endl;
	else cout << "d. False" << endl;

	if (kt_tang == 1) cout << "e. Cac chu so cua n tang dan tu trai qua phai";
	else cout << "e. Cac chu so cua n Khong tang dan tu trai qua phai";
}