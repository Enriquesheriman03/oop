#include <iostream>
#include <string>
using namespace std;
int main()
{
	int monthly,noofworkingdays,noofovertime,noofholidays,tardy,absences,bonuses,SSS,Absences;
		string lastname,firstname;
		cout<<"\tPayroll system"<<endl;
		cout<<"--------------------------"<<endl;
		cout<<"\tmonthly"<<endl;
		cout<<"\last name:"<<endl;
		cin>>lastname;
		cout<<"first name:"<<endl;
		cin>>firstname;
		cout<<"no.of working days:"<<endl;
		cin>>noofworkingdays;
		cout<<"no.of over time:"<<endl;
		cin>>noofovertime;
		cout<<"tardy:"<<endl;
		cin>>tardy;
		cout<<"bonuses:"<<endl;
		cin>>bonuses;
		
		cout<<"--------------------"<<endl;
		cout<<"payslip"<<endl;
		cout<<"name:"<<lastname<<","<<firstname<<endl;
		cout<<"no.of working days="<<noofworkingdays*50000<<".00 rupiah"<<endl;
		cout<<"no.of over time="<<noofovertime*5000<<".00 rupiah"<<endl;
		cout<<"tardiness="<<tardy*3000<<".00 rupiah"<<endl;
		cout<<"bonuses="<<bonuses<<".00 rupiah"<<endl;
		cout<<"gross pay="<<noofworkingdays*50000+noofovertime*5000+bonuses<<".00 rupiah"<<endl;
		
		cout<<"-----------------------------"<<endl;
		cout<<"deduction"<<endl;
		cout<<"sss----"<<noofworkingdays*50000+noofovertime*5000+bonuses-450000<<".00 rupiah"<<endl;
		cout<<"tardiness----"<<noofworkingdays*50000+noofovertime*5000+bonuses-450000-tardy*3000<<".00 rupiah"<<endl;
		cout<<"total net pay----"<<noofworkingdays*50000+noofovertime*5000+bonuses-450000-tardy*3000<<".00 rupiah"<<endl;
		system("pause");
}
