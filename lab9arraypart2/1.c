#include <stdio.h>
#include <string.h>

int main() {
    int count = 0;
    char input1[20];
    char input2[20];
    char input3[20];
    char input4[20];
    char *inputs[] = {input1, input2, input3, input4};

    for (int i = 0; i < 4; i++) {
        printf("Enter text %d: ", i + 1);
        scanf("%s", inputs[i]);
    }

    for (int i = 0; i < 4; i++) {
        printf("Text %d: %s : %zu characters\n", i + 1, inputs[i], strlen(inputs[i]));
        count += strlen(inputs[i]);
    }

    return 0;
}
