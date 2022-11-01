#include<iostream>
#include<math.h>
using namespace std;

int	main(){
	float a, b, c, delta, x1, x2;
	cout <<"Input a: ";
	cin >> a;
	cout <<"Input b: ";
	cin >> b;
	cout <<"Input c: ";
	cin >> c;
	if(a == 0){
		if(b == 0){
			if(c == 0){
				cout <<"Phuong trinh vo so nghiem"<< endl;
			}else{
				cout <<"Phuong trinh vo nghiem"<< endl;
			}
		}else{
			cout <<"Phuong trinh co 1 nghiem la "<< -c/b << endl;
		}
	}else{
		delta = b*b - 4*a*c;
		if (delta > 0)
		{
			x1= (-b+sqrt(delta))/(2*a);
			x2= (-b-sqrt(delta))/(2*a);
			cout <<"Nghiem thu nhat la: "<< x1 << endl;
			cout <<"Nghiem thu hai la: "<< x2 << endl;
		} else if (delta == 0)
		{
			cout <<"Phuong trinh co nghiem kep la: "<< -b/(2*a) << endl; 
		}else{
			cout <<"Phuong trinh vo nghiem!";
		}
	}
	return 0;
}
