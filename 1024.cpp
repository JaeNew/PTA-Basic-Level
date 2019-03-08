#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <list>
#include <algorithm>
#include <set>
#include <iterator>
#include <map>

using namespace std;

string str, fir, scale;

int main()
{
	cin >> str;
	int pos = str.find("E");
	fir = str.substr(0, pos);
	scale = str.substr(pos+1, str.length()-pos-1);

	int len = fir.length();
	if(fir[0] == '+'){
		fir.erase(fir.begin());
	}

 	stringstream ss;
 	ss << scale;

 	int numScale;
 	ss>>numScale;

	if(numScale >= 0){
		if(numScale >= (len-3)){
			fir.erase(fir.begin()+fir.find(".")); // 抹掉小数点
			cout << fir;
			for(int i=0; i<(numScale-len+3); i++){
				cout << 0;
			}
		}else{
			fir.erase(fir.begin()+fir.find("."));  // 抹掉小数点
			fir.insert((numScale+2), ".");
			cout << fir;
		}
	}else{
		numScale = abs(numScale);
		fir.erase(fir.begin()+fir.find("."));  // 抹掉小数点
		if(fir[0] == '-') {
			cout << "-";
			fir.erase(fir.begin());
		}
		cout<<"0.";
		for(int i=0; i<numScale-1; i++){
			cout << 0;
		}
		cout << fir;

	}

	return 0;
}

//太感动了，写了一小时过了，没白写