/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   dichotomy.c
 * Author: student
 *
 * Created on October 21, 2020, 1:34 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "dichotomy.h"
/*
 * 
 */
int find_by_dichotomy(int array[], int size_t, int value )  {
    int debut = array[0] ;
    
    while (debut <= size_t){
        int mid = debut +(size_t - debut) /2;
     
        if (array[mid] == value)
            return mid;  
        if (array[mid] < value)
            debut = mid + 1;
        else 
            size_t = mid- 1;
             
    }
    return -1;
}

