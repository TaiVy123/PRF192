#include <stdio.h>
#include <string.h>

void replace_characters(char s1[], char s2[], char s3[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int len3 = strlen(s3);
    int i, j;
    for (i = 0; i < len1; i++) {
        // Check if s1[i] exists in s2
        for (j = 0; j < len2; j++) {
            if (s1[i] == s2[j]) {
                // Replace s1[i] with corresponding s3[j]
                s1[i] = s3[j];
                break;
            }
        }
    }
    
    printf("OUTPUT: %s\n", s1);
}

int main() {
    char s1[100], s2[100], s3[100];

    // Input s1, s2, s3 from user
    printf("Enter string s1: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = 0; // Remove newline if present
    
    printf("Enter string s2: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = 0; // Remove newline if present
    
    printf("Enter string s3: ");
    fgets(s3, sizeof(s3), stdin);
    s3[strcspn(s3, "\n")] = 0; // Remove newline if present

    // Call replace_characters function
    replace_characters(s1, s2, s3);

    return 0;
}
