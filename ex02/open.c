#include <sys/types.h> /* 定义数据类型，如 ssize_t，off_t 等 */
#include <fcntl.h>     /* 定义 open，creat 等函数原型，创建文件权限的符号常量 S_IRUSR 等 */
#include <unistd.h>    /* 定义 read，write，close，lseek 等函数原型 */
#include <errno.h>     /* 与全局变量 errno 相关的定义 */
int main(int argc, char *argv[])
{
    char sz_filename[] = "hello.txt"; /* 要打开的文件 */
    int fd = -1;
    fd = open(sz_filename, O_WRONLY | O_CREAT,                  /* 以只写、创建标志打开文件 */
              S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH); /* 权限模式 mode=0x664 */
    if (fd < 0)
    { /* 出错处理 */
    }
}