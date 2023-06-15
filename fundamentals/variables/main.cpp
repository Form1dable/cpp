#include <iostream>
#include <limits>
#include <vector>

int main() {
    /* 
    * Definition
    * At runtime a memory location is allocated for this variable
    * This is know as instantiation (object created and assigned a memory).
    */
    int x;  // Defining a variable
    x = 10;  // Assigning a variable

    // Initialization
    int a;  // No initializer (default initialization)
    int b = 5;  // Copy initialization
    int c(6) ;  // Direct initialization

    // List initialization methods or uniform initialization
    // Disallows narrowing conversions
    int d = {8};  // Copy list initialization
    int e {7};  // Direct list initialization
    int f {};  // Value initialization
    

    // Data Types
    int length = 10;  // 2 or 4 bytes
    float size = 195.38;  // 4 bytes
    double area = 89682.2828; // 8 bytes
    char letter = 'a'; // 1 byte
    bool isTrue = true;  // 1 byte
    // void

    /* 
    * Data Type Modifiers
    * 1. signed
    * 2. unsigned
    * 3. short
    * 4. long
   */ 

    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;

    // Finding out the limit
    std::cout << "Int Min " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "Int Max " << std::numeric_limits<int>::max() << std::endl;


    /* 
    * Typedef is used used for aliasing existing data types to user defined data types.
    * typedef <current_name> <new_name>
    * 
    * Typedef can be used with
    * 1. Predefined data types with long names
    * 2. STL Data structures like vectors, strings, maps 
    * 3. Arrays
    * 4. Normal and function pointers
    */

   typedef std::vector<int> vInt;
   typedef unsigned long int uli;

   vInt number_list = {1, 2, 3, 4, 5};
   uli unsigned_long_int {1231323};

   number_list.push_back(190);
   number_list.push_back(1203);

  /* Type Conversion */

  // Implicit Conversion
  int ab = 10;
  char y = 'a';
  float z = ab + y;  // Here character 'a' implicity gets converted to ASCII

  // Adding float and int implicitly converts int to float
  // Adding int with char implicity converts char to int
  // Bool gets converted to int or float when adding.
  bool bool1 = true;
  int int1 = 10;
  float float1 = bool1 + 10.5;
  int1 = int1 + bool1;





  // Explicit Conversion (Type Casting)
  // (type) expression
  int int_num = {5};
  float floating_num;
  floating_num = (float)int_num;

  float float_to_int_age = 10.5;
  int age = int(float_to_int_age);

  std::cout << floating_num << std::endl;
  std::cout << age << std::endl;
  std::cout << z << std::endl;
  std::cout << int1 << std::endl;
  std::cout << float1 << std::endl;

  return 0;
}