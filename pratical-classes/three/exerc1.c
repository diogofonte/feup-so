#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#include <strings.h>
#define MAX_STR_SIZE 64
/*int main(int argc, char* argv[]) {
  char* p1 = (char*)malloc(MAX_STR_SIZE * sizeof(char));
  char* p2 = (char*)malloc(MAX_STR_SIZE * sizeof(char));

  int result = strcmp(argv[1], argv[2]);

  if (result == 0)
    printf("the strings are the same\n");
  else if (result < 0)
    printf("%s < %s\n", argv[1], argv[2]);
  else
    printf("%s > %s\n", argv[1], argv[2]);

  strcpy(p1, argv[1]);
  strcpy(p2, argv[2]);
  printf("p1 holds:%s\n", p1);
  printf("p2 holds:%s\n", p2);

  strcat(p1,p2);
  printf("p1 holds:%s\n", p1);

  strcat(p2,p1);
  printf("p2 holds:%s\n", p2);

  return EXIT_SUCCESS;
}*/

int count_occurrences(char* str1, char* str2){
  int j = 0, count = 0;

  for(int i = 0 ; i < strlen(str1) ; i++){
    if(str1[i] == str2[j]){
      j++;
    } else {
      j = 0;
    }
    if(j == strlen(str2)) count++;
  }

  return count;
}

int main(int argc, char* argv[]){
  if(argc == 2){
    char* string = (char*)malloc(MAX_STR_SIZE * sizeof(char));
    string = argv[1];

    for(int i = 0 ; i < strlen(string) ; i++){
      if(isupper(string[i])) string[i] = tolower(string[i]);
    }

    printf("Esta é a string modificada: %s\n", string);

  } else if(argc == 3){
    char* string1 = (char*)malloc(MAX_STR_SIZE * sizeof(char));
    string1 = argv[1];
    char* string2 = (char*)malloc(MAX_STR_SIZE * sizeof(char));
    string2 = argv[2];

    if(strstr(string2,string1)){
      printf("A primeira string ocorre na segunda!\n");
    } else {
      printf("A primeira string não ocorre na segunda!\n");
    }

    printf("A primeira string ocorre %d vezes na segunda!\n",
          count_occurrences(string2, string1));
    //poderia usar *strchr para ir buscar a primeira ocorrencia
    //e strcoll para ver a partir desse char as seguintes ocorrencias
  }

  return 0;
}
