#include <iostream>
#include <string>
using namespace std;
//#define DEBUG
int main()
{
	cout << "Introduceti un numar intreg mai mic decat 100" << endl;
	int n;
	cin >> n;

	cout << "Introduceti un numar intreg k" << endl;
	int k;
	cin >> k;

	string a = "ESTE";
	string b = "NU ESTE";

	int m;
	m = n;
	int lenghtN = 0;
	if (n < 100)
	{
		while (m != 0)
		{
			lenghtN++;
			m = m / 10;
#ifdef DEBUG
			cout << "Acum ii while\t";
			cout << lenghtN << endl;;
#endif DEBUG
		}

		int h, c;
		h = n;
		int* arr = new int[lenghtN];
		bool este = false;
		for (int i = 0; i < lenghtN; i++)
		{
			c = h % 10;
			h = h / 10;
#ifdef DEBUG
			cout << "Acum ii for\t";
			cout << c << endl;
#endif
			arr[i] = c;
			if (arr[i] == k)
			{
				cout << a << endl;
				este = true;
				break;
			}
		}
		if (!este)
		{
			cout << b << endl;
		}
		delete[] arr;
	}
	else
	{
		cout << "Numarul este mai mare dacat 100" << endl;
	}
 return 0;
}