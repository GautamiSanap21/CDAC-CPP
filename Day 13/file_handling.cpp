#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream infile("hello_world.txt", ios::in);//ios::in -> is not mandatory
    if (infile.is_open())
    {
        cout<<"file is open"<<endl;
        infile<<"Hello Everyone"<<endl;
        infile<<"Hello World"<<endl;
        infile.close();
    }
    else{
        cout<<"file is not open"<<endl;
        
    }
    ifstream outfile("hello_world.txt");
    if (outfile.is_open())
    {
        cout<<"file is open for reading"<<endl;
        // string word;//reads the first word
        // outfile>>word;
        // cout<<word<<endl;

        string word;//reads the file word by word until it ends
        while (outfile>>word)
        {
            cout<<word<<endl;
        }
        
        // string line;//reads the first line
        // getline(outfile,line);
        // cout<<line;
        // string line;//reads the file line by line until it ends
        // while (getline(outfile,line))
        // {
        //    cout<<line<<endl;
        // }
        
    }
    else{
        cout<<"file is not open"<<endl;
        
    }
    // infile.open("hello_world.txt");//write into the file(but erase the existing data and then add)
    // infile<<"This is 3rd line";
    // infile.close();

    infile.open("hello_world.txt", ios::app);//write into the file(doesnt affect the existing data and then add/append)
    infile<<"This is 3rd line"<<endl;
    infile<<"This is 4th line"<<endl;
    infile<<"This is 5th line"<<endl;
    infile.close();
}