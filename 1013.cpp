
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <set>
#include <iterator>
using namespace std;

int arr[10000];
int sign[10000];
bool isPrime;
int coun, real;

int main()
{
	int start , end;
	cin >> start >> end;
	bool begin = false;

	for(int k = 2; k < 1000000; k++){  // 一开始设置1万，没过，设置100万就过了
		isPrime = true;
		for(int j = 2; j * j <= k; j++){
			if(k % j == 0){
				isPrime = false;
				break;
			}
		}
		
		//其实if(start<=count && end>=count) 就可以了
		
		if(isPrime){
			coun++;
			if(begin || coun == start){
				real = coun - start + 1;
				if(coun == start || real % 10 == 1){
					cout << k;
					begin = true;
				}else{
					cout << " " << k;
				}
				if(coun == end){
					return 0;
				}
			}
			if(begin && real % 10 == 0){
				cout << "\n";
			}
		}
	}
	return 0;
}