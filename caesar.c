#include <stdio.h>

char *caesar(char *msg, int offset, char *result);

int main() {
    char msg[2048];
    char result[2048];
    int offset = 0;
    printf("Enter the string to encrypt: ");
    if (fgets(msg, sizeof(msg), stdin) != NULL) {
        printf("Enter the encryption key: ");
        if (scanf("%d", &offset)) {
            caesar(msg, offset, result);
            printf("%s\n", result);
        }
    }
    return 0;
}

char *caesar(char *msg, int offset, char *result) {
    while (*msg != '\0') {
        if ((*msg >= 'A') && (*msg <= 'Z')) {
            *result = (*msg - 'A' + offset) % 26 + 'A';
        } else if ((*msg >= 'a') && (*msg <= 'z')) {
            *result = (*msg - 'a' + offset) % 26 + 'a';
        } else {
            *result = *msg;
        }
        msg++;
        result++;
    }
    *result = '\0';
    return result;
}
