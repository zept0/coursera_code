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
 * @file <stats.h> 
 * @brief <Header file for the stats.c code>
 *
 * <Header file includes all of the declarations and documentation from the
 * stats.c file. Each declaration will include comments with a description 
 * the function, the inputs, and return value.>
 *
 * @author <Jose Zaragoza>
 * @date <08/28/20>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__
 
/**
 * @brief Prints Statistics
 *
 * This function takes in as an input an array and the length of the array. It  * will print the minimum, maximum, mean, and meadian in a formatted display.
 *
 * @param stats_list The array
 * @param array_lens The length of the array 
 * @return No return
 *
 */

void print_statistics(unsigned char *stats_list,unsigned int array_lens); 

/**
 * @brief Prints Array
 *
 * This function takes in as an input an array and an int length of the array.  * It will print the array out.  
 *
 * @param data_array The array
 * @param array_lens The Length of the Array
 *
 * @return No Return  
 *
 */

void print_array(unsigned char *data_array,unsigned int array_lens);

/**
 * @brief Finds the median of the array  
 *
 * This function takes in as an input an array and an int length.This function  * will return the median value of the array.
 *
 * @param data_array The array  
 * @param array_lens The length of the array
 *
 * @return The median value of the array
 *
 */

unsigned char find_median(unsigned char *data_array, unsigned int array_lens);

/**
 * @brief Finds the mean of the array
 *
 * This function takes in as an input an array and an int length. This function * will return the mean value of the array.
 *
 * @param data_array The array
 * @param array_lens The length of the array
 *
 * @return The mean value of the array
 *
 */

unsigned char find_mean(unsigned char *data_array, unsigned int array_lens);

/**
 * @brief Finds the maximum of the array
 *
 * This function takes in as an input an array and an int length. This function * will return the mean value of the array.
 *
 * @param data_array The array
 * @param array_lens The length of the array
 *
 * @return The maximum value of the array
 */

unsigned char find_maximum(unsigned char *data_array,unsigned int array_lens);

/**
 * @brief Finds the minimum of the array
 *
 * This function takes in as input an array and an int length. This function
 * will return the minimum value of the array
 *
 * @return The minimum of the array
 *
 */

unsigned char find_minimum(unsigned char *data_array,unsigned int array_lens);

/**
 * @brief Sort the arrray from largest to smallest
 *
 * This function takes in as an array input and an int length.This function
 * will return char from largest to smallest
 *
 * @return The char corresponding to the largest to smallest
 *
 */

unsigned char sort_array(unsigned char *data_array,unsigned int array_lens);









#endif /* __STATS_H__ */
