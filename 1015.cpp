
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

class Student {
public:
	int id;
	int morality;
	int talent;
	Student(int a, int b, int c);
};

Student::Student(int a, int b, int c) {
	this->id = a;
	this->morality = b;
	this->talent = c;
}

vector<Student> v[4];  //vector的数组

int n, L, H;
int a, b, c;
int coun;

bool nonmem_cmp(const Student &s1, const Student &s2)
{
	if (s1.morality + s1.talent != s2.morality + s2.talent)
		return s1.morality + s1.talent > s2.morality + s2.talent;
	else
	{
		if (s1.morality != s2.morality) {
			return s1.morality > s2.morality;
		}
		else
			return s1.id < s2.id;
	}
}

int main()
{
	scanf("%d %d %d", &n, &L, &H);
	for (int i = 0; i < n; i++) {
		if(scanf("%d %d %d", &a, &b, &c));
		int priority;
		if (b >= L && c >= L) {
			coun++;
			Student stu(a, b, c);
			if (b >= H && c >= H)
				priority = 1;
			else if (b >= H && c < H)
				priority = 2;
			else if (b < H && c < H && b >= c)
				priority = 3;
			else
				priority = 4;

			v[priority].push_back(stu);
		}
		

	}

	cout << coun << endl;

	for (int i = 1; i < 5; i++) {
		sort(v[i].begin(), v[i].end(), nonmem_cmp);
		for(int j = 0; j < v[i].size(); j++)
			cout << v[i][j].id << " " << v[i][j].morality << " " << v[i][j].talent << endl;
	}
	

	return 0;
}

/* 超时优化
各类型的 container 放在一个数组，定义一个priority
cin cout 容易超时
*/