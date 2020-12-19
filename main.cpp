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
    do {
    int choice;
    cout << "enter 1 and 2 3";
    cin >> choice;
    int end;
    switch (choice) {

        case 1:
            cout << "choice 1";
            break;
        case 2:
            cout << "chocie 2";
            break;
        case 3:
            cout << "choide 3";
            break;
        default:
            choice = 0;
            end = 0;


    }
    } while (0 == end);
            cout << "ending program"

}
int main() {
    showMenu();
    Zip pZip[78];
    &pZip;
    get_zip("C:\\temp\\ZipRanges.txt");
    for (int i = 0; i < 68; i++) {
        cout << pZip[i].fullname << pZip[i].zipcode << pZip[i].lowZip;

    }


}



