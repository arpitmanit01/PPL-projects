#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;
class B;
class C;

class A {
private:
	int* a;
	
public:
	A() {
		a = new int[6]{ 1, 3, 5, 7, 4, 9 };
	}
	void display() {
		cout << endl;
		for (int i = 0; i < 6; i++) {
			cout << a[i] << "\t";
		}
		cout << endl;
	}
	friend void fun(A&, B&, C&);
};

class B {
private:
	int* b;

public:
	B() {
		b = new int[6]{ 14,57,2,36,41,5 };
	}
	void display() {
		cout << endl;
		for (int i = 0; i < 6; i++) {
			cout << b[i] << "\t";
		}
		cout << endl;
	}
	friend void fun(A&, B&, C&);
};

class C {
private:
	int* c;

public:
	C() {
		c = new int[6]{0};
	}
	void display() {
		cout << endl;
		for (int i = 0; i < 6; i++) {
			cout << c[i] << "\t";
		}
		cout << endl;
	}
	friend void fun(A&, B&, C&);
};

void  fun(A& obj1, B& obj2, C& obj3) {
	for (int i = 0; i < 6; i++) {
		obj3.c[i] = obj1.a[i] + obj2.b[i];
	}
}

int main() {
	A a; B b; C c;
	a.display();
	b.display();
	fun(a, b, c);
	c.display();


	cout << "\n\n//Scholar No.181112205-Arpit Verma//";
	return 0;
}