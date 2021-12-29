#include <iostream>
#include <vector>
#include <string>

using namespace std;

void fun2 (int n) {
    if (n > 3) { fun2((n-1));
     printf("%d",n);
     }
   
}


int main()
{  
    int x;
    x = 8;
    fun2(x);

}