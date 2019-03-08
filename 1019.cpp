
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

int A;

int toNum(string str) {
	return (str[0]-'0') * 1000 + (str[1] - '0') * 100 + (str[2] - '0') * 10 + (str[3] - '0');
}

string sortString(string str, bool pos) {
	vector<char> con;
	con.push_back(str[0]); con.push_back(str[1]); con.push_back(str[2]); con.push_back(str[3]);
	sort(con.begin(), con.end());

	string s = "";
	if (pos) {   //从小到大
		for (int i = 0; i < 4; i++) {
			char s1[2] = { con[i], 0 };  //定义一个字符数组，即传统的字符串，使其值为单个字符加上字符串结束符\0。
			s += s1;  //将字符赋值给string对象。
		}
	}
	else {
		for (int i = 3; i >= 0; i--) {
			char s1[2] = { con[i], 0 };  //定义一个字符数组，即传统的字符串，使其值为单个字符加上字符串结束符\0。
			s += s1;  //将字符赋值给string对象。
		}
	}
	
	return s;
}

int main()
{
	cin >> A;

	string str = to_string(A);

	if (str == "6174") {
		cout << "7641 - 1467 = 6174";
		return 0;
	}

	if (str[0] == str[1] && str[2] == str[3] && str[1] == str[2]) {
		cout << str << " - " << str << " = " << "0000";
		return 0;
	}

	while (str != "6174") {
		string tempA = sortString(str, false);
		string tempB = sortString(str, true);
		cout << tempA << " - " << tempB << " = ";
		int res = toNum(tempA) - toNum(tempB);
		if (res < 1000) {
			cout << 0;
			str = "0" + to_string(res);
		}
		else
		{
			str = to_string(res);
		}
		cout << res << endl;
	}

	return 0;
}