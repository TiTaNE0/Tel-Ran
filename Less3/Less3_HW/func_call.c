/*
 * func_call.c
 *
 *  Created on: Mar 4, 2020
 *      Author: User


#include <stdio.h>

void activateHydrogen();
void engineStart();
void boostersIgnite();
void boostersRelease();
void liftOff();

int main(){
	printf("T-10 seconds counting to blast off:\n");
		activateHydrogen();
	return 0;
}

void activateHydrogen(){
	printf("08 Activate main engine hydrogen burnoff system...\n");
	engineStart();
}

void engineStart(){
	printf("06 Main engine start...\n");
	boostersIgnite();
}

void boostersIgnite(){
	printf("04 Solid Rocket Boosters ignite...\n");
	boostersRelease();
}

void boostersRelease(){
	printf("02 Explosive bolts release the boosters...\n");
	liftOff();
}

void liftOff(){
	printf("Poehali (Yalla, Nu!!1)...\n");
}
 */
