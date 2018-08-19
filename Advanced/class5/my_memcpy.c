//模拟实现memcpy函数
    //-》内存拷贝;可拷贝任意类型;按字节拷贝

#include <stdio.h>
#include <string.h>

void* my_memcpy(void* dest, const void* src, size_t count)
{
    void* ret = dest;
    while(count--)
    {
        *(char*)dest = *(char*)src;
        dest = (char*)dest + 1;
        src = (char*)src + 1;
    }
    return ret;
}

void Test()
{
    char buf[32];
    char* msg = "hello world maybs";
    my_memcpy(buf, msg, strlen(msg)+1);//把'\0'拷上
    printf("%s\n", buf);
    memcpy(buf, msg, sizeof(msg));
    printf("%s\n", buf);

    int res[6];
    int a[6] = {1, 2, 3, 4, 5, 6};
    my_memcpy(res, a, sizeof(a));
    int i = 0;
    for(; i<sizeof(a)/sizeof(a[0]); ++i)
        printf("%d ", a[i]);
    printf("\n");

    memcpy(res, a, sizeof(a));
    for(i=0; i<sizeof(a)/sizeof(a[0]); ++i)
        printf("%d ", a[i]);
    printf("\n");
}

int main()
{
    Test();
    return 0;
}
