//模拟实现strlen函数
    //-》字符串以'\0'作为结束标记
    //-》strlen函数计算的是从开始位置到'\0'的字符数，不包括'\0','\0'只是结束标记而已

#include <stdio.h>
#include <string.h>

size_t my_strlen(const char* str)
{
    size_t len = 0;
    while(*str != '\0')
    {
        ++len;
        str++;
    }
    return len;
}

int main()
{
    char* str = "Hello, this is YoungMay!";
    size_t size = my_strlen(str);
    printf("expected is %d, actual is %d\n", strlen(str), size);
    return 0;
}
