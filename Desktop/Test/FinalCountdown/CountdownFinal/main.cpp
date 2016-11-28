#include <iostream>
#include <string>
#include <cmath>
#include <unistd.h>

using namespace std;

int myvar;
int foo;
int bar;
int baz;

 int main() {
     int count;

     std::cout << "What time do you want to start from?" << std::endl;
     for (std::cin>>count;count>=0;count-=1){
     std::cout<< count <<std::endl;
     sleep(1);
     if (count == 0) {
      std::cout << "BOOM! I'm done counting!" << std::endl;
     myvar = 25;
foo = &myvar;
bar = myvar;
baz = *foo;

std::cout << myvar <<std::endl;
std::cout << foo <<std::endl;
std::cout << bar <<std::endl;
std::cout << baz <<std::endl;
    }
}
}
