#include <iostream>
using namespace std;
int main(){
    int n ;
    cout << "enter a number :";
    cin >> n ;
    for(int i = 1; i<=n; i++){
        cout << "*";
        for (int q = 1 ; q<i ; q++){
            cout <<"*"<<endl;
            for(int j= 1; j<=n-i+1; j++){
            cout << "*" ;
        }
}
}
   cout <<endl ;
   return 0 ;
}
    
   