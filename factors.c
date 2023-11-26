#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *my_file = fopen(argv[1], "r");
    if (my_file == NULL) {
        perror("Error opening file");
        return 1;
    }

    char line[256];  // Adjust the size according to your needs
    while (fgets(line, sizeof(line), my_file) != NULL) {
        long long number = atoll(line);  // Use atoll for long long
        long long i = 2;
        while (1) {
            if (number % i == 0) {
                printf("%lld=%lld*%lld\n", number, number / i, i);
                break;
            }
            i++;
        }
    }

    fclose(my_file);
    return 0;
}

