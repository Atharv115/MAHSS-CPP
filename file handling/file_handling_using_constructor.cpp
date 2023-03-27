#include <fstream>
#include <iostream>

using namespace std;

int main() {
  char line[100];
  // writing to a text file using the constructor method
  ofstream write("ag.txt");
  cout << "Enter anyhing that u want to be appeared in the file: ";
  gets(line);
  write << line;
  write.close();
  string line2;
  // Reading a text file using the constructor method.
  ifstream read("atharv.txt");
  while (read.eof() == 0) {
    getline(read, line2);
    cout << line2 << endl;
  };
  read.close();
}