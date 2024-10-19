#include <stdio.h>

int main() {
   printf("digite o tempo em segundos\n");
    int ts;
    scanf("%d", &ts);
    int h = ts / 3600;
    int m = (ts % 3600) / 60;
    int s = (ts % 3600) % 60;
    printf("%d:%d:%d\n", h, m, s);

    return 0;
}