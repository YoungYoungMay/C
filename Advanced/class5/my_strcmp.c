//strcmp函数的模拟实现
    //-》拿字符的ASCII码值作比较

#include <stdio.h>
#include <assert.h>

//str1>str2,返回1;=返回0，<返回-1
int my_strcmp(const char* str1, const char* str2)
{
    assert(str1!=NULL && str2!=NULL);
    while(*str1 && *str2)
    {
        if(*str1 == *str2)
        {
            str1++;
            str2++;
        }
        else if(*str1 > *str2)
            return 1;
        else
            return -1;
    }
    //至少有一个字符串走到结束
    if(*str1)
        return 1;
    else if(*str2)
        return -1;
    else
        return 0;
}

int main()
{
    char* str1 = "";
    char* str2 = "";
    printf("%d\n", my_strcmp(str1, str2));
    return 0;
}
