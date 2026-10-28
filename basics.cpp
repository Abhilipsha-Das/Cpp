// # include <iostream>
// using namespace std;
// int main()
// {
//     cout<<"hello world";
//     return 0;
// }

// ==========================================================

// # include <iostream>
// using namespace std;

// int main()
// {
// int glo = 10;                    //local variable has higher priority
//     cout<<glo;
//     return 0;
// }

// ==========================================================

// #include <iostream>
// using namespace std;
// int glo = 20; // global variabl
// void output()
// {
//     cout << glo; // no local variable so as the function is encountered global variable will be taken into consideration
// }
// int main()
// {
//     int glo = 10; // local variable
//     output();
//     return 0;
// }

// ==============input and print============================================

// # include <iostream>
// using namespace std;
// int main()
// {
//     int num1;
//     cout<<"enter a number";      //"<<"insertion operator
//     cin>>num1;                      //">>"extraction operator
//     cout<<"the number entered is "<<num1<<"\nthank you.";
//     return 0;
// }

// =============operators================
#include <iostream>
using namespace std;
int main()
{
    // cout << "arithmetic operators in c++:" << endl;

    // int a=10, b=5;
    // cout << "the value of a+b = " << a+b << endl;
    // cout << "the value of a-b = " << a-b << endl;
    // cout << "the value of a*b = " << a*b << endl;
    // cout << "the value of a/b = " << a/b << endl;
    // cout << "the value of a%b = " << a%b << endl;
    // cout << "the value of a++ = " << a++ << endl;
    // cout << "the value of a-- = " << a-- << endl;
    // cout << "the value of ++a = " << ++a << endl;
    // cout << "the value of --a = " << --a << endl;






    //     cout << "assignment operators in c++:" << endl;
    // int a=10;
    //     cout << "the value of a=2  --> " << (a=2) << endl;
    //     cout << "the value of a-=2  --> " << (a+=2) << endl;
    //     cout << "the value of a+=2  --> " << (a-=2) << endl;
    //     cout << "the value of a*=2  --> " << (a*=2) << endl;
    //     cout << "the value of a/=2  --> " << (a/=2) << endl;
    //     cout << "the value of a%=2  -->" << (a%=2)<< endl;





    // int a=5, b=6;
    // cout << "relational or comparison operators in c++:" << endl;    //returns 0 or 1 which is true or false
    //     cout << "the value of a==b  --> " << (a==b) << endl;
    //     cout << "the value of a!=b  --> " << (a!=b) << endl;
    //     cout << "the value of a>=b  --> " << (a>=b) << endl;
    //     cout << "the value of a<=b  --> " << (a<=b) << endl;
    //     cout << "the value of a>b  --> " << (a>b) << endl;
    //     cout << "the value of a<b  -->" << (a<b)<< endl;






    // int a=10, b=5;
    // cout << "logical operators in c++:" << endl; // returns 0 or 1 which is true or false
    // cout << "the value of ((a==b) && (a<b))  --> " <<((a==b) && (a<b))  << endl;
    // cout << "the value of ((a==b) || (a<b))  --> " <<((a==b) || (a<b))  << endl;
    // cout << "the value of (!(a==b))  --> " <<(!(a==b))  << endl;






//------------------When both a global and a local variable have the same name, C++ gets confused.

// int c = 100;   // global variable

// int main() {
//     int c = 20;   // local variable

//     cout << c << endl;      // local c → 20
//     cout << ::c << endl;    // global c → 100.    (scope resolutiion operator)   tells the compiler to use global c variable
// }



//========================basic input and output

// int a,b,c;
// cout<<"enter the value of a = ";
// cin>>a;
// cout<<"enter the value of b = ";
// cin>>b;   
// c = a+b;
// cout<<a<<"+"<<b<<"="<<c;

// ----------------------------------------------------

// float d = 31.4f;    // or 31.4F
// long double e = 89.5l;      //or 89.5L
// cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e<<endl;


// -------------------size of--------------

// cout<<"the size of 3.14  = "<<(sizeof(34.4))<<endl;   //double
// cout<<"the size of 3.14f = "<<(sizeof(34.4f))<<endl;    //float
// cout<<"the size of 3.14F  = "<<(sizeof(34.4F))<<endl;   // float                   
// cout<<"the size of 3.14l  = "<<(sizeof(34.4l))<<endl;           //long double
// cout<<"the size of 3.14L  = "<<(sizeof(34.4L))<<endl;       //long double


// -------------------reference variable----------
/*reference variable is an alias(another name) for an existing variable 
any change inn the reference variable changes the original variable and vice versa

int a = 10;         original variable
int &b = a;         alias.     or reference variable. (no new memory is created for b as it is the reference variable of a)

a and b occupy the same mmemory location if one changes the other also changes


reference variable cannot be null
*/


    // int a = 10;     //original variable
    // int &b = a; //reference variable

    // cout << "a = " << a << endl;       //10
    // cout << "b = " << b << endl;   //10

    // b = 20;

    // cout << "after change:" << endl;
    // cout << "a = " << a << endl;   //20
    // cout << "b = " << b << endl;   //20



//----------error in reference variable(mistakes)
//     int a = 10;
// int b = 20;

// int &r = a;
// r = b;   // ❌ does NOT change reference



// ================================type casting============================
/*Type casting means converting one data type into another

C++ has two types:

1️⃣ Implicit type casting (automatic)
2️⃣ Explicit type casting (manual)


IMPLICIT TYPE CASTING:-

. Automatic type conversion
. Compiler does it automatically

. example:
    int a = 10;
    float b = a;        (b = 10.0)    

. what happened here____
    int → float (int was converted to float)
    10 → 10.0   (10 became 10.0)

. rules for implicit type conversion____
  Conversion happens from:            smaller data type → larger data type
  
. casting order :
    char → int → float → double → long double

. no data loss can happen here






EXPLICIT TYPE CASTING:-

. Manual type casting
. Programmer forces conversion

. example:
    float a = 5.6;
    int b = (int)a;       b=5       decimal part is loss

. therefore data loss can happen here    

.  
// int a = 5, b = 2;
// cout << a / b;  //integer division (we get 2)


int a = 10;
int b = 3;


// float c = a / b;              //3.0    //integer division hui fir float pr convert hui
// cout << c;


// float c = (float)a / b;         //3.333333  float division hui fir float variable mai store hui
// cout << c;
  
*/





//=============================constants and manipulators and operator precedence=============================

//=============================control stucture(sequence ,selection,loop)
//===========================break and continue========================






    return 0;
}








