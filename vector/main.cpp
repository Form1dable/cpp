#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Initializer list
  vector<int> vector1 = {1, 2, 3, 4, 5};

  // Uniform initialization
  vector<int> vector2 {1, 2, 3, 4, 5};

  // Vector initialization with same value population
  vector<int> vector3(5, 12);  // {12, 12, 12, 12, 12}

}