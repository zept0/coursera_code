/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <Implementation File. Prints statistics to command line >
 *
 * <Provides instructions to analyze an array of unsigned char data items and
 * reports the max,min,mean,and median of the data set. All output values will
 * be rounded to the nearest integer.>
 *
 * @author <Zaragoza Jose>
 * @date <08/28/20>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

/* Add other Implementation File Code Here */

void print statistics (unsigned char *stats_list,unsigned int array_lens) {

}

void print_array(unsigned char *data_array,unsigned int array_lens) {

}

unsigned char find_median(unsigned char *data_array, unsigned int array_lens) {

return 0;
}

unsigned char find_mean(unsigned char *data_array,unsigned int array_lens) {return 0;
}

unsigned char find_maximum(unsigned char *data_array, unsigned int array_lens) {
return 0;
}

unsigned char find minimum(unsigned char *data_array,unsigned int array_lens) {
return 0;
}

unsigned char sort_array(unsigned char *data_array,unsigned int array_lens){return 0;
}














