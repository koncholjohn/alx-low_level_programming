#include <stdio.h>
#include <string.h>

#define KEY_LENGTH 16

void generate_key(const char *username, char *key) {
    int i, len;
    char tmp[KEY_LENGTH];

    len = strlen(username);
    strncpy(tmp, username, KEY_LENGTH);

    for (i = 0; i < len; i++) {
        tmp[i] ^= (i * len);
        tmp[i] += i;
    }

    strncpy(key, tmp, KEY_LENGTH);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <username>\n", argv[0]);
        return 1;
    }

    generate_key(argv[1], key);

    printf("%s\n", key);

    return 0;
}
