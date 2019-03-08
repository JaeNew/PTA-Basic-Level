
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

int A, B, D;

int main()
{
	cin >> A >> B >> D;

	int sum = A + B;
	int len = 0;

	vector<int> cont;

	if (sum == 0) {
		cout << 0;
		return 0;
	}

	if (D < 10) {
		while (sum) {
			cont.push_back(sum % D);
			len++;
			sum /= D;
		}

		for (int i = len - 1; i >= 0; i--) {
			cout << cont[i];
		}
	}
	else {
		cout << sum;
	}	
	return 0;
}