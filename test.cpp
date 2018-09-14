#include <iostream>
#include <string>
using namespace std;

class student
{
public:
	student(int age,string name):age(age),name(name){}
private:
	int age;
	string name;
};


int main()
{
	student s1(13,"张三");
	return 0;
}
