
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <set>
#include <iterator>
using namespace std;

int temp, mod;
int a[5];
int flag = -1;
int coun[5];

int main()
{
	int n;
	cin >> n;
	for(int k = 0; k < n; k++)
	{
		cin >> temp;
		mod = temp % 5;
		if (mod == 0 && temp % 2 == 0)
		{
			coun[0]++;
			a[0] += temp;
		}
		else if (mod == 1)
		{
			coun[1]++;
			flag *= -1;
			a[1] += flag * temp;
		}
		else if (mod == 2)
		{
			coun[2]++;
			a[2]++;
		}
		else if (mod == 3)
		{
			a[3] += temp;
			coun[3]++;
		}
		else if (mod == 4)
		{
			coun[4]++;
			if (temp > a[4])
			{
				a[4] = temp;
			}
		}
	}

	if (a[0] != 0)
	{
		cout << a[0];
	}
	else
	{
		cout << "N";
	}

	for (int i = 1; i < 5; i++)
	{
		if (coun[i] != 0)
		{
			if (i == 3)
			{
				float f = float(a[3]) / float(coun[3]);
				printf(" %.1f", f);
			}
			else
			{
				{
					cout << " " << a[i];
				}
			}
		}
		else
		{
			cout << " "
				 << "N";
		}
	}

	return 0;
}