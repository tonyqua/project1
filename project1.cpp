// project1
// Convert Decimal Number to Binary
    
    #include <iostream>
    int main() {
        int n = 13;
        int binaryNum = 0;
        int i = 1;

         while (n != 0) {
            int remainder = n % 2;
            n /= 2;
            binaryNum += remainder * i;
            i *= 10;
            }

        std::cout << "binary = " << binaryNum;

        return 0;
    }
