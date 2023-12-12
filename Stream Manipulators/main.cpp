#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int num{ 200 };
	cout << (num == 200) << endl;
	cout << (num == 100) << endl;
	cout.setf(ios::boolalpha);  // true or false
	cout << (num == 200) << endl;
	cout << (num == 100) << endl;
	cout << resetiosflags(ios::boolalpha);
	cout << (num == 200) << endl;
	cout << (num == 100) << endl;
	return 0;
}