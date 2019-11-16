#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
	int a[8] = { 50,26,45,12,38,71,14,55 };
	int temp;
	for (int j = 0; j < 7; j++) {
		for (int i = 0; i < 7; i++) {
			if (a[i] > a[i + 1]) {
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	}

	cout << "Largest Element : " << a[7] << " Second Largest : " << a[6] << endl;
	cout << "\n\n//Scholar No.181112205-Arpit Verma//";
	return 0;
}