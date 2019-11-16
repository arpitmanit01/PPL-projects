#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

void chkequality(string* stra, string* strb) {
	string str1 = *stra;
	string str2 = *strb;
	bool ans = true;
	if (str1.length() != str2.length()) ans = false;
	else {
		for (int i = 0; i < str1.length(); i++) {
			if (str1[i] != str2[i]) ans = false;
		}

	}

	if (ans) { cout << "Strings are EQUAL" << endl; }
	else { cout << "Strings are NOT EQUAL" << endl; }

}


int main() {
	string str1, str2;
	str1 = "Hello", str2 = "Hello123";
	chkequality(&str1, &str2);

	str1 = "Hello", str2 = "Hello";
	chkequality(&str1, &str2);
	cout << "\n\n<Scholar No.181112205-Arpit Verma>";
	return 0;
}