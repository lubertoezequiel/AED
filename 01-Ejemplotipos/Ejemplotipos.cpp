/*Ej 1: Ejemplotipos
 *Evaluar los tipos de datos, sus operadores con la libreria cassert
 *Autor: Ezequiel Antonio Luberto
 *Fecha: 16/4/2022
*/

#include <cassert>
#include <string>

using namespace std::string_literals;

int main()
{
    

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
    assert(666U==666U);
    
    //Double and operators
    assert(2.00==2.000);
    assert(1/3==2/6);
    assert(1.4e-10 == 14e-11);
    assert(2.1*5==(5.5+5));
    
    //Forma de utilizar separadores para los digitos para lograr mejor lectura
    assert(1.4e4==14'0'0'0);
    
    //String
    assert("hola"s=="hola"s);
    assert("hola"s + "que tal"s =="holaque tal"s);
    assert("hola"s + " "s=="hola "s);
    assert(("hola"s).length()==4);
        
    /*Limites de tipo de datos y tamaño de tipo de dato*/
    assert(sizeof 3 == 4);
    assert(sizeof 1e3 == 8);
    assert(sizeof 'a' == 1);
    

    return 0;

}  