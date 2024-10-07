#include "s21_string.h"

size_t s21_strlen(const char *array){
    size_t i = 0;
    while(array[i] != '\0'){
        i++;
    }
    return i;
}

int s21_strcmp(const char *array, const char *string){
    int i = 0;
    while (array[i] != '\0' || string[i] != '\0'){
        if(array[i] == string[i]){
            i++;
        } else{
            return 1;
        }
    }
    return 0;
}

char s21_strcpy(char *string, const char *str){
    int i = 0;
    while(str[i] != '\0'){
        string[i] = str[i];
        i++;
    }
    return *string;
}