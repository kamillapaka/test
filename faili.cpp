#include <iostream>
#include <fstream>
using namespace std;

int main(){
ofstream fails("dati.txt");
fails << "sveiki!"<<endl;
fails.close();
      return 0;
}