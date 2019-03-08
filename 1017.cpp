
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

string A;

int B;

int main()
{
	cin >> A >> B;
	int rem = 0;

	if (A.length() == 1 && A[0]-'0' < B) {
		cout << 0;
	}

	for (int i = 0; i < A.length(); i++) {
		int cur = A[i] - '0';
		cur += rem*10;
		if (cur >= B) {
			cout << cur / B;
			rem = (cur % B);
		}
		else {
			rem = cur;
		}
	}
	cout << " " << rem;

	return 0;
}