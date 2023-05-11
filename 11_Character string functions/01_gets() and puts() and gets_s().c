// gets()函数读取buffer中的所有的字符，去掉换行符，从目标地址开始写入。然后返回输入字符串首字符的地址

// puts()函数从目标地址开始读取并打印字符串，打印到空字符停止，并在最后加上一个换行符。返回值是一个非负整数，表示输出的字符数，不包括自动追加的换行符。

// gets_s()函数和gets()函数主要有2个区别，多了一个参数限制读取的字符数。如果读取到结尾没有读取到换行符，会丢弃剩余缓冲中的字符并终止程序

#include <stdio.h>
int main(void) {
    char word[10];

    gets(word);
    puts(word);

    gets_s(word, 30);
    puts(word);
}