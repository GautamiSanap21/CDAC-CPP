#include<iostream>
using namespace std;
template<class T>
T add(T a, T b){
    T result = a+b;
    return result;
}
template<class T, class U>
U add(T a, U b){
    U result = a+b;
    return result;
}

int main(){
    cout<<add(2,3)<<endl;
    cout<<add(2.3,3.4)<<endl;
    cout<<add(2.6,5)<<endl;
    cout<<add(2,5.6)<<endl;
}