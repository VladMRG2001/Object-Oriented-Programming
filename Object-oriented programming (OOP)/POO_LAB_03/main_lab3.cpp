#include "header_lab3.hpp"
#include "clase_lab3.cpp"
int main()
{
	Fractie f(1,2), f1(f), fr;
	
	cout<<" Numaratorul a este : "<<f.getA()<<endl;
	cout<<" Numitorul b este : "<<f.getB()<<endl;	
	
	cout<<" Fractia este "<<f.getValoare()<<endl;
	fr = f.getInv();
	cout<<" Inversul fractiei este: "<<" a = "<<fr.getA()<<"  "<<"b = "<<fr.getB()<<endl;
	
	f1.setdata(3,4);
	cout<<" Modificare val f1: "<<" a = "<<f1.getA()<<"  "<<"b = "<<f1.getB()<<endl;
	
	cout<<endl;
	
	return 0;
}
