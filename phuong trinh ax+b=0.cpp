#include <iostream>
using namespace std;
	int a, b;
	float x;
main()
{
	cout <<"Nhap a="; cin>>a;
	cout <<"Nhap b="; cin>>b;
	if (a==0) {
		if(b==0)
		    cout<<"Phuong trinh co vo so nghiem";
		else
		    cout<<"Phuong trinh vo nghiem";
    }else{
		x = (float) -b/a;
		    cout<<"Phuong trinh co 1 nghiem x="<<x;
	}
	return 0;		   

}


