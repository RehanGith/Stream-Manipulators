#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int num{ 200 };
	// Boolean formating type
	//cout << (num == 200) << endl;
	//cout << (num == 100) << endl;
	//cout.setf(ios::boolalpha);  // true or false
	//cout << (num == 200) << endl;
	//cout << (num == 100) << endl;
	//cout << resetiosflags(ios::boolalpha);
	//cout << (num == 200) << endl;
	//cout << (num == 100) << endl;

	// integer formating type
	cout << dec << num << endl;
	cout << hex << num << endl;
	cout << oct << num << endl;
	cout.setf(ios::showbase);   // set the showbase flag

	cout << dec << num << endl;
	cout << hex << num << endl;
	cout << oct << num << endl;
	cout.setf(ios::uppercase); // set the uppercase flag
	cout << dec << num << endl;
	cout << hex << num << endl;
	cout << oct << num << endl;
	cout.setf(ios::showpos);  // set the showpos (To show the + or - sign flag
	cout << dec << num << endl;
	cout << hex << num << endl;
	cout << oct << num << endl;
	cout << resetiosflags(ios::showbase); // reset showbase flag
	cout << resetiosflags(ios::uppercase); // reset uppercase flag
	cout << resetiosflags(ios::showpos);   // reset showpos flag
	cout << dec << num << endl;
	cout << hex << num << endl;
	cout << oct << num << endl;
		return 0;
}