#include<iostream>

using namespace std;
//���һ��Բ��
const double PI = 3.14;

class Circle{
    //����
    //��Ϊ
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
