#include<iostream>
#include<string>
#include<iomanip>
#include<sstream>
using namespace std;
int main() {
    int n;
    cin >> n;
    cin.ignore();
    string line;    
    while(n--){
        getline(cin, line);
        stringstream ss(line);
        int ID ,code;
        float value;
        ss>> ID >> code >> value;
        cout<<setbase(10)<< setfill('0')<<setw(5)<<ID ;
        cout<< '|';
        cout<<setbase(16)<< setfill('#')<<setw(4)<<code ;
        cout<< '|';
        cout<<setbase(10)<< setfill('_')<<setw(9)<<fixed<<setprecision(2)<<value ;
        cout<<endl;
    }
    return 0;
}   