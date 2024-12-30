//#include<iostream>
//using namespace std;
//class A {
//public:
//	void show()
//	{
//		cout << "Parent class A ";
//	}
//};
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
//
//int main()
//{
//	A obj1;
//	B obj2;
//	C obj3;
//	A* Ptr;
//	//pointer type is A, so only A's function will be printed 3 times, due to not use of virtual
//	Ptr = &obj1;
//	Ptr->show();
//	Ptr = &obj2;
//	Ptr->show();
//	Ptr = &obj3;
//	Ptr->show();
//	system("pause");
//	return 0;
//}