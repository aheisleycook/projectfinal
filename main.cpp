#include <iostream>
#include "iomanip"
#include "iostream"
#include "string"
#include "fstream"

using namespace  std;




struct Zip{
    string fullname;
    string zipcode;
    int lowZip;
    int highzips;
};

Zip get_zip(string name) {
     ifstream filename;
     filename.open(name);
     Zip zipfiles[70];
     ifstream ZIpRanges;
     int count=0;

    while(!filename.eof())
     {
        count++;
        filename >> zipfiles[count].fullname >> zipfiles[count].zipcode >> zipfiles[count].lowZip >> zipfiles[count].highzips;;

     }
    return zipfiles[69];
}
void showMenu()
{
    cout << "enter 1 and 2 3";
}
int main() {
    showMenu();
    Zip  myzips[78];
    &myzips; get_zip("C:\\temp\\ZipRanges.txt");
    for(int i = 0;i<68;i++) {
      cout <<   myzips[i].fullname << myzips[i].zipcode << myzips[i].lowZip;

    }



}



