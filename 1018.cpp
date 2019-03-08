
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

struct hand {
	string type;
	int count;
	int priority;
	hand(string j, int k, int m) : type(j), count(k), priority(m) {}
};

bool comp(hand &h1, hand &h2) {
	if (h1.count != h2.count) {
		return h1.count > h2.count;
	}
	else
	{
		return h1.priority < h2.priority;
	}
}

int n;
string tempA, tempB;
vector<hand> winTypeA;  // C,J,B
vector<hand> winTypeB;  // C,J,B
int counA[3], counB[3];

int main()
{
	winTypeA.push_back(hand("C", 0, 1));
	winTypeA.push_back(hand("J", 0, 2));
	winTypeA.push_back(hand("B", 0, 0));

	winTypeB.push_back(hand("C", 0, 1));
	winTypeB.push_back(hand("J", 0, 2));
	winTypeB.push_back(hand("B", 0, 0));

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> tempA >> tempB;
		string cond = tempA + tempB;
		if (cond == "CJ") {
			counA[0]++;
			counB[2]++;
			winTypeA[0].count++;
		}
		else if (cond == "CB") {
			counA[2]++;
			counB[0]++;
			winTypeB[2].count++;
		}
		else if (cond == "BJ") {
			counA[2]++;
			counB[0]++;
			winTypeB[1].count++;
		}
		else if (cond == "BC") {
			counA[0]++;
			counB[2]++;
			winTypeA[2].count++;
		}
		else if (cond == "JC") {
			counA[2]++;
			counB[0]++;
			winTypeB[0].count++;
		}
		else if (cond == "JB") {
			counA[0]++;
			counB[2]++;
			winTypeA[1].count++;
		}
		else if (cond == "BB" || cond == "CC" || cond == "JJ"){
			counA[1]++;
			counB[1]++;
		}
	}

	cout << counA[0] << " " << counA[1] << " " << counA[2] << endl;
	cout << counB[0] << " " << counB[1] << " " << counB[2] << endl;
	sort(winTypeA.begin(), winTypeA.end(), comp);
	sort(winTypeB.begin(), winTypeB.end(), comp);

	cout << winTypeA[0].type << " " << winTypeB[0].type;

	return 0;
}

//能够一次性过一道题，太不容易了