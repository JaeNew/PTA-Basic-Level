
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <set>
#include <iterator>
#include <map>
#define maxn 100000
using namespace std;

struct cake
{
	double num;
	double sellTotal;
	double price;
}p[maxn];

int N;
double D;

bool comp(cake &c1, cake &c2){
    return c1.price > c2.price;
}

int main()
{
	cin >> N >> D;
	for(int i=0; i<N; i++){
		scanf("%lf", &p[i].num);
	}

	for(int i=0; i<N; i++){
		scanf("%lf", &p[i].sellTotal);
		p[i].price = p[i].sellTotal / p[i].num;
	}

	sort(p, p+N, comp);

	double sellMoney = 0;

	for(int i = 0; i<N; i++){
		if(p[i].num <= D){
		    sellMoney += p[i].price * p[i].num;
		    D -= p[i].num;
		}else{
		    sellMoney += p[i].price * D;
            break;
		}
	}

	printf("%.2f", sellMoney);

	return 0;
}

//吸取教训：
//1.一个结构体的vector 可以简略成结构体数组，数组能用的时候不要用vector。数组也可以sort
//2.尽管题目告诉了正整数，可是int计算容易越界，最好化成double(float也不行)
//3.牢记输入double应该用 %lf. 并且高精度的输入，用scanf比cin保险