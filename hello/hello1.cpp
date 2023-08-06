#include "hello1.h"

int Sum(int a, int b)
{
    return a+b;
}

bool IsOdd(int num)
{
    // 若 num 为偶数，则对2做取余运算的结果为0，返回的取余结果则会被转换为false
    // 若 num 为基数数，则对2做取余运算的结果不为0，返回的取余结果则会被转换为true
    return num%2;
}