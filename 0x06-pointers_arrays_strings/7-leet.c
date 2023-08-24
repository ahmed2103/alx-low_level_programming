char *leet(char *s) {
    char *original = s;
    char *encoded = malloc(strlen(s) + 1);
    
    if (encoded == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    char leetMap[128] = {0}; // Initialize with zeros
    leetMap['a'] = leetMap['A'] = '4';
    leetMap['e'] = leetMap['E'] = '3';
    leetMap['o'] = leetMap['O'] = '0';
    leetMap['t'] = leetMap['T'] = '7';
    leetMap['l'] = leetMap['L'] = '1';

    char *p = encoded;
    while (*s) {
        if (leetMap[(int)*s]) {
            *p = leetMap[(int)*s];
        } else {
            *p = *s;
        }
        s++;
        p++;
    }
    *p = '\0';

    return encoded;
}
