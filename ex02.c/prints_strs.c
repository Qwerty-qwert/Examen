#include <unistd.h>
#include <stdio.h>

char prints_strs(int cont, char **pal){



    //Bucle por palabra
    for(int i=1; i < cont ; i++){

    //Contador de palabra
        int cont_ltr = 0;
        while (pal[i][cont_ltr] != '\0'){
            cont_ltr++;
        }
        
        if ( i % 2 == 0) {
            write(1,pal[i],cont_ltr);
        }else{

            while(cont_ltr>=0){
                write(1,&pal[i][cont_ltr],1);
                cont_ltr--;
            }
        }

        write(1, "\n", 1);

    }


    return 0;
}


int main (int argc, char **argv){

    prints_strs(argc, argv);

    return (0);
}







 /*//Contador de palabra
        int cont_ltr = 0;
        while (pal[i][cont_ltr] != '\0'){
            cont_ltr++;
        }

        //Detector de palabras pares e impares
        if (cont_ltr % 2 == 0) {
            write(1,pal[i],cont_ltr);
        } else {
            while(cont_ltr == 0){
                char *letra = &pal[i][cont_ltr];
                write(1,&letra,1);
                cont_ltr--;
            }
        }*/