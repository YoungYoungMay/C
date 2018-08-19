//模拟实现memmove函数
    //-》从源串拷贝一定长度的内容到目的串，与memcpy功能类似
    //-》memmove可以保证在内存重叠时拷贝也是正确的，memcpy不能保证
    //-》内存重叠问题->两种情况

#include <stdio.h>

void* my_memmove(void* dst, const void* src, size_t count)
{
    void* ret = dst;
    if(dst<=src || (char*)dst>=((char*)src + count))//src在dst的内存块里->从左往右拷贝
    {
        while(count--)
        {
            *(char*)dst = *(char*)src;
            dst = (char*)dst + 1;
            src = (char*)src + 1;
        }
    }
    else//dst在src的内存块里->从右向左拷贝
    {
        dst = (char*)dst + count - 1;
        src = (char*)src + count - 1;
        while(count--)
        {
            *(char*)dst = *(char*)src;
            src = (char*)src + 1;
            dst = (char*)dst + 1;
        }
    }
    return ret;
}

int main()
{
   return 0; 
}
