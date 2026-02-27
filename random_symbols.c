#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> 

int main() {
    const char symbols[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=[]{}|;:',.<>/?`~";
    const int symbols_count = sizeof(symbols) - 1;

    srand(time(NULL));

    while (1) {
        for (int i = 0; i < 10; i++) { 
            for (int j = 0; j < 50; j++) { 
                char c = symbols[rand() % symbols_count];
                putchar(c);
            }
            putchar('\n');
        }
        fflush(stdout);
        usleep(300000); 
    }

    return 0;
}
