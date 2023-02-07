#include <iostream>
#include <math.h>
using namespace std;
main()
{
	setlocale (LC_ALL,"RUS");
	int KolPol=0, KolOtr=0;
	float a,b,h,x,fx;
cout<<"Nachalnoe znachenie a = "; cin>>a;
cout<<"konechnoe znachenie b = "; cin>>b;
cout<<"wag h = "; cin>>h;
cout<<"x \t F(x) \n";
		
	for (x=a;x<=b; x+=h)
{

		if (x<=-3) cout<<x<<"\t 9"<<endl;
		else  cout<<x<<"\t"<<x+x<<endl;
}

{
if (x>0) KolPol++;
if (x<0) KolOtr++;-
}
cout<<"Kolichestvo polozitelnix = "<<KolPol<<endl;
cout<<"Kolichestvo otricatelnix = "<<KolOtr;

}