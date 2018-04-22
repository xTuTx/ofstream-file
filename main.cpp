#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ofstream theFile("role.txt");
    cout << "enter the players ID , Name , power" << endl;
    cout << "press CTRL+C to quit\n" << endl;
    int id;
    string name;
    double power;
    while(cin >> id >> name >> power){
        theFile << id << ' ' << name << ' ' << power <<endl;
    }
    return 0;
}
