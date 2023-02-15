#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
  if(argc == 2){
    FILE* input = fopen(argv[1], "r");
    if(input == NULL){
      printf("Não foi possível abrir o ficheiro");
      return -1;
    }
    char c = fgetc(input);
    while(c != EOF){
      printf("%c", c);
      c = fgetc(input);
    }
    fclose(input);
  } else {
    for(int i = 1 ; i < argc ; i++){
      FILE* input = fopen(argv[i], "r");
      if(input == NULL){
        printf("Não foi possível abrir o ficheiro");
        return -1;
      }
      char c = fgetc(input);
      while(c != EOF){
        printf("%c", c);
        c = fgetc(input);
      }
      fclose(input);
    }
  }
  
  return 0;
}
