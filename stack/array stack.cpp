#include <iostream>
using namespace std;

//
//class parent {
//private:
//	int x=0; //�ɹ����� �ʱ�ȭ �� �ϸ� ���� ��
//protected:
//	int y=0;
//public:
//	int z = 0;
//};
//
//
//class child1:public parent {
//
//};
//
//class child2 :protected parent {
//
//};
//
//class child3 :private parent {
//
//};
//
//
//int main() {
//
//	child1 a;
//	//child2 b;
//	//child3 c;
//	
//	//cout << a.x << endl;
//	//cout << a.y << endl;//�ٸ� �Լ�(main())���� ����� ���� public���� ����� ���� �ܿ� ����� �� �����ϴ�.
//	cout << a.z << endl;
//
//	//cout << b.x << endl;
//	//cout << b.y << endl;
//	//cout << b.z << endl;
//
//	//cout << c.x << endl;
//	//cout << c.y << endl;
//	//cout << c.z << endl;
//
//
//
//	return 0;
//};
//
//



class Stack {
public:
	Stack(int s = 100) {
		size = s;
		storage = new int[size];
		top = 0;

	}
	//bool IsEmpt{ return top == 0; };
	bool IsFull() { return top == size; };
	bool Push(int el);
	int Pop();
	int Top();
private:
	int* storage;
	int top;
	int size;

};
//
//
//bool Stack::Push(int el) {
//	if (IsFull()) return false;
//	storage[top++] = el;
//	return true;
//}
//int Stack::Pop() {
//	if (IsEmpty()) return 0;
//	return storage[--top];
//}
//int Stack::Top() {
//	if (IsEmpty()) return 0;
//	return storage[top - 1];
//}


int main() {

	cout << "git Ȯ��";



	return 0;
};