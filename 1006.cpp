#include <iostream>
#include <string> 
#include<vector>
#include<list>
#include<algorithm>
#include <set>
#include<iterator>
#include<cstring>
#include<string>
#include<sstream>
#include <math.h>
using namespace std;

int main()
{
	string input;
	cin >> input;
	int len = input.length();
	stringstream stream;
	int number = 0;
	stream << input;
	stream >> number;
	stream.clear();   //转换后字符串还保留在流中，需使用手动清空
	vector<string> buffer;

	int gewei = number % 10;
	for (int k = gewei; k > 0; k--) {
		buffer.insert(buffer.begin(), to_string(k));
	}

	if (len >= 2) {
		int shiwei = (number / 10) % 10;
		
		for (int k = shiwei; k > 0; k--) {
			buffer.insert(buffer.begin(), "S");
		}
	} 
	
	if (len >= 3) {
		int baiwei = (number / 100) % 10;
		
		for (int k = baiwei; k > 0; k--) {
			buffer.insert(buffer.begin(), "B");
		}
	}

	vector<string> ::iterator it = buffer.begin();
	for (; it != buffer.end(); it++) {
		cout << *it;
	}
	
	return 0;
}