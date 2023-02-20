#include<iostream>
#include<fstream>

using namespace std;

int main(){
    
    ofstream file;
    file.open("1.txt");

    file<< "Hello, world!"<<endl;

    return 0; 
}