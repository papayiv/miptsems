#include <iostream>
#include "arithmetics.h"
#include "arithmetics.cpp"

int main() {
  int a=2,b=3;
  std::cout<<sum(a,b)<<" "<<mul(a,b)<<'\n';
  ++a;++b;
  std::cout<<sum(a,b)<<" "<<mul(a,b)<<'\n';
}
