#include <iostream>
#include "Terminides.h"
#include <vector>
#include <fstream>
#include <thread>
using namespace std;

void afficherimage(string image) {
    ifstream infile(image);
    if (infile.is_open()) {
        string line;
        while (getline(infile, line)) {
            cout << line << endl;
        }
    }

    int main() {


        afficherimage("imageAscii/Menu.txt");

    }