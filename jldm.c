#include <stdio.h>
#include<string.h>

typedef struct pessoa{

    char nome[21];

}pessoas;




int main() {
    
    
    pessoas array[100];
    int n,cont1=0,cont2=0;
    char aux[21];
    char simbolo;
    scanf("%d",&n);
    for(int i = 0;i<n;i++){

    scanf(" %c %s",&simbolo,&array[i].nome);
    
    if(simbolo == '+'){
        cont1+=1;
    }
    
    else if(simbolo == '-'){
        cont2+=1;
    }

  }

  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        
        if(strcmp(array[i].nome,array[j].nome)>0){
            strcpy(aux,array[i].nome);
            strcpy(array[i].nome,array[j].nome);
            strcpy(array[j].nome,aux);
        }
        
    }
  }

  for(int i= 0;i<n;i++){

    printf("%s\n",array[i].nome);

  }

  printf("Se comportaram: %d | Nao se comportaram: %d\n",cont1,cont2);

return 0;
}
