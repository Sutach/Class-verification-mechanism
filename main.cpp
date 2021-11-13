#include <iostream>
using namespace std;
#include "instruction.h"

int main(argc int, argv **char) {
  int n=0;
  
  while(n <= 0 || n > 4)
  {
    instruction();
    cout<<"Your Selection: ";
    cin>>n;
    switch(n)
    {
      case 1: cout<<"You select "<<n<<endl; break;
      case 2: cout<<"You select "<<n<<endl; break;
      case 3: cout<<"You select "<<n<<endl; break;
      case 4: cout<<"You select "<<n<<endl; break;
      default: break;
    }
  }

  

} 