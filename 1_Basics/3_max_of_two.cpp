//Author: Aarya Kumar
//date: 10-10-25
//problem: Find max of 2 numbers


#include <iostream>
using namespace std;
int main(){
        int a,b;
        cout<<"enter 2 numbers: ";
        cin>>a>>b;
        int maximum;
        if(a>=b) maximum=a;
        else maximum=b;
        cout<<"The maximum of the 2 numbers is: "<<maximum<<endl;

    return 0;
}
