#include<iostream>
using namespace std;
class A {
public:
	void show()
	{
		cout << "Parent class A ";
	}
};
//class B : public A {
//public:
//	void show()
//	{
//		cout << "Parent class B ";
//	}
//};
//class C : public A {
//public:
//	void show()
//	{
//		cout << "Parent class C ";
//	}
//};
//int main()
//{
//	//early binding there: type of pointer is base class means A*, So it will always print he content of class A
//	//irrespective of adress of object in pointer
//	A obj1;
//	B obj2;
//	C obj3;
//	A* Ptr;
//	Ptr = &obj1;
//	Ptr->show();
//	cout << endl;
//	Ptr = &obj2;
//	Ptr->show();
//	cout << endl;
//
//	Ptr = &obj3;
//	Ptr->show();
//	cout << endl;
//
//	system("pause");
//	return 0;
//}
