#include<iostream>
#include<cstdlib>
#include<string>
#include<math.h>

using namespace std;

struct node{
	int data;
	node* next;
};

node* first=NULL;

void llinsertend(int k) {
	if (first== NULL) {
		node* t = new node;
		t->data = k;
		t->next = NULL;
		first = t;
	}
	else {
		node* p = first;
		while (p->next != NULL) {
			p = p->next;
		}
		node* t = new node;
		t->data = k;
		t->next = NULL;
		p->next = t;
	}
}

void llinsertbeg(int k) {
	node* t = new node;
	t->data = k;
	t->next = first;
	first = t;
}

void llinsertmid(int pos,int k) {
	node* p = NULL, * q = NULL;
	p = first;
	pos--;
	while (pos--) {
		q = p;
		p = p->next;
	}
	node* t = new node;
	t->data = k;
	t->next = p;
	q->next = t;
}

void llprint() {
	node* p = first;
	cout << endl;
	while (p) {
		cout << p->data << "\t";
		p = p->next;
	}
	cout << endl << endl;
}


int main() {
	int a[8] = { 20,45,42,14,36,55,24,74 };
	for(int i = 0; i < 8; i++) {
		llinsertend(a[i]);
	}
	cout << "Initial Linked List            : "; llprint();
	cout << "Inserting Element in Beginning : "; llinsertbeg(21); llprint();
	cout << "Inserting Element at the End   : "; llinsertend(57); llprint();
	cout << "Inserting Element at posn 3    : "; llinsertmid(3,67); llprint();
	cout << "\n\n//Scholar No.181112205-Arpit Verma//";

	return 0;
}