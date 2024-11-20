#include <iostream> 
using namespace std; 
  
int main() 
{ 
  
    int A = 39, B = 10, C = 23; 
  
    
    int num
        = (A > B) ? ((A > C) ? A : C) : ((B > C) ? B : C); 
  
    cout << "Largest number is " << num << endl; 
  
    return 0; 
}