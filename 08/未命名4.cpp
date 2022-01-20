#include<iostream>

using namespace std;
//设计一个圆类
const double PI = 3.14;

class Circle{
    //属性
    //行为
    public:
    	int radius;
    public:
    	double mianji()
        {
            return 2 * PI * radius;
        }
};

int main()
{
	Circle c1;
    c1.radius = 10;
    cout<<c1.mianji()<<endl;
}
