## C++ String class

This C++ String class provides string manipulation similar to C# String.

Modified from the work in 2011.


## Usage

```c++
#include <iostream>
#include "String.h"
using cppext::String;

int main()
{
  String s("ABC123");
  std::cout << s.ToLower() << std::endl;
  return 0;
}

```


### Compiler Requirements

C++98 compilers

### Author

Enrico Huang

### TODO

  - Performance optimization
  - API document
  - Code example
  - Unit test

