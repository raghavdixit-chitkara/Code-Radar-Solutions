#include <stdio.h>

int main() {
    int a, b, c = 0;
    scanf("%d", &a);
    for (int i=0;i!=33;i++){
        b = a >> 1;
        if (a&1 != 1){
            c++;
        }
        if (a&1 == 1){
            break;
        }
        printf("%d", c);

    }

    return 0;
}