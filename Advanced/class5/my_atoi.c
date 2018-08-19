//模拟实现atoi函数
    //将一个字符串中的数字字符转化为整数

#include <stdio.h>
#include <assert.h>

int my_atoi(const char* str)
{
    assert(*str != '\0');
    int flag = 0;//标记是正数/负数
    int num = 0;
    int err = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
            str++;
        else if(*str == '+')
        {
            flag = 1;
            str++;
        }
        else if(*str == '-')
        {
            flag = -1; 
            str++;
        }
        else if(*str>='0' && *str<='9')
        {
            int n = *str - '0';
            str++;
            num = num*10 + n;
            err = 1;
        }
        else
            str++;
    }
    if(err == 1)
        return flag*num;
    return 0;
}
