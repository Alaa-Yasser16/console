#include <iostream>
#include <string>

using namespace std;
class Alaa {
	int i = 3;
public:
	Alaa(){ }
	int get_alaa(){
		return i;
	}
};
int main() {
	Alaa a;
	cout << a.get_alaa();

}
