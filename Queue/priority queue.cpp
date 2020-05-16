#include <iostream>
#include <string>
using namespace std;

struct node {
	int data;
	int key;
	struct node* next;
};

struct node* head;
struct node* tail;

void enqueue(int value, int key) {
	struct node* new_node = new node();
	new_node->data = value;
	new_node->next = NULL;
	if (head == NULL) {
		head = new_node;
		tail = new_node;
		return;
	}
	struct node* it;
	struct node* it1;
	it = head;
	it1 = NULL;
	while (it != NULL) {
		if (it->key < key) {
			if (it1 != NULL) it1->next = new_node;
			new_node->next = it;
			if (it1 == NULL) head = new_node;
			return;
		}
		it1 = it;
		it = it->next;
	}
	it1->next = new_node;
	tail = new_node;
}

void dequeue() {
	if (head == NULL) {
		cout << "Queue is EMPTY!" << endl;
		return;
	}
	cout << "Dequeued Value is " << head->data << " with key: " << head->key << endl;
	struct node* temp = head;
	head = head->next;
	if (head == NULL) tail = NULL;
	delete temp;
}

void peek() {
	if (head == NULL)
		cout << "Peeked Value" << endl;
}

void print() {
	struct node* it;
	it = head;
	cout << "Priority Queue: ";
	while (it != NULL) {
		cout << it->data << " ";
		it = it->next;
	}
	cout << endl;
}
int main()
{
	head = tail = NULL;
	string s;
	int value;
	int key;
	while (1) {
		cin >> s;
		if (s == "enqueue") {
			cin >> value >> key;
			enqueue(value, key);
		}
		else if (s == "dequeue") {
			dequeue();
		}
		else if (s == "peek") {
			peek();
		}
		else break;
		print();
	}
	return 0;
}