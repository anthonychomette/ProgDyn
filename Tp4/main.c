/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */



/* 
 * File:   main.c
 * Author: student
 *
 * Created on October 21, 2020, 9:39 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
 
    int array[] = {1,12,13,24,26,27};
    int resultat = find_by_dichotomy( array, 6, 5);
    if (resultat == -1) 
        printf("La valeur n'est pas dans le tableau");    
    else  
        printf("La valeur a été trouvé. C'est l'index %d",resultat);
    
    return (EXIT_SUCCESS);
}

