/* Notes / Comments
Student ID: 22110036
Author: Nguyen Hoang Huy
Last updated: Oct 26, 2022
Purpose: */

#include <iostream>
using namespace std;

int n, dem_uoc, uoc_max, uoc_chan_max, uoc_chan_min, tich_uoc_chan;

int main()
{
	cout << "Nhap vao so nguyen duong n: ";
	cin >> n;

	tich_uoc_chan = 1;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			dem_uoc++;
			uoc_max = i;
			if (i % 2 == 0)
			{
				uoc_chan_max = i;
				if (uoc_chan_min == 0) uoc_chan_min = i;
				tich_uoc_chan *= i;
			}
		}
	}
	cout << "-----------Ket_qua------------" << endl;
	cout << "a. So uoc cua n: " << dem_uoc << endl;
	cout << "b. Uoc lon nhat cua n: " << uoc_max << endl;
	cout << "c." << endl;
	cout << "_ Uoc chan nho nhat cua n: " << uoc_chan_min << endl;
	cout << "_ Uoc chan lon nhat cua n: " << uoc_chan_max << endl;
	cout << "d. ";
	if (tich_uoc_chan != 1) cout << "Tich cac uoc so chan cua n: " << tich_uoc_chan;
	else cout << "So n khong co uoc chan.";

}