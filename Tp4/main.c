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
#include <assert.h>
#include <time.h>
#include <stdbool.h>
/*
 * 
 */

int main(int argc, char** argv) {
 
    int array[] = {1,12,13,24,26,27};
    int resultat = find_by_dichotomy( array, 6, 24);
    if (resultat == -1) 
        printf("La valeur n'est pas dans le tableau");    
    else  
        printf("La valeur a été trouvé. C'est l'index %d",resultat);
    
   assert(resultat != -1);   
   assert(resultat == -1);  
    return (EXIT_SUCCESS);
    
    
    //glouton
    Object un;
    un.prix = 2;
    un.masse = 8;
    
    Object deux;
    deux.prix = 9;  
    deux.masse = 4;
    
    Object trois;
    trois.prix = 15;
    trois.masse = 3;

    Object array2[] = {un, deux, trois};

    triSac(array2, 5);
    assert(array2[0].prix == 15);
    assert(array2[0].masse == 3);

    knapsack monSac;
    initialise(monSac);
    int WCapaciteMax = 200;

    knapsack(array2, 6, &monSac, WCapaciteMax);
    assert(monSac.data[0].prix == 15);
    assert(monSac.data[1].prix == 2);
}

