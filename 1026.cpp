#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <set>
#include <map>
#include <cstring>
#include <string>
#include <sstream>

#include<math.h>

using namespace std;

int main(){
    double c1, c2;
    cin >> c1 >> c2;
    int raw = (int)(round((c1-c2)/100));

    cout << raw;

    return 0;
}
