/**
 * 给你一个随机整数
 * 1，计算它是几位数
 * 2，计算它的每一位是什么数字
 * 3，判断它是不是质数
 */
#include <math.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * 该函数计算输入的十进制整数有几位
 *
 * 参数：
 *     十进制整数
 *
 * 返回值：
 *     位数
 */
int digitsof(int x) {
    int i = 1;
    while ((x /= 10) != 0) {
        i++;
    }
    return i;
}
/**
 * 该函数计算输入的十进制整数（从左往右数）某一位上的值
 *
 * 输入：
 *    从左往右第几位
 *    十进制整数
 *
 * 返回：
 *     十进制整数在这一位上的值
 */
int NumberOnPosition(int position, int number) {

    /**
     * 设计思路：根据例子，已知数字123是一个3位数。计算123的第三位是什么数字
     *
     * 123 / 100 = 1 - 23
     * 23  /  10 = 2 - 3
     * 3   /   1 = 3 - 0
     *
     * 上述式子也可以写作：
     *
     * 123 / 10^(3-1) = 1 - 23
     * 23  / 10^(3-2) = 2 - 3
     * 3   / 10^(3-3) = 3 - 0
     * 
     * 经过3次计算后，123的第3位是3
     */
    if (number < 0) {
        number = -number;
    }
    int dividend = number;
    int divisor, qutient, remainder;
    for (int i = 0; i < position; i++) {
        divisor = (int)pow(10, digitsof(number) - (i + 1));
        qutient = dividend / divisor;
        remainder = dividend % divisor;

        dividend = remainder;
    }
    return qutient;
}
/**
 * 判断输入的整数是不是质数
*/
bool isprime(long int num) {
    int divisor = 2;
    while (num % divisor++ == 0) {
        return false;
    }
    return true;
}
int main(void) {
    printf("%d", isprime(2));
}