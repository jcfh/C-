#include <iostream>  
#include <cctype>  
#include <string>  

using namespace std;
  
int main() {  
    string str;  
    getline(cin, str); // 使用getline来读取包含空格的字符串，但题目说字符串中不包含空格，所以这里其实不需要  
  
    // 由于题目保证字符串长度不超过100且没有空格，我们可以直接遍历字符串  
    for (char& c : str) {  
        // 如果字符是小写字母，则转换为大写  
        if (islower(c)) {  
            c = toupper(c);  
        }  
    }  
  
    // 输出转换后的字符串  
    cout << str << endl;  
  
    return 0;  
}