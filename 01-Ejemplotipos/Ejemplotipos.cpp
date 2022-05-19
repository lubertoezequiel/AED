/*Ej 1: Ejemplotipos
 *Evaluar los tipos de datos, sus operadores con la libreria cassert
 *Autor: Ezequiel Antonio Luberto
 *Fecha: 16/4/2022
*/
#include <iostream>
#include <cassert>

int main()
{
    //Delcaration 
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
    //Char
    assert('A'=='A');
    assert('a'<'b');
    assert('a'!='b');
    assert('b'>'a');
    assert(ch_ex1!=ch_ex2);
    //Int and operators
    //equal operator
    assert(1==1);
    assert(-1==-1);
    //not equal operator
    assert(1!=0);
    //Major
    assert(1>0);
    assert(1>=0);
    //Minor
    assert(1<2);
    assert(1<=2);
    //Equal 
    assert(4==2*2);
    assert(4==2+2);
    assert(2==4/2);
    assert(1==3%2);
    //Double and operators
    assert(2.00==2.000);
    assert(1/3==2/6);
    assert(1.4e-10 == 14e-11);

    return 0;

}