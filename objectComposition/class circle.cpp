#include<iostream>
#include<math.h>
using namespace std;
const double PI =1.34;
class circle
{
	private:
		double radius;
	public:
		circle(double =1.0);
		double cal();
		
};
circle::circle(double r)
{
	radius=r;
}

double circle::cal()
{
	return (PI * radius * radius);
}
class cylinder : public circle
{
	private:
		double length;
	public:
		cylinder(double l, double r):circle(r),length(l){
		}
		double cal();
		
};
double cylinder::cal()
{
	return length * circle::cal();
}
int main()
{
	circle circle_1, circle_2(7);
	cylinder cylinder_1(3,4);
	cout<<"the area of circle 1 is "<<circle_1.cal()<<endl;
	cout<<"the area of circle 2 is "<<circle_2.cal()<<endl;
	cout<<"the area of cylinder is "<<cylinder_1.cal()<<endl;
	return 0;
}
