

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

struct Node
{
	int addr;
	int data;
	int next;
};

vector<Node> vin(100000);  //输入时存储
vector<Node> vsorted;      //初步连接链表
vector<Node> vout;         //输出结果

int main()
{
	int n, k, st;
	cin >> st >> n >> k;
	Node temp, cur, nex;

	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &temp.addr, &temp.data, &temp.next);
		vin[temp.addr] = temp;
	}

	if (st == -1) {
		cout << -1;
		return 0;
	}

	int nextAddr = st;
	while (nextAddr != -1) {   //-1是个坑，直接推出
		vsorted.push_back(vin[nextAddr]);
		nextAddr = vin[nextAddr].next;
	}

	int nSort = vsorted.size();   //坑点：顺序地址表中，可能有不在链表上的

	int right = k - 1;  //最右坐标

	while (right < nSort)
	{
		for (int i = right; i > right-k; i--) {
			vout.push_back(vsorted[i]);
		}
		right += k;
	}

	for (int i = right-k+1; i < nSort; i++) {
		vout.push_back(vsorted[i]);
	}

	for (int i = 0; i < nSort-1; i++) {   // 到nSort-1.最后留给-1
		vout[i].next = vout[i + 1].addr;    //这个时候再连接成链表
		printf("%05d %d %05d\n", vout[i].addr, vout[i].data, vout[i].next);
	}
	printf("%05d %d %d\n", vout[nSort - 1].addr, vout[nSort - 1].data, -1);  //最后地址-1 陷阱之一

	return 0;
}

//这题太经典了，基础被虐，思考和看题完全被虐
