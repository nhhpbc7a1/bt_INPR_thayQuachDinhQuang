/* Notes / Comments
Student ID: 22110036
Author: Nguyen Hoang Huy
Last updated: Oct 25, 2022
Puspose: */

//libraries
#include <iostream>
using namespace std;

//declares 
double n, kq, t;

int main()
{
	//input the length of trip
	cin >> n;
	n = n * 1000;

	//calc the cost for the first 600 meters
	if (n > 0) kq += 12000;

	if (n > 600) t = 600;
	else t = n;
	n = n - t;

	//calc the cost for each 100 meters 
	if (n > 19400) t = 19400;
	else t = n;
	n = n - t;

	kq = kq + t / 100 * 1500;
	
	//calc the cost for each kilometer after go 20km
	kq = kq + n / 1000 * 12000;

	//output the total cost
	cout << kq;
}