#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // 把chcp的系统提示直接丢弃，不会输出到控制台
    system("chcp 65001 > nul");
    printf("比特\n");
    return 0;
}

