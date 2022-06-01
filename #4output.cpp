// What is the output

#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int y = 20;
    if(x++ > 10 && ++y > 20 ){
    cout << "Inside if ";
    } else{
    cout << "Inside else ";
    }
    cout << x << “ “ << y;
}



  
   /* Options

   This problem has only one correct answer

   (1)Inside if 11 21
   (2)Inside if 10 21
   (3)Inside else 11 20 
   (4)Inside else 11 21
       
    Correct Answer =  ( 3 )Inside else 11 20   */ 
