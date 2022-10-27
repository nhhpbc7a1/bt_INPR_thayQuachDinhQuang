/* Notes / Comments
Student ID: 22110036
Author: Nguyen Hoang Huy
Last updated: Oct 26, 2022
Purpose:*/

#include <iostream>
using namespace std;

int tong_boi_3, tong_boi_5, tong_boi_15, n;

int main()
{
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	tong_boi_3 = 3 * (1 + (n / 3)) * (n / 3) / 2;
	tong_boi_5 = 5 * (1 + (n / 5)) * (n / 5) / 2;
	tong_boi_15 = 15 * (1 + (n / 15)) * (n / 15) / 2;
	cout << "a. Tong cac gia tri la boi cua a = 3 hoac b = 5 va nho hon hoac bang n: " << tong_boi_3 + tong_boi_5 - tong_boi_15;
	cout << endl;
	cout << "b. Tong cac gia tri la boi cua a = 3 hoac b = 5 nhung khong phai ca hai va nho hon hoac bang n: " << tong_boi_3 + tong_boi_5 - 2 * tong_boi_15;
	cout << endl;

}