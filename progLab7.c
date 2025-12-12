#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char text[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor "
        "incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud "
        "exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute "
        "irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla "
        "pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia "
        "deserunt mollit anim id est laborum.";
    int len = strlen(text);
    char *result = malloc(len + 1);
    int comma_count = 0;  
    int result_index = 0; 
    for (int i = 0; i < len; i++) {
        if (text[i] == ',') 
        {
            comma_count++;
        }
        else 
        {
            result[result_index] = text[i];
            result_index++;
        }
    }
    result[result_index] = '\0';
    printf("Преобразованный текст:\n%s\n", result);
    printf("Количество удаленных запятых: %d\n", comma_count);
    free(result);
}