#include<iostream>
using namespace std;
int main() {
	int x = 5;
	int* p = &x;
	int** ptr = &p;
	cout << &p << endl;
	cout << **ptr;

}
