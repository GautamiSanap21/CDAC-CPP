#include <iostream>
using namespace std;
int main(){
    int row;
    int col;
    for (int row = 0; row < 5; row++)//row
    {
        for (int col = 0; col < row; col++)//column
        {
            cout<<"*";
        }
        cout<<'\n';
        
    }
    
}