#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[100];
    int i, count = 0, flag = 1;
    scanf("%[^\n]s", s);


    for (i = 0; s[i] != '\0'; i++) {
        s[i] = toupper(s[i]);
        count++;
    }
    for (i = 0; i < count; i++) {
        if (s[i] != s[count - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("pal\n");
    else
        printf("not pal\n");

    return 0;
}
