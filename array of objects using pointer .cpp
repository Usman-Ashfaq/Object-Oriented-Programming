//#include<iostream>
//using namespace std;
//class student
//{
//	int m, n;
//public:
//	void setdata(int a, int b)
//	{
//		m = a;
//		n = b;
//	}
//	void getdata()
//	{
//		cout << " IBN   = " << m << endl;
//		cout << "Value  = " << n << endl;
//
//	}
//
//};
//int main()
//{
//	int size = 2;
//	student* ptr = new student[size];
//	student* temptr = ptr;
//	
//	int p, q;
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Enter ibn and value for " << i + 1 << " item : ";
//		cin >> p >> q;
//		ptr->setdata(p, q);
//		ptr++;
//	}
//	for (int j = 0; j < size; j++)
//	{
//		cout << "Item number " << j + 1 << endl;
//		ptr->getdata();
//		temptr++;
//	}
//
//	system("pause");
//	return 0;
//
//}
