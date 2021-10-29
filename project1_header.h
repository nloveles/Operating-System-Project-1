#pragma once
//Nathan Loveless
//Project 1 Header file
//Operating Systems
//10/25/21
// 
//Defines the name of the h file
#ifndef PROJECT1_H
#define PROJECT1_H

//Including librarys
//include <semaphore.h>
//#include <semaphore.c>
#include <pthread.h>
//#include <semaphore.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

//Declaring Global Variables
//sem_t comsumer_sem;
//sem_t producer_sem;
int buffer[1];
int i = 0;
int reader = 0; 

//Declaring Functions
void consume();
void produce();

//Defining Functions
void consume()
{
	int first = buffer[i]; //gets value from buffer
	buffer[i] = 0; //resets the spot in the buffer
	i--;//Subtracts 1 from i
	int sec = buffer[i];
	buffer[i] = 0;
	i--;
	printf("Read: %d \t", first); //Displays the first number
	printf("Read: %d \t", sec);//Displays the second number
	reader = 0;//Tells producer it is its turn 

}

void produce()
{
	int value; //Variable to hold value
	value = rand() % 10;  //Gets random int less then 10
	buffer[i] = value;  //Writes it to the buffer
	printf("Wrote: %d \t", value); //Displays it to console 
	i++; //Increases i
	value = rand() % 10;
	buffer[i] = value; 
	printf("Wrote: %d \t", value);
	reader = 1;  //Tell the consumer it is its turn
}

#endif

