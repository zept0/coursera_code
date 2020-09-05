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
  print_array(test, SIZE);
  sort_array (test,SIZE);
  unsigned char minimum=find_minimum(test,SIZE);
  unsigned char maximum=find_maximum(test,SIZE);
  unsigned char mean=find_mean(test, SIZE);
  unsigned char median=find_median(test,SIZE);
  printf("\nThe minimum value in the array is: %d ", minimum);
  printf("\nThe maximum value in the array is: %d ", maximum);
  printf("\nThe mean value of the array is: %d ", mean);
  printf("\nThe median value of the array is: %d ", median);
}

/* Add other Implementation File Code Here */

void print_statistics (unsigned char *stats_list,unsigned int array_lens) {

}

void print_array(unsigned char *data_array,unsigned int array_lens) {

	for(int x=0; x<array_lens;x++) {
	
	printf(" %d",*data_array);
	data_array++;
	
	}
}

unsigned char find_median(unsigned char *data_array, unsigned int array_lens) {
	unsigned char newarray [array_lens];
        for(char k=0;k<array_lens;k++) {
                newarray[k]=*data_array;
                data_array++;
        }

        unsigned char i,j,x;
        i=1;
        while(i < array_lens) {
                j=i;
                while(j >0 && newarray[j-1]>newarray[j]) {
                        x=newarray[j];
                        newarray[j]=newarray[j-1];
                        newarray[j-1]=x;
                        j=j-1;
                }
                i=i+1;
        }

	unsigned char middle=array_lens/2;	
	unsigned char median=(newarray[middle]+newarray[middle-1])/2;
	
	return median;
}

unsigned char find_mean(unsigned char *data_array,unsigned int array_lens){
	unsigned int sum=0;
	for(char i=0; i < array_lens; i++){
		sum=sum+(*data_array);
		data_array++;
	}

	unsigned char mean=sum/array_lens;

	return mean;
}

unsigned char find_maximum(unsigned char *data_array, unsigned int array_lens) {
	unsigned char newarray [array_lens];
        for(char k=0;k<array_lens;k++) {
                newarray[k]=*data_array;
                data_array++;
        }

        unsigned char i,j,x;
        i=1;
        while(i < array_lens) {
                j=i;
                while(j >0 && newarray[j-1]>newarray[j]) {
                        x=newarray[j];
                        newarray[j]=newarray[j-1];
                        newarray[j-1]=x;
                        j=j-1;
                }
                i=i+1;
        }

        unsigned char maximum=newarray[array_lens-1];
	return maximum;
}

unsigned char find_minimum(unsigned char *data_array,unsigned int array_lens) {
	unsigned char newarray [array_lens];
        for(char k=0;k<array_lens;k++) {
                newarray[k]=*data_array;
                data_array++;
        }

        unsigned char i,j,x;
        i=1;
        while(i < array_lens) {
                j=i;
                while(j >0 && newarray[j-1]>newarray[j]) {
                        x=newarray[j];
                        newarray[j]=newarray[j-1];
                        newarray[j-1]=x;
                        j=j-1;
                }
                i=i+1;
        }
	
	unsigned char minimum=newarray[0];
		
	return minimum;
}

unsigned char sort_array(unsigned char *data_array,unsigned int array_lens){

	unsigned char newarray [array_lens];
	for(char k=0;k<array_lens;k++) {
		newarray[k]=*data_array;
		data_array++;
	}

	unsigned char i,j,x;
	i=1;
	while(i < array_lens) {
		j=i;
		while(j >0 && newarray[j-1]<newarray[j]) {
			x=newarray[j];
			newarray[j]=newarray[j-1];
			newarray[j-1]=x;
			j=j-1;
		}
		i=i+1;
	}

	for(int w=0; w<array_lens;w++) {
                printf("\nElement[%d]=%d\n",w,newarray[w]);
        }

	return 0;

}














