#include <iostream>
using namespace std;
int main()
 { cout << "ingrese numero entero ";
 int n;
cin >>n;
int primo= 1 //hipotesis primo 1 
for (int i= n-1 ; i>= 2; i=i-1 )


 {int modulo=n%i;
 if (modulo==0)
 
{cout << n << "no es primo " << "\n"
primo=0
break;}
}
 

if (primo)
{
cout <<n <<"esprimo "


}

return 0 ;

 }




