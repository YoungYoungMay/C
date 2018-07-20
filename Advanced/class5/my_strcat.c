//模拟实现strcat函数
    //-》字符串连接函数
    //-》目标字符串必须足够大
    //-》源字符串以'\0'结束

#include <stdio.h>
#include <string.h>
#include <assert.h>
#define DEFAULT 100

char* my_strcat(char* des, const char* src)
{
    assert(des!=NULL && src!=NULL); 
    char* ret = des;
    while(*des != '\0')
        des++;
    while(*des++ = *src++);
    return ret;
}

int main()
{
    char des[DEFAULT] = "Hello,";
    char *src = "This is YoungJack";
    char* ret = my_strcat(des, src);
    printf("%s\n", des);
    printf("%s\n", ret);
    //这里再加这句，就相当于连接了两次
    //printf("%s\n", strcat(des, src));
    return 0;
}
