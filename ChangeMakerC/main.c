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
#include <cmath>
/*
 * 
 */
int main(int argc, char** argv) {
    float toConvert;//the dollar value owed to be converted
    puts("Enter the dollar value you need to broken down into change");
    scanf("%f", toConvert);
    printChange(makeChange(toConvert),toConvert);
    return (0);
}
float * makeChange(float toConvert){
    float changeNumbers[] = {2,1,0.25,0.10,0.05,0.01};
    int *ptr;//to loop through and change values of the array
    ptr = changeNumbers;
    /*This array originally holds the numerical value for each different type of coin.
     * As the program progress's the values are replaced with how much of that type of change will be used.
     * toConvert will also be updated as the program progress's being filled with the current number of change left to be distributed.
     */
    for(int i = 0; i <6; i++){\
        if(toConvert != 0){
        int temp = (int)toConvert/(*ptr+i);
        toConvert = fmod(toConvert,*ptr+i);
        *ptr = temp;
        }
    else{
        i = 10;//leave the loop
    }
    }
    return changeNumbers;
}
void printChange(int numbers[5],float totalChange){
    printf("Your change of %f consists of: \n", totalChange);
    char *names[] = {
      "Twoonie",
      "Loonie",
      "Quarter",
      "Dime",
      "Nickel",
      "Penny"
   };
    for(int i = 0; i <6; i++){
        if(numbers[i]!=0){//only print out the number of coins they receive 1 or more back of
            printf("%s : %i$",names[i], numbers[i]);
        }
    }
        
    
}

