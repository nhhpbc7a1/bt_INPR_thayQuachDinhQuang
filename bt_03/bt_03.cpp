/* Notes / Comments
Student ID: 22110036
Author: Nguyen Hoang Huy
Last updated: Oct 25, 2022
Purpose: */

//libraries
#include <iostream>
using namespace std;

//declares
int h_1, m_1, s_1, h_2, m_2, s_2;

string zero(int x)
{
	if (x < 10) return "0";
	return "";
}
int main()
{
	//input times
	cout << "Nhap gio thu nhat co dang: gio phut giay. -> Press 'Enter' " << endl;
	cin >> h_1 >> m_1 >> s_1;
	cout << "Nhap gio thu hai co dang: gio phut giay. -> Press 'Enter' " << endl;
	cin >> h_2 >> m_2 >> s_2;

	// compare 2 times
	int kt = 0;
	if	(	
				(h_1 > h_2) 
			||	(h_1 == h_2 && m_1 > m_2)
			||	(h_1 == h_2 && m_1 == m_2 && s_1 > s_2)
		)
		kt = 1;

	if (
		(h_1 < h_2)
		|| (h_1 == h_2 && m_1 < m_2)
		|| (h_1 == h_2 && m_1 == m_2 && s_1 < s_2)
		)
		kt = 2;
	// output result of comparison

	cout << "------------ Ket qua --------------" << endl << " a. so sanh: ";
	cout << "(" << zero(h_1) << h_1 << ":" << zero(m_1) << m_1 << ":" << zero(s_1) << s_1 << ")";
	if (kt == 0) cout << " = ";
	if (kt == 1) cout << " > ";
	if (kt == 2) cout << " < ";
	cout << "(" << zero(h_2) << h_2 << ":" << zero(m_2) << m_2 << ":" << zero(s_2) << s_2 << ")";

	////
}