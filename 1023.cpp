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

int main()
{
	for (int i = 0; i < 10; i++) {
		scanf("%d", &coun[i]);
	}

	for (int i = 1; i < 10; i++) {
		if (coun[i] > 0) {
			coun[i]--;
			cout << i;
			break;
		}
	}

	for (int i = 0; i < 10; i++) {
		if (coun[i] > 0) {
			for (int j = 0; j < coun[i]; j++) {
				cout << i;
			}
		}
	}

	return 0;
}
