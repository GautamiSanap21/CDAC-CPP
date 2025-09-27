#include<iostream>
using namespace std;
int main(){
    int numerator, denominator, result;
    cout<<"Enter Numerator, Denominator"<<endl;
    cin>>numerator>>denominator;
    try
    {
        if (denominator==0)
    {
        throw(denominator);
    }else{
        result = numerator/denominator;
        cout<<"The result is: "<<result<<endl;
    }
    }
    catch(int denominator)
    {
        cout<<"Divide by Zero"<<endl;
    }
    
}