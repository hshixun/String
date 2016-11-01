//very simple test file
#include <iostream>
#include "../String.h"
using cppext::String;

bool test001()
{
  String s("12345");
  return s.str() == "12345";
}
bool test002()
{
  char temp[] = {'1','2','3','4','5'};
  std::vector<char> v(temp, temp + sizeof(temp));
  String s(v);
  return s.str() == "12345";
}
bool test003()
{
  String s("12345");
  if(s.LastIndexOf("A")!=std::string::npos) return false;
  if(s.LastIndexOf("4")!= 3) return false;
  return true;
}
int main()
{
  if(!test001()) return -1;
  if(!test002()) return -1;
  if(!test003()) return -1;
  return 0;    
}