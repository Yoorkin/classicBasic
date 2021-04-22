//
// Created by yorkin on 4/19/21.
//
#include<iostream>
#include<cassert>
#include<sstream>
#include"src/codeGen.h"
#include"src/JIT.h"
#include"testHelper.h"
using namespace std;

TestCase(getReturn100){
    string code;
    code = code+"function add()as integer\r\n"+
            "return 100\r\n"+
            "end function\r\n";
    ConfigureModule("getReturn100",code);
    auto func = jit.getFunctionAddress<int(void)>("add");
    return func()==100;
}

TestCase(passInteger){
    string code;
    code = code+"function pass(a as integer)as integer\n"+
            "return a\n end function\n";
    ConfigureModule("passInteger",code);
    auto func =jit.getFunctionAddress<int(int)>("pass");
    return func(200)==200 && func(1+20)==21;
}

TestCase(passBool){
    string code;
    code = code+"function passBool(a as Boolean)as Boolean\n"+
           "return a\n end function\n";
    ConfigureModule("passBool",code);
    auto func =jit.getFunctionAddress<bool(bool)>("passBool");
    return func(true)==true && func(false)==false;
}

TestCase(plus10){
    string code;
    code=code+"function plus10(a as Integer)as Integer\n"+
            "return a+10\n"+
            "end function\n";
    ConfigureModule("plus10",code);
    auto add=jit.getFunctionAddress<int(int)>("plus10");
    return add(-20)==-10 && add(99)==109;
}

TestCase(variableAssignReturn){
    string code=R"code(
        function assignReturn(a as integer)as integer
            dim b as long=a
            return b
        end function
    )code";
    ConfigureModule("variableAssignReturn",code);
    auto func=jit.getFunctionAddress<int(int)>("assignReturn");
    return func(100)==100 && func(-100)==-100;
}

TestCase(forLoop){
    string code=R"code(
    function forLoop(i as integer)as integer
        dim a as integer
        for a=0 to 9
            i=i+1
        next
    end function
    )code";
    ConfigureModule("forLoop",code);
    auto func=jit.getFunctionAddress<int(int)>("forLoop");
    return func(5)==15;
}

TestCase(returnBigger) {
    string code=R"code(
    function returnBigger(a as integer,b as integer)as integer
        dim c as integer
        if a>b then
            c = a
        else
            c = b
        end if
        'return c
    end function
    )code";
    ConfigureModule("returnBigger", code);
    auto func = jit.getFunctionAddress<int(int, int)>("returnbigger");
    return func(10, 0) == 10 && func(100, 99999) == 99999;
}


int main(){
    Begin;
    Test(getReturn100);
    Test(passInteger);
    Test(passBool);
    Test(plus10);
    Test(variableAssignReturn);
    Test(forLoop);
    //Test(returnBigger);
    Report;
}