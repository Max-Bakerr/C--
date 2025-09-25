#include <iostream>

int halfadd(int A, int B){
    int Sum;
    int Carry;
    if(A =! B){
        Sum = 1;
    }
    else(){
        Sum = 0;
    }

    if(A = 1 && B = 1){
        Carry = 1;
    }

    return(Sum, Carry);
}

int fulladd(int A, int B, int C){
    int Sum;
    int Carry;
    if((A != B) != C){
        Sum = 1;
    }
    else(){
        Sum = 0;
    }

    if((C && (A != B)) = 1 || (A & B) = 1){
        Carry = 1;
    }
    else(){
        Carry = 0;
    }

    return(Sum, Carry);
}



int main(){
    std::cout << fulladd(1,1,0);

}