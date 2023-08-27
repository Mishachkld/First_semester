#include <iostream>

int main() {
    unsigned long long N;
    std::cin >> N;
    unsigned char* NforBytes = (unsigned char*) &N;
    for (int i = 0; i < 8; i++ ){
        std::cout << i+1 <<" byte " << (long long) *(NforBytes+i) << std::endl;
    }
}
// -9223372036854775807 знак кодируется 128 битами
// 18446744073709551615