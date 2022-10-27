/* Notes / Commnents 
Student ID: 22110036
Author: Nguyen Hoang Huy
Last updated: Oct 26, 2022
Purpose:*/

#include <iostream>
using namespace std;

int d, m, y, ngay, thang, nam;

int main()
{
	cout << "Nhap ngay co dang 'ngay thang nam': ";
	cin >> d >> m >> y;
	ngay = d;
	thang = m;
	nam = y;

	int tt_m[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (y % 4 == 0) tt_m[2] = 29;

	// check the date reasonable or not
	if (d < 1 || d > tt_m[m] || m < 1 || m > 12)
	{
		cout << "a. Ngay Khong hop le." << endl;
		return 0;
	}
	else cout << "a. Ngay hop le." << endl;

	// date of the day before
	d--;
	if (d < 1)
	{
		d = tt_m[m - 1];
		m--;
	}
	if (m < 1)
	{
		m = 12;
		y--;
	}
	cout << "b. " << endl; 
	cout << "_ Ngay ke truoc: " << d << "/" << m << "/" << y << endl;
	d = ngay; m = thang; y = nam;

	// date of the following day
	d++;
	if (d > tt_m[m]);
	{
		d = 1;
		m++;
	}
	if (m > 12)
	{
		m = 1;
		y++;
	}

	cout << "_ Ngay ke sau: " << d << "/" << m << "/" << y << endl;
}