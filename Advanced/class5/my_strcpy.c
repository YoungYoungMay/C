//模拟实现strcpy函数
    //-》目标空间必须足够容下要拷的内容
    //-》目标空间可变最好
    //-》源字符串以'\0'结束，目标字符串也必须以'\0'结束

#include <stdio.h>
#include <string.h>
#include <assert.h>

#define DEFAULT 20

char* my_strcpy(char* des, const char* source)
{
    assert(des!=NULL && source!=NULL);
    char* ret = des;
    //赋值到'\0'不满足循环，循环结束
    while(*des++ = *source++);
    return ret;
}

int main()
{
    char* source = "This is YoungMay";
    //必须给足空间用以拷贝
    char des[DEFAULT] = "";
    char* ret = my_strcpy(des, source);
    printf("%s\n", des);
    printf("%s\n", ret);
    printf("%s\n", source);
    return 0;
}
