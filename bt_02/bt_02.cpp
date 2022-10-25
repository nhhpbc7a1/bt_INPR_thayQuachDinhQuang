/* Notes / Comments
Student ID: 22110036
Author: Nguyen Hoang Huy
Last updated: Oct 25, 2022
Purpose: */

//libraries
#include <iostream>
using namespace std;

//declares
int gio, phut, giay;

int main()
{
	//input time
	cout << "Nhap gio co dang: gio phut giay -> Press 'Enter' " << endl;
	cin >> gio >> phut >> giay;

	// a... check the time is reasonable or not
	if ((0 <= gio && gio <= 24) && (0 <= phut && phut <= 60) && (0 <= giay && giay <= 60))
		cout << "a. Thoi gian hop le" << endl;
	else
		cout << "a. Thoi gian Khong hop le" << endl;

	// b... calc the second numerical order of this time
	cout << "b. Giay thu " << gio * 3600 + phut * 60 + giay;
}