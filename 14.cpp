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

void llinsert(int k) {
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

void lldeletebegin() {
	node* t = first;
	first = first->next;
	delete t;
}

void lldeleteend() {
	node* p, * q=NULL;
	p = first;
	while (p->next != NULL) {
		q = p;
		p = p->next;
	}
	q->next = NULL;
	delete p;
}

void lldeletemid(int pos) {
	node* p, * q=NULL;
	p = first;
	pos--;
	while (pos--) {
		q = p;
		p = p->next;
	}
	q->next = p->next;
	delete p;
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
		llinsert(a[i]);
	}
	cout << "Initial Linked List         : ";llprint();
	cout << "Deleting First Element      : "; lldeletebegin(); llprint();
	cout << "Deleting Last Element       : "; lldeleteend(); llprint();
	cout << "Deleting  Element at Posn 3 : "; lldeletemid(3); llprint();
	cout << "\n\n//Scholar No.181112205-Arpit Verma//";

	return 0;
}