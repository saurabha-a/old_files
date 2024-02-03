#include <iostream>
#include <sstream>
#include <string>
 int main()
 {
     std::string s = "Abhinava";
     std::stringstream ss(s);
     ss << " saurabha";
     std::string str;
     ss >> str;
     std::cout << str;
     return 0;
 }
