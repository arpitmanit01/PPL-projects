#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

void reversearr(int* a, int n) {
	int m = (n - 1) / 2;
	int temp;
	for (int i = 0; i <= m; i++) {
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}

void reversestring(string& str) {
	int n = str.length();
	int m = (n - 1) / 2;
	char temp;
	for (int i = 0; i <= m; i++) {
		temp = str[i];
		str[i] = str[n - 1 - i];
		str[n - 1 - i] = temp;
	}
}



int main() {
	int a[8] = { 5,84,71,64,29,86,33,45 };
	string str = "ABCD-1234";
	cout << "Original Array : " << endl;
	for (int i = 0; i < 8; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "Original String : \n" << str << endl;


	reversearr(a, 8);
	reversestring(str);
	
	cout << "\nReversed Array : " << endl;
	for (int i = 0; i < 8; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "Reversed String : \n" << str << endl << endl;


	cout << "\n\n<Scholar No.181112205-Arpit Verma>";

	return 0;
}