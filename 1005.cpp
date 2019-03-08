// PTA.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string> 
#include<vector>
#include<list>
#include<algorithm>
#include <set>
#include<iterator>
#include<cstring>
using namespace std;


int main()
{
	int num;
	int n;
	int arr[100000];
	int sign[100000];
	vector<int> container;

	memset(sign, 0, sizeof(sign));
	memset(arr, 0, sizeof(arr));
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		arr[i] = num;
		while (num != 1) {
			if (num % 2 == 0) {
				num /= 2;
				sign[num] = 1;
			}
			else {
				num = (num * 3 + 1)/2;
				sign[num] = 1;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		if (sign[arr[i]] == 0) {    //关键
			container.push_back(arr[i]);
		}
	}

	sort(container.begin(), container.end());
	vector<int>::reverse_iterator p = container.rbegin();
	bool isFirst = true;
	for (; p != container.rend(); p++) {
		if (isFirst) {
			cout << *p;
			isFirst = false;
		}
		else
		{
			cout << " " << *p;
		}
	}
	cout << endl;

	return 0;
}
