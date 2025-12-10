#include <stdio.h>

int main() {
    float a, b, res;
    printf("输入被除数和除数：");
    scanf("%f %f", &a, &b);
    
    if (b != 0) {  // 避免除零错误
        res = a / b;
        printf("结果：%.2f\n", res);
    } else {
        printf("错误：除数不能为0\n");
    }
    return 0;
}
