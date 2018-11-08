#include <iostream>
#include <vector>
#include <iterator> 
#include <algorithm>
#include <numeric>
using namespace std;
 
class Base 
{
protected:
	int i = {0};
		
};
 
class Derived: public Base   //public修改成protected也是一样
{	
public:
    void fun(Derived &d)
	{
		d.i = 3;		//只有在派生类中才可以通过派生类对象访问基类的protected成员。
	}
    void print()
    {
        printf("===[%d]===\n", i);
    }
};
 
int main()
{
	Derived derived;
    derived.print();
//	derived.i = 3;		 //只有在派生类中才可以通过派生类对象访问基类的protected成员。
    derived.fun(derived);
    derived.print();
	return 0;			
}
