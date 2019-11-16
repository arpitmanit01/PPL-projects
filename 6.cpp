#include<iostream>
#include<cstdlib>
#include<string>
#include<math.h>

using namespace std;
int getsum(int* a, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum;
}
int main() {
	int a[] = { 5,6,7,4,2,9,8,4 };
	cout << "Sum : " << getsum(a, 8) << endl;
	cout << "\n\n//Scholar No.181112205-Arpit Verma//";

	return 0;
}
