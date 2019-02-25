// PTA.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
using namespace std;
void isPAT(string temp);
int main()
{
	int n(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		string temp;
		cin >> temp;
		isPAT(temp);
	}

	return 0;
}

void isPAT(string temp) {
	int countP(0), countT(0);
	int placeP(0), placeT(0);

	bool status = true;

	for (int i = 0; i < temp.length(); i++) {
		if (temp[i] != 'P' && temp[i] != 'T' && temp[i] != 'A') {
			status = false;
		}
		else if(temp[i] == 'P')
		{
			placeP = i;
			countP++;
		}
		else if (temp[i] == 'T')
		{
			placeT = i;
			countT++;
		}
	}
	int middleA = placeT - placeP - 1;
	int frontA = placeP;
	int backA = temp.length() - placeT - 1;


	bool judge = (countP == 1) && (countT == 1) && (backA == middleA * frontA) && status && middleA;

	if (judge) cout << "YES" << endl;
	else
	{
		cout << "NO" << endl;
	}
}

