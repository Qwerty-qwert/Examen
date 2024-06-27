#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int math (int numero){

    int array[10];

    //Hace la multiplicacion, te indica si es par o impar y lo almacena en una array
    for (int i=0; i<10;i++){

        int detector;
        detector = i * numero;

        if ( detector % 2 == 0) {
            printf("%i x %i = %i <par>\n",i,numero,detector);
        }else{
            printf("%i x %i = %i <impar>\n",i,numero,detector);
        }

        array[i]=detector;
    }

    write(1,"Array de resultado :\n",21);
    
    //Funcion para quitar la ultima coma
    for (int i=0; i<10;i++){
        
        if(i<9){ 
            printf("%d, ",array[i]);
        }else{
            printf("%d",array[i]);
        }
    }
    return 0;
}

int main(int argc, char **argv){

    if(argc!=2 || atoi(argv[1])<0){

        write(1,"Error\n",6);

    }else{
        
        math(atoi(argv[1]));
    }

    return (0);
}