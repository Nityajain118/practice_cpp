#include <iostream>
using namespace std ;
int main ()
{
	int n , x   ;
    int sum ;
     
    sum =0 ;
     cout << "enter a power number  ";
     cin >> n ;
     cout << "enter a base number ";
     cin >> x ;
     sum = pow(x,n);
     cout << sum ;
     return 0 ;

}