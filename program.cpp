#include <iostream>

using namespace std;

int findSumA();
int findSumB();


int main() {

  findSumA();
  findSumB();

  return 0;
};

int findSumA() {
  int list[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  int sum = 0;
  for (int i = 0; i < 10; i++) {
    sum = sum + list[i];
  }
  cout << sum << endl;
  return 0;
}

int findSumB() {
  int listB[1] = {5}; 

  int sum = 0;
  for (int i = 0; i < 1; i++) {
    sum = sum + listB[i];
  }
  cout << sum << endl;
  return 0;
}
