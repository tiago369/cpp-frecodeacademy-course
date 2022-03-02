#include<iostream>

int main(){

    signed int value1 {10};
    signed int value2 {-300};
    unsigned int value3 {100};

    //2 Bytes
    short short_var {-32768};
    short int short_int {455};
    signed short signed_short {122};
    signed short int signed_short_int {-456};
    unsigned short int unsigned_short_int {456};

    //4 Bytes
    int int_var {55};
    signed signed_var {66};
    signed int signed_int {77};
    unsigned int unsigned_int {77};

    //4 or 8 Bytes
    long long_var {88};
    long int long_int {33};
    signed long signed_long {44};
    signed long int signed_long_int {44};
    unsigned long int unsigned_long_int {44};

    //8 Bytes
    long long long_long {888};
    long long int long_long_int {999};
    signed long long signed_long_long {666};
    signed long long int signed_long_long_int {2325};
    unsigned long long int unsigned_long_long_int {143316};

    return 0;
}