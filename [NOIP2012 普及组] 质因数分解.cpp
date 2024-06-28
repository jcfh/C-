#include <iostream>  
#include <cmath>  

using namespace std;

// 检查一个数是否为质数  
bool isPrime(int num) {  
    if (num <= 1) return false;  
    if (num <= 3) return true;  
    if (num % 2 == 0 || num % 3 == 0) return false;  
    for (int i = 5; i * i <= num; i += 6) {  
        if (num % i == 0 || num % (i + 2) == 0)  
            return false;  
    }  
    return true;  
}  
  
// 找到两个质数的乘积中较大的那个质数  
int findLargerPrime(int n) {  
    // 检查n是否为两个不同质数的乘积  
    for (int i = 2; i <= std::sqrt(n); ++i) {  
        if (n % i == 0) {  
            int factor1 = i;  
            int factor2 = n / i;  
            // 确保两个因子都是质数  
            if (isPrime(factor1) && isPrime(factor2)) {  
                return factor1 > factor2 ? factor1 : factor2;  
            }  
        }  
    }  
    // 如果n不是两个不同质数的乘积，则输出错误信息  
    cout << "Input number is not a product of two distinct primes." << endl;  
    return -1; // 返回-1表示错误  
}  
  
int main() {  
    int n;  
    std::cin >> n;  
    int largerPrime = findLargerPrime(n);  
    if (largerPrime != -1) {  
        std::cout << largerPrime << std::endl;  
    }  
    return 0;  
}