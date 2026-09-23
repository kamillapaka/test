#include <iostream>
#include <fstream>
using namespace std;

int main(){
ofstream fails("dati.txt");
cout<<"ievadi savu vardu!"<<endl;
string name;
cin >> name;

cout<<"ievadi savu uzvardu!"<<endl;
string last_name;
cin >> last_name;

cout<<"ievadi savu vecumu!"<<endl;
int age;
cin >> age;

fails << " vards!"<<name<<endl;
fails << " uzvards!"<<name<<endl;
fails << "vecums! "<<name<<endl;
fails.close();
      return 0;
}