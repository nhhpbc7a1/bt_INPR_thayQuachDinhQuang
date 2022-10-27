/* Notes / Comments
Student ID: 22110036
Author: Nguyen Hoang Huy
Last updated: Oct 26, 2022
Purpose: */

#include <iostream>
using namespace std;

double n, x, x_mu_i, i_giaithua, kq_a, kq_b, kq_c, kq_d;

int main()
{
	cout << "Nhap so nguyen n: ";
	cin >> n;
	cout << "Nhap so thuc x: ";
	cin >> x;
	
	x_mu_i = 1;
	i_giaithua = 1;
	kq_a = 1;
	kq_b = kq_c = kq_d = 0;

	for (int i = 1; i <= n; i++)
	{

		x_mu_i *= x;
		i_giaithua *= i;
		if (i % 2 == 0)
			kq_a += x_mu_i / i_giaithua;
		else 
			kq_a -= x_mu_i / i_giaithua;

		kq_b += (double)((1 + i) * i / 2) / i_giaithua;
		kq_c = sqrt(i + kq_c);
		kq_d = sqrt((n - i + 1) + kq_d);
	}
	cout << "----------Ket_qua-------------" << endl;
	cout << "a. " << kq_a << endl;
	cout << "b. " << kq_b << endl;
	cout << "c. " << kq_c << endl;
	cout << "d. " << kq_d;
}