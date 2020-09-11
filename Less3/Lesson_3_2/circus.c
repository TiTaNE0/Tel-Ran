/*
 * circus.c
 *
 *  Created on: Mar 3, 2020
 *      Author: User
 */

#include<stdio.h>
void lightOn();
void entertainer();
void lightOff();
void juggler();
void singer();
void clown();



int main(){
	lightOn();
	entertainer();
	lightOff;
	return 0;
}

void lightOn(){
	printf("light on\n");
}

void lightOff(){
	printf("light off\n");
}
void entertainer(){
	printf("I am intertainer\n");
	printf("My name is Bill\n");
	juggler();
	singer();
	clown();
}
void juggler(){
	printf("I am a juggler\n");
	printf("My name is John Smith\n");
}
void singer(){
	printf("lalala");
}

void clown(){
	printf("I am a clown\n");
	printf("My name is Philip-p-p\n");
}


