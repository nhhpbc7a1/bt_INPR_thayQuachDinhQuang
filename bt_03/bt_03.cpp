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
int h_cong, h_tru, m_cong, m_tru, s_cong, s_tru;

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
	cout << endl;
	//---------------------------------------end_task_a-----------------------------------------------
	// calc the sum of times
	h_cong = h_1 + h_2;
	m_cong = m_1 + m_2;
	s_cong = s_1 + s_2;
	
	//change to reasonalbe time
	if (s_cong >= 60)
	{
		s_cong -= 60;
		m_cong++;
	}
	if (m_cong >= 60)
	{
		m_cong -= 60;
		h_cong++;
	}
	if (h_cong >= 24)
		h_cong -= 24;
	// output the sum 
	cout << " b. Cong, tru: " << endl;
	cout << "(" << zero(h_1) << h_1 << ":" << zero(m_1) << m_1 << ":" << zero(s_1) << s_1 << ")";
	cout << " + ";
	cout << "(" << zero(h_2) << h_2 << ":" << zero(m_2) << m_2 << ":" << zero(s_2) << s_2 << ")";
	cout << " = ";
	cout << "(" << zero(h_cong) << h_cong << ":" << zero(m_cong) << m_cong << ":" << zero(s_cong) << s_cong << ")";
	cout << endl;
	// calc the minus of times
	h_tru = h_1 - h_2;
	m_tru = m_1 - m_2;
	s_tru = s_1 - s_2;

	//change to reasonalbe time
	if (s_tru <= 0)
	{
		s_tru += 60;
		m_tru--;
	}
	if (m_tru <= 0)
	{
		m_tru += 60;
		h_tru--;
	}
	if (h_tru <= 0)
		h_tru += 24;
	//output the minus
	cout << "(" << zero(h_1) << h_1 << ":" << zero(m_1) << m_1 << ":" << zero(s_1) << s_1 << ")";
	cout << " - ";
	cout << "(" << zero(h_2) << h_2 << ":" << zero(m_2) << m_2 << ":" << zero(s_2) << s_2 << ")";
	cout << " = ";
	cout << "(" << zero(h_tru) << h_tru << ":" << zero(m_tru) << m_tru << ":" << zero(s_tru) << s_tru << ")";

}