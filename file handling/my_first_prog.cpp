#include <fstream>
#include <iostream>
using namespace std;

int main() {
  fstream myfile;
  myfile.open("atharv.txt", ios::out); // Writing
  if (myfile.is_open()) {
    myfile << "Hello this is First line\n";
    myfile << "2nd Line Interesting subject.\n";
    myfile.close();
  }
  myfile.open("atharv.txt", ios::app); // appending
  if (myfile.is_open()) {
    myfile << "\nThis is the Appended lIne";
    myfile << "\nPlease follow on with the tuitorial";
    myfile.close();
  }
  myfile.open("atharv.txt", ios::in); // reading mode
  if (myfile.is_open()) {
    string line;
    while (getline(myfile, line)) {
      cout << line << endl;
    }
    myfile.close();
  }
}