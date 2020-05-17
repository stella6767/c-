//#include <iostream>
//using namespace std;
//
//
//class parent {
//private:
//	int x=0; //맴버변수 초기화 안 하면 에러 뜸
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
//	//cout << a.y << endl;//다른 함수(main())에서 사용할 때는 public으로 선언된 변수 외엔 사용할 수 없습니다.
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
