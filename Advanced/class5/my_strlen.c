//模拟实现strlen函数
    //-》字符串以'\0'作为结束标记
    //-》strlen函数计算的是从开始位置到'\0'的字符数，不包括'\0','\0'只是结束标记而已

#include <stdio.h>
#include <string.h>

//方法1->计数器方式
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

//方法2->不创建临时计数器
size_t my_strlen1(const char* str)
{
    if(*str == '\0')//空串
        return 0;
    return 1 + my_strlen1(str+1);
}

//方法3->指针方式
size_t my_strlen2(const char* str)
{
    char* p = (char*)str;
    while(*p != '\0')
        p++;
    return p-str;
}

int main()
{
    char* str = "Hello, this is YoungMay!";
    size_t size = my_strlen(str);
    printf("expected is %d, actual is %d\n", strlen(str), size);
 
    size_t size1 = my_strlen1(str);
    printf("expected is %d, actual is %d\n", strlen(str), size1);

    size_t size2 = my_strlen2(str);
    printf("expected is %d, actual is %d\n", strlen(str), size2);

    return 0;
}
