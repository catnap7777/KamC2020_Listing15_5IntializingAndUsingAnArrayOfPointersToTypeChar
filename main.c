//Listing 15.5 Initializing and using an array of pointer to type char

#include <stdio.h>

int main(void)
{
    //array of pointers pointing to each character array (set of characters/words)
    char *message[8] = {"Four","score","and","seven","years","ago,","our","forefathers"};

    int count;
    printf("\n");

    for(count=0; count<8; count++)
    {
        printf("%s ", message[count]);
    }
    printf("\n");

    return 0;
}
