#include <iostream>
#include <string>
using namespace std;
class Date{
public:
int day,month,year;
Date(int d, int m, int y){
day =d;
year =y;
//month = m;
	if(m>12 || m<1){
		month=1;
	}
	else if(m<12 && m>1)
	{
	month =m;
	}}

void displaydate(){
cout<<"Date "<<day<<"\\"<<month<<"\\"<<year<<"\n";
}
void setday(int a){
day =a;
}
void setmonth(int a){
month = a;
}
void setyear(int a){
year= a;
}
};

int main()
{
Date d(11,6,2019) ;
d.displaydate();
d.setday(15);
d.setmonth(12);
d.displaydate();
}
