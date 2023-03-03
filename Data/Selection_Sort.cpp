// Write a menu driven program in C++ to create an array of N numbers and to
// sort the array in ascending order using Selection sort technique. Output the
// array before and after sorting.

#include <iostream>
using namespace std;
class Selection {
  int a[10], n;

public:
  void input();
  void sort();
};

void Selection::input() {
  cout << "Enter the size of the array: ";
  cin >> n;
  cout << "\nEnter the elements of the array: ";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
}

void Selection::sort() {
  for (int j = 0; j <= n - 1; j++) {
    int small = a[j];
    int pos = j;
    for (int i = j + 1; i <= n - 1; i++) {
      if (small > a[i]) {
        small = a[i];
        pos = i;
      }
    }
    int t = a[j];
    a[j] = a[pos];
    a[pos] = t;
    cout << "After iteration " << j << "\n";
    for (int i = 0; i <= n - 1; i++) {
      cout << a[i] << "\t";
    }
    cout << "\n";
  }
}

int main() {
  int c;
  Selection b;
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