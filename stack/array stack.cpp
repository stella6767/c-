//#include <iostream>
//using namespace std;
//
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
//
