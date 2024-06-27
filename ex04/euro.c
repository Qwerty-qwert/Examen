#include <unistd.h>
#include <stdio.h>

char euro(char **local, char **vis){

    int cont_ltr = 0;
    int i = 0;
    int e = 0;

    while (local[i][cont_ltr] != '\0'){
            cont_ltr++;
        }
    while (vis[e][cont_ltr] != '\0'){
            cont_ltr++;
        }

    
        write(1,'1\n',2);
    
    return (0);
}

int main(int argc, char **argv){

    if(argc==2 || 
        ((argv[1][0] == 'S' && argv[1][1] == 'p' && argv[1][2] == 'a' && argv[1][3] == 'i' && argv[1][4] == 'n' && argv[1][5] == '\0') &&
         (argv[2][0] == 'C' && argv[2][1] == 'r' && argv[2][2] == 'o' && argv[2][3] == 'a' && argv[2][4] == 't' && argv[2][5] == 'i' && argv[2][6] == 'a' && argv[2][7] == '\0')) ||
        ((argv[1][0] == 'S' && argv[1][1] == 'p' && argv[1][2] == 'a' && argv[1][3] == 'i' && argv[1][4] == 'n' && argv[1][5] == '\0') &&
         (argv[2][0] == 'I' && argv[2][1] == 't' && argv[2][2] == 'a' && argv[2][3] == 'l' && argv[2][4] == 'y' && argv[2][5] == '\0')) ||
        ((argv[1][0] == 'A' && argv[1][1] == 'l' && argv[1][2] == 'b' && argv[1][3] == 'a' && argv[1][4] == 'n' && argv[1][5] == 'i' && argv[1][6] == 'a' && argv[1][7] == '\0') &&
         (argv[2][0] == 'S' && argv[2][1] == 'p' && argv[2][2] == 'a' && argv[2][3] == 'i' && argv[2][4] == 'n' && argv[2][5] == '\0'))) {
        
        euro(argv[1], argv[2]);

    }else{  
        write(1,"Arguments Error\n",16);
    }
    return (0);
}



   /*}else if((argv[1]=="Spain" && argv[2]=="Croatia") || (argv[1]=="Spain" && argv[2]=="Italy") || (argv[1]=="Albania" && argv[2]=="Spain")){

        */