#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

class fib {
public:
	int a;
	int b;
	int num;
public:
	fib() {
		a = -1;
		b = 1;
		num = 0;
	}

	fib operator++(){
		a = b;
		b = num;
		num=a + b;
		fib result;
		result.a = a;
		result.b = b;
		result.num = num;
		return result;
	}


	fib operator++(int) {
		fib result;
		result.a = a;
		result.b = b;
		result.num = num;
		a = b;
		b = num;
		num = a + b;
		return result;
	}
	int getnum() { return this->num; }
};

int main() {
	
	fib obj;
	int n = 10;
	while (n--) {
		cout << obj.getnum()<<"\t";
		obj++;
	}
	cout << "\n\n//Scholar No.181112205-Arpit Verma//";
	return 0;
}