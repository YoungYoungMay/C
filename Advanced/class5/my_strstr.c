//模拟实现strstr函数
    //-》在字符串中查找字串，将字串第一次出现的位置返回

#include <stdio.h>
#include <assert.h>
#include <string.h>

char* my_strstr(const char* str1, const char* str2)//在str1中查找str2
{
    assert(str1 != NULL);
    assert(str2 != NULL);
    if(*str2 == '\0')//要查找的子串为空串
        return NULL;
    char* src = (char*)str1;
    char* dest = (char*)str2;
    char* ret = NULL;

    while(*src != '\0')
    {
        //每循环一次，都是重新再查找，所以要将子串的指针指向子串的第一个字符
        ret = (char*)src;
        dest = (char*)str2;
        while(*ret!='\0' && *dest!='\0' && (*ret==*dest))
        {
            ret++;
            dest++;
        }
        if(*dest == '\0')
            return src;
        src++;
    }
}

int main()
{
    char* str1 = "asuhsdbmaicmwensmayas";
    char* str2 = "may";
    char* res = my_strstr(str1, str2);
    printf("%s\n", res);

    char* ret = strstr(str1, str2);
    printf("%s\n", ret);
    return 0;
}
