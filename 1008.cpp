
#include <iostream>

#include <list>
using namespace std;

bool isPrime(int k) {
	for (int i = 2; i*2 < k; i++) {
		if (k % i == 0) return false;
	}
	return true;
}

int main()
{
	int n, k;
	cin >> n >> k;
	k = k % n;
	list<int> container;
	int arr[100];
	int temp;

	for (int i = 0; i < n-k; i++) {
		cin >> temp;
		container.push_back(temp);
	}

	list<int>::iterator it = container.begin();
	for (int i = n-k; i < n; i++) {
		cin >> temp;
		container.insert(it, temp);
	}

	it = container.begin();
	cout << (*it);
	it++;
	for (; it != container.end(); it++) {
		cout << " " << (*it);
	}

	return 0;
}