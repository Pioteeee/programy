#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1 {3, 50, 10};

	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << endl;
	}
	v1.insert(v1.begin(), -50);
	cout << endl;
	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << endl;
	}
	for (int i = 0; i < 3; i++) {
		v1.push_back(1);
	}

	cout << endl;
	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << endl;
	}

	vector<int> v2{ 1, 2, 3, 4 };
	vector<int>::iterator iter1 = v2.begin();

	cout << endl;
	for (int i = 0; i < v2.size(); i++) {
		cout << v2[i] << endl;
	}

	for (int i = 0; i < 3; i++) {
		v1.insert(v1.begin() + 1 + i, *iter1 + i);
	}
	cout << endl;
	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << endl;
	}

	int tab[5]{-1,-2,-3,-4};

	for (int i = 0; i < 5; i++) {
		v1.push_back(tab[i]);
	}
	cout << endl;
	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << endl;
	}

	v1.erase(v1.begin() + 1, v1.end() - 1);
	cout << endl;
	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << endl;
	}
	v1.swap(v2);

	cout << endl;
	for (int i = 0; i < v2.size(); i++) {
		cout << v2[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << endl;
	}

	return 0;
}