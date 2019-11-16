#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int countvowel(string str) {
	int sum = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') sum++;
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') sum++;
	}
	return sum;
}

int countalpha(string str) {
	int sum = 0;
	for (int i = 0; i < str.length(); i++) {
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) sum++;
		}
	return sum;
}


int main() {
	string s = "Hello 123 This is TEST MESSAGE ";
	cout << "Consonants = " << countalpha(s) - countvowel(s); 
	cout << "\nVowels     = " << countvowel(s);
	cout << "\n\n//Scholar No.181112205-Arpit Verma//";
	return 0;
}