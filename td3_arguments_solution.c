#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

// ./app John -e // pos_firstname = 1

// ./app -e John --help// argc = 3  pos_firstname = 2
//   0    1   2    3


void print_help(){
    printf("L'aide du programme\n");
}

int main(int argc, char* argv[]){

    const int return_error_arg = 4;
    
    if( argc < 2 )
        return return_error_arg;

    bool option_e_present = false;
    bool option_l_present = false;
    int pos_firstname = 0;
    int pos_message = 0;

    // Arguments  
    // ------------------------------------------------
    for(int i=1; i<argc; i++){

        // contrôle si argument == help
        if( strcmp(argv[i], "--help") == 0 ){
            print_help();
            return 0;
        }
        else if( strcmp(argv[i], "-e") == 0 ){
            option_e_present = true;
        }
        else if( strcmp(argv[i], "-l") == 0 ){
            option_l_present = true;
        }
        // Test si prénom ./app John -e Marc
        else if( argv[i][0] != '-' ){ // premier caractère argv[i] diff de '-'
            if( pos_firstname == 0 )
                pos_firstname = i;
            else    // deuxième prénom
                return return_error_arg;
        }
        else if( strcmp(argv[i], "-m") == 0 ){ // check si message perso
            pos_message = i+1;
            i++; // pour passer le message et aller à l'argument suivant ./app John -m Test -e
        }
        else{
            printf("Option ou argument non valide détecté");
            return return_error_arg;
        }
    }



    // Affichage
    // ------------------------------------------------
    
    if( pos_message != 0 ){
        printf("%s %s\n", argv[pos_message], argv[pos_firstname]);
        return 0;
    }

    // printf("%s ", option_e_present ? "Hello" : "Bonjour");
    if( option_e_present )
    {
        printf("Hello ");
    }
    else
    {
        printf("Bonjour ");
    }

    printf("%s ", argv[pos_firstname]); // Affichage du prénom

    if( option_l_present ){
        printf("%s", option_e_present ? " how are you ?\n" : " comment ça va ?\n");
    }

    return 0;
}
