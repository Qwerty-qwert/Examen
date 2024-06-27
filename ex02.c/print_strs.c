#include <unistd.h>
#include <stdio.h>

char examen(int cont, char **pal){

    char zero = 48;
    char nueve = 57;
    int falso = 1;

    for(int i=0; i < cont ; i++){

        int cont_ltr = 0;
        while (pal[i][cont_ltr] != '\0'){

            if(pal[i][cont_ltr] >= zero && pal[i][cont_ltr] <= nueve){
                write(1,"exam2\n",6);
                falso = 0;
                break;
            }
            cont_ltr++;
        }

    }

   if(falso == 1){
        write(1,"exam1\n",6);
   }

    return 0;
}


int main (int argc, char **argv){

    if (argc > 1){
        examen(argc, argv);
    
    }else{
        write(1,"exam3\n",5);
    }

    return (0);
}
