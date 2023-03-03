// Write a menu driven program in C++ to create an array of N numbers and to
// sort the array in ascending order using Bubble sort technique. Output the
// array before and after sorting.

#include <iostream>
using namespace std;
class Bubble {
  int a[10], n;

public:
  void input();
  void sort();
};

void Bubble::input() {
  cout << "Enter the size of the array: ";
  cin >> n;
  cout << "\nEnter the elements of the array: ";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
}

void Bubble::sort() {
  for (int j = 1; j <= n - 1; j++) {
    for (int i = 0; i <= n - j - 1; i++) {
      if (a[i] > a[i + 1]) {
        int t = a[i];
        a[i] = a[i + 1];
        a[i + 1] = t;
      }
      cout << "iteration " << j << "\n";
      for (int i = 0; i <= n - 1; i++) {
        cout << a[i] << "\t";
      }
      cout << "\n";
    }
    cout << "After " << j << " Iterations" << endl;
  }
}

int main() {
  int c;
  Bubble b;
  do {
    cout << "\nEnter your choice:\n1-Input\n2-Sort\n3-Exit\n";
    cin >> c;
    switch (c) {
    case 1:
      b.input();
      break;
    case 2:
      b.sort();
      break;
    case 3:
      break;
    default:
      break;
    }
  } while (c != 3);
}