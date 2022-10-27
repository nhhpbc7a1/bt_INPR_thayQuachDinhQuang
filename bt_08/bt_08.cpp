/* Notes / Comments
Student ID: 22110036
Author: Nguyen Hoang Huy
Last updated: Oct 27, 2022
Purpose: */

#include <iostream>
using namespace std;

const int N = 1e6;
int n, tong_uoc, ch[N + 5], a[N+5], a_count;

int main()
{
	cout << "Nhap vao so nguyen duong n: ";
	cin >> n;
	cout << "--------------Ket_qua---------------" << endl;
	for (int i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0) 
			tong_uoc += i + n / i;
	}
	if (tong_uoc == 2 * n) cout << "a. n la so hoan hao." << endl;
	else cout << "a. n Khong la so hoan hao." << endl;

	if (tong_uoc == 1 + n) cout << "b. n la so nguyen to." << endl;
	else cout << "b. n Khong la so nguyen to." << endl;

	int gt = 1, vt = 0, vt_d;
	for (int i = 1; i <= n; i++)
	{
		gt *= i;
		if (n % gt == 0)
			vt_d = i;
		if (gt == n)
		{
			vt = i;
			break;
		}
		if (gt > n) break;
	}
	cout << "c. ";
	if (vt != 0) cout << "so k sao cho k!=n , k = ";
	cout << vt << endl;

	cout << "d. so k lon nhat sao cho k! la uoc cua n, k = " << vt_d << endl;


	ch[1] = 1; 
	for (int i = 2; i * i <= N; i++)
		if (ch[i] == 0)
			for (int j = i; j <= N; j += i)
				ch[j] = i;

	while (n > 1)
	{
		int x = ch[n], y = 0;
		if (x == 0)
			x = n;
		while (n % x == 0)
		{
			n /= x;
			y++;
			
			a[++a_count] = x;
			//cout << x << '\n';
			//if (a_count == 10) return 0;
		} 
	}

	cout << "e. Phan tich n thanh tich cac thua so nguyen to: ";
	for (int i = a_count; i >= 1; i--)
	{
		cout << a[i];
		if (i != 1) cout << " x ";
	}
}