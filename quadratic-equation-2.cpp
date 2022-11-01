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
				cout <<"Equation with infinite solutions"<< endl;
			}else{
				cout <<"The equation has no solution"<< endl;
			}
		}else{
			cout <<"Equation has 1 solution: "<< -c/b << endl;
		}
	}else{
		delta = b*b - 4*a*c;
		if (delta > 0)
		{
			x1= (-b+sqrt(delta))/(2*a);
			x2= (-b-sqrt(delta))/(2*a);
			cout <<"1st solution: "<< x1 << endl;
			cout <<"2nd solution: "<< x2 << endl;
		} else if (delta == 0)
		{
			cout <<"Equation with double solutions: "<< -b/(2*a) << endl; 
		}else{
			cout <<"The equation has no solution";
		}
	}
	return 0;
}
