int _strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return s1[i] - s2[i];
        }
        i++;
    }

    // If both strings have reached the end ('\0'), they are equal
    if (s1[i] == '\0' && s2[i] == '\0') {
        return 0;
    }

    // If only s1 has reached the end, it is smaller than s2
    if (s1[i] == '\0') {
        return -1;
    }

    // If only s2 has reached the end, it is smaller than s1
    return 1;
}

