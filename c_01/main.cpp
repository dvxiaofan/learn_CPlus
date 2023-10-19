
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace::std;



int main() {
    char id[11], name[2];
    int score;
    ifstream inFile;
    inFile.open("score.txt", ios::in);
    if(!inFile)
    {
        cout << "open fail" << endl;
        return 0;
    }
    cout << "num name \t\t\t score \n";
    while (inFile >> id >> name >> score) {
        cout << left << setw(10) << id << "" << setw(20) << name << "" << setw(3) << right << score << endl;
    }
    inFile.close();
    return 0;
}


