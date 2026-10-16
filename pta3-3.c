#include <stdio.h>
 int main()
    {
      int a, b;
    scanf("%d %d", &a, &b);
    char op[4] = {'+', '-', '*', '/'};
    int ans[4] = {a + b, a - b, a * b, a / b};
    for (int i  = 0; i < 4; i++) {
        printf("%d %c %d = %d\n", a, op[i],b, ans[i]);
    }
    return 0;
}
