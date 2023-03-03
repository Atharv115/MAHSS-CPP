// Write a menu driven program in C++ to create an array of N numbers and to
// sort the array in ascending order using Insertion sort technique. Output the
// array before and after sorting.

#include <iostream>
using namespace std;

class Insertion {
  int a[20], n;

public:
  void input();
  void sort();
};

void Insertion::input() {
  cout << "Enter the size of the array: ";
  cin >> n;
  cout << "\nEnter the elements of the array: ";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
}

void Insertion::sort() {
  int x, j;
  for (int i = 1; i < n; i++) {
    x = a[i];
    j = i - 1;
    while (x < a[j] && j >= 0) {
      a[j + 1] = a[j];
      j--;
      a[j + 1] = x;
    }
    cout << "After iteration " << i << "\n";
    for (int k = 0; k < n; k++) {
      cout << a[k] << " ";
    }
    cout << "\n";
  }
}

int main() {
  int c;
  Insertion b;
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