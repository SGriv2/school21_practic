#include "s21_string.h"

int s21_strlen_test(const char *array);
int s21_strcmp_test(const char *array, const char *string);
int s21_strcpy_test(char *string, const char *str);

int main(){
    const char array[] = "Hi";
    const char string[] = "Helo";
    const char s21str[] = "Hi";
    char str[25];
    
    s21_strlen_test(array);
    s21_strcmp_test(array, string);
    s21_strcmp_test(array, s21str);
    s21_strcpy(str, string);
    s21_strcpy_test(str, string);
    return 0;
}

int s21_strlen_test(const char *array){
    if(s21_strlen(array) == 5){
        printf("%s \n", "Всё гуд");
    } else {
        printf("%s \n", "n/a");
    }
    return 0;
}

int s21_strcmp_test(const char *array, const char *string){
    if(s21_strcmp(array, string) == 0){
        printf("%s \n", "Всё гуд");
    } else {
        printf("%s \n", "n/a");
    }
    return 0;
}

int s21_strcpy_test(char *string, const char *str){
    if(s21_strcmp(str, string) == 0){
        printf("%s \n", "Всё гуд");
    } else{
        printf("%s \n", "n/a");
    }
    return 0;
}