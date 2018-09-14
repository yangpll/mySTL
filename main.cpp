#include <iostream>
#include "List"
using namespace std;

class student
{
public:
	student(){};
	student(int score,string name):score(score),name(name){}
	int score;
	string name;
};

class person
{
public:
	int age;
	string sex;
	string nations;
	person(int age,string sex,string nations):age(age),sex(sex),nations(nations){};
	void myprint()
	{
		cout<<"age="<<age<<" "
			<<"sex="<<sex<<" "
			<<"nations="<<nations<<endl; 
	}
};

void printPerson(person& per)
{
	per.myprint();
}

void printStudent(student& stu)
{
	cout<<"score="<<stu.score<<" "
		<<"name="<<stu.name<<endl;
}

void test01()
{
	student s1(1001,"张三"),s2(1002,"李四");
	List<student> stulist;
	stulist.push_back(s1),stulist.push_back(s2);
	stulist.travers(printStudent);
	person p1(18,"男","加利福利亚"),p2(23,"女","西雅图");
	List<person> perlist;
	perlist.push_back(p1),perlist.push_back(p2);
	perlist.travers(printPerson);
//	perlist.test();
	cout<<stulist.size()<<endl;
}


void intagerPrint(int &i)
{
	cout<<i<<" ";
}

void test02()
{
	List<int> list;
	list.push_back(21);
	list.push_back(2);
//	list.push_back(1);
	list.travers(intagerPrint);
	cout<<endl;
	list.InsertSort();
	list.travers(intagerPrint);
	cout<<endl;
	
}
bool mycompar(student& s1,student& s2)
{
	return s1.score<s2.score;
}

void test03()
{
	student s1(1001,"张三"),s2(1009,"李四"),s3(1002,"王五");
	List<student> stulist;
	stulist.push_back(s1),stulist.push_back(s2),stulist.push_back(s3);
	stulist.travers(printStudent);
	stulist.InsertSort(mycompar);
	stulist.travers(printStudent);

}

int main()
{	
//	test01();
//	test02();
	test03();
	return 0;
}
