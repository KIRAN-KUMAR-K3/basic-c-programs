 #include <stdio.h>
int countWords(char sentence[]) {
    int count = 0;
    int i = 0;
    while (sentence[i] != '\0') {
        if (sentence[i] != ' ' && sentence[i] != '\n' && sentence[i] != '\t') {
            count++;
            while (sentence[i] != ' ' && sentence[i] != '\n' && sentence[i] != '\t' && sentence[i] != '\0') {
                i++;
            }
        } else {
            i++;
        }
    }
    return count;
}
int main() {
    char sentence[1000];
    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);
    int wordCount = countWords(sentence);
    printf("Number of words in the sentence: %d\n", wordCount);
    return 0;
}