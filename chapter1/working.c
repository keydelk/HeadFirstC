/* For easily following along with chapter 1 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    char card_name[3];
    puts("Enter a card value: ");
    scanf("%2s", card_name);

    int val = 0;
    switch (card_name[0]) {
        case 'K':
        case 'Q':
        case 'J':
            val = 10;
            break;
        case 'A':
            val = 11;
            break;
        default:
            val = atoi(card_name);
    }

    printf("Card value is %d\n", val);

    printf("card_name is stored at %p\n", &card_name);
    printf("val is stored at %p\n", &val);

    return 0;
}