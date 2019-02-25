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
	string highName, highNo, lowName, lowNo, tempName, tempNo;
	int tempScore, highScore(-1), lowSCore(101);
	for (int i = 0; i < n; i++) {
		cin >> tempName >> tempNo >> tempScore;
		if (tempScore > highScore) {
			highScore = tempScore;
			highName = tempName;
			highNo = tempNo;
		}
		if (tempScore < lowSCore) {
			lowSCore = tempScore;
			lowName = tempName;
			lowNo = tempNo;
		}
	}

	cout << highName << " " << highNo << endl;
	cout << lowName << " " << lowNo << endl;

	return 0;
}
