#include <iostream>
#include <string> 
#include<vector>
#include<list>
#include<algorithm>
#include<cstdio>
#include <set>
#include <map>
#include<iterator>
#include<cstring>
#include<string>
#include<sstream>
#include <math.h>
#include <list>
using namespace std;

string A, B;
int counA, counB, DA, DB;
int resA, resB;

int main()
{
	cin >> A >> DA >> B >> DB;

	for (int i = 0; i < A.length(); i++) {
		if (A[i] - '0' == DA) {
			counA++;
		}
	}

	for (int i = 0; i < B.length(); i++) {
		if (B[i] - '0' == DB) {
			counB++;
		}
	}

	for (int i = 0; i < counA; i++) {
		resA += DA * int(pow(10, i));
	}

	for (int i = 0; i < counB; i++) {
		resB += DB * int(pow(10, i));
	}

	cout << resA + resB;

	return 0;
}

// 如何处理 string和int转换问题，还是这样老问题
// 不能乱用to_string, 仅限于int 和 float/double 转换, 不能把char转换
// 想转换char为string 要减个'0'。这样就很傻，不如直接比较int