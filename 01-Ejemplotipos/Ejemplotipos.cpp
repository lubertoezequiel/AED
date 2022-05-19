#include <iostream>
#include <cassert>

int main()
{
    //Delcaration GIT
    bool b_ex1=true;
    bool b_ex2=false;
    char ch_ex1 = 'A';
    char ch_ex2 = 'B';
    //Boolean and operators
    //equal operator
    assert(true==true); 
    assert(false==false);
    //not equal operator
    assert(true!=false);
    //Logic OR operator
    assert(true or false);
    assert(not(false or false));
    //Logic AND operator and NOT operator
    assert(true and true);
    assert(not(false and false));
    //Other kind of operation
    assert(not false);
    assert(true);
    assert(not(not true));
    //Int and operator
    //equal operator
    assert(1==1);
    assert(-1==-1);
    //not equal operator
    assert(1!=0);
    assert(1>0);
    assert(1>=0);
    assert(1<2);
    assert(1<=2);



    return 0;

}