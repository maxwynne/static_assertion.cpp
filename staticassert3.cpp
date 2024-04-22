#include <iostream>
#include <vector>
using namespace std;

int main() {
tempate <class A, class Allocator = std::allocator<A>

vector<int> vector1{1, 2, 3, 4, 5};

cout << "vector1 = ";

// ranged loop
for (const int& i : vector1) { // const int - returns a constant int, a variable that does not change value through lifetime
  cout << i << " "; 
}
