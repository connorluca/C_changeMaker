/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: conno
 *
 * Created on September 8, 2020, 2:47 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float toConvert;
    puts("Enter the dollar value you need to broken down into change");
    scanf("%i", toConvert);
    return (0);
}
float * makeChange(float toConvert){
    float changeNumbers[] = {2,1,0.25,0.10,0.05,0.01};
    /*This array originally holds the numerical value for each different type of coin.
     * As the program progress's the values are replaced with how much of that type of change will be used.
     */
    for(int i)
}

