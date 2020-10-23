/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   glouton.c
 * Author: student
 *
 * Created on October 21, 2020, 1:34 PM
 */
#include <stdio.h>
#include <stdlib.h>
#include "glouton.h"

void triSac(Object *tab, int size_t) {
    float j1, jp1;
    Object tmp;

    for (int i = 0; i < size_t; i++) {
        for (int j = 0; j < size_t - 1; j++) {
            j1 = (float) (tab[j].prix) / (float) (tab[j].masse);
            jp1 = (float) (tab[j + 1].prix) / (float) (tab[j + 1].masse);
            if (j1 < jp1) {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
        }
    }
}

void knapsack(Object tab[], int size_t, Knapsack *sac, int W) {
    triSac(tab, size_t);
    int w = 0;
    for (int i = 0; i <= size_t - 1; i++) {
        if (w + tab[i].masse < W) {
           
            sac->data[sac->taille] = tab[i];
            sac->taille++;
        }
    }
    
    
}


void initialise(Knapsack sac){
    sac.taille = -1;
}