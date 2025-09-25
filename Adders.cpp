#include <iostream>
#include <utility>  // For std::pair

// Half adder
std::pair<int, int> halfadd(int A, int B) {
    int Sum = (A != B);  // XOR logic for sum
    int Carry = (A && B);  // AND logic for carry
    return std::make_pair(Sum, Carry);
}

// Full adder
std::pair<int, int> fulladd(int A, int B, int C) {
    int Sum = (A ^ B ^ C);  // XOR of all three inputs
    int Carry = ((A & B) | (B & C) | (A & C));  // OR of ANDs for carry
    return std::make_pair(Sum, Carry);
}

int main() {
    auto result = fulladd(1, 1, 0);
    std::cout << "Sum: " << result.first << ", Carry: " << result.second << std::endl;
    return 0;
}
