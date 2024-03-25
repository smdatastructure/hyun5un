#include <stdio.h>
void hanoi(int n, char start, char work, char target) {
    if (n == 1) {
        printf("%c에서 원반 1을(를) %c로 옮김\n", start, target);
    }
    else {
        hanoi(n - 1, start, target, work);
        printf("%c에서 원반 %d을(를) %c로 옮김\n", start, n, target);
        hanoi(n - 1, start, target, work);
    }
}
int main() {
    hanoi(3,'A','B','C');
    return 0;
}
