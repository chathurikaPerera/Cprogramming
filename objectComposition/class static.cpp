#include<iostream>
#include<math.h>
using namespace std;
class earthquake
{
	private:
		double magnitude;
		static int numberOfQuakes;
	public:
		earthquake();
		static int getnumberofquakes();
		
};
int earthquake::numberOfQuakes=0;
earthquake::earthquake()
{
	++numberOfQuakes;
}
int earthquake::getnumberofquakes()
{
	return numberOfQuakes;
}
int main()
{
	earthquake sanfrancisco89;
	cout<<earthquake::getnumberofquakes()<<endl;
	earthquake losangeles90;
	cout<<losangeles90.getnumberofquakes()<<endl;
	return 0;
}

