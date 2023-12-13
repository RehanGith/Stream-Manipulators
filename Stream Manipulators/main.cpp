#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	//int num{ 200 };
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
	//cout << dec << num << endl;
	//cout << hex << num << endl;
	//cout << oct << num << endl;
	//cout.setf(ios::showbase);   // set the showbase flag

	//cout << dec << num << endl;
	//cout << hex << num << endl;
	//cout << oct << num << endl;
	//cout.setf(ios::uppercase); // set the uppercase flag
	//cout << dec << num << endl;
	//cout << hex << num << endl;
	//cout << oct << num << endl;
	//cout.setf(ios::showpos);  // set the showpos (To show the + or - sign flag
	//cout << dec << num << endl;
	//cout << hex << num << endl;
	//cout << oct << num << endl;
	//cout << resetiosflags(ios::showbase); // reset showbase flag
	//cout << resetiosflags(ios::uppercase); // reset uppercase flag
	//cout << resetiosflags(ios::showpos);   // reset showpos flag
	//cout << dec << num << endl;
	//cout << hex << num << endl;
	//cout << oct << num << endl;

	// Floating Point formating 
	//double num1{ 123455667.2949 };
	//double num2{ 2411.2094 };
	//double num3{ 35.2 };

	//cout << "Predefined Precision\n";
	//cout << num1 << endl;
	//cout << num2 << endl;
	//cout << num3 << endl;
	//
	//cout << fixed;  // use fixed formating flag
	//cout << "Now we set the precision after decimal point using fixed\n";
	//cout << num1 << endl;
	//cout << num2 << endl;
	//cout << num3 << endl;
	//cout << setprecision(3);
	//cout << "Now we set precision 3 after decimal point" << endl;
	//cout << num1 << endl;
	//cout << num2 << endl;
	//cout << num3 << endl;
	//cout.unsetf(ios::fixed);
	//cout << setprecision(6);
	//cout << "now we set the default operations\n";
	//cout << num1 << endl;
	//cout << num2 << endl;
	//cout << num3 << endl;


	// Field weidth, align , fill
	int num1{ 209 };
	double num3{ 2355352.982 };
	string name{ "Hello" };
	cout << num1
		<< num3
		<< name << endl;

	cout << "Set the field Width to 10 for the next Data on stream\n";
	cout << setw(10) << num1
		<< num3
		<< name << endl;

	cout << "now set field weidth to 10 for all data stream and left justified\n";
	cout << "now set fill with - sign" << setfill('-') << endl;
	cout << setw(10) << left << num1 << setw(10) << left << num3 << setw(10) << left << name << endl;
		return 0;
}