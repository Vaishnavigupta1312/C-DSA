#include <bits/stdc++.h>
using namespace std;
int main(){

    cout << "Hello World!!";
    cout<< '\n';

    //datatypes and variables
    int a=97;
    char ch='z';
    float f= 7.67;

    //to find size of any datatype or find memory a variable is occupying

    int size= sizeof(f);
    cout<< size<< " is the size of f."<< endl; 

    //implicit typecasting
    int y='y';          //char value is assigned to an int type variable
    cout<< y<<endl;

    char ch2= 98;
    cout << ch2<<endl;     //int value is assigned to a char type variable

    char ch3=123456;        //int takes 4 bytes and char will take the right most byte and store its value, it takes 64 and displays the ASCII value mapped with it i.e. @
    cout<< ch3<< endl;


    int j= -9;  //default int is of signed type which can store both positive and negative values. Range is -((2^31)-1) to (2^31)-1....but which can be improved by using 2's complement where range is -(2^31) to (2^31)-1
    //to store only positive numbers 
    unsigned int k= -112;    //the negative sign or the msb of any number if is 1 , the compiler takes it's 2's complement before storing it in memory, and while displaying again takes the 2's complement; whereas in case of unsigned int, it considers the stored number as positive integer only and doesn't take 2's complement while displaying because of which we get a large number as output....its range is 0 to (2^32)-1
    cout<< k<<endl;

    //operators-arithematic
    int divide= 2.0/5;
    cout <<divide<<endl;        //o/p is 0, as float/ int will give float but value is assigned to a variable of type int
    cout<< 2/5 <<endl;          //o/p is 0 as in/ int is int
    cout <<2.0/5<< endl;        //o/p is 0.4 as float by int will give float
    cout<< 2/0.5 << endl;       //o/p is 4 as int/ float is int


    //operators- relational
    int p=2;
    int q=7;
    bool first = (p==q);
    cout<< first<<endl;
    bool second = (p<q);
    cout<< second<<endl;
    bool third = (p>q);
    cout<< third<<endl;
    bool fourth = (p<=q);
    cout<< fourth<<endl;
    bool fifth = (p>=q);
    cout<< fifth<<endl;
    bool sixth = (p!=q);
    cout<< sixth<<endl;

    //operators-logical
    cout <<!p<<endl;   //p=2 and not will change true into false, means any number not equal to 0 into 0
    int r=-4;
    cout<<"NOT : "<<!r<<endl;

    cout<<"AND : " <<(0&&1) <<endl; //logical and operator gives true when all the events are true

    cout<<"OR : " <<(5>4 || 3>7) <<endl;   //logical or operator returns false only when all the arguments are false



}