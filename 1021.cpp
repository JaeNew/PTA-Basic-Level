

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

int coun[10];

string str;

int main()
{
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		int num = str[i] - '0';
		coun[num]++;
	}

	for (int i = 0; i < 10; i++) {
		if(coun[i] > 0)
		printf("%d:%d\n", i, coun[i]);
	}
	
	return 0;
}