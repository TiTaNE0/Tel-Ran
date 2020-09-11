/*
 * hW_lesson09.c
 *
 *  Created on: Mar 28, 2020
 *      Author: User
 */
#include<stdio.h>
void workingHours(int dayNum);
void workingTeam(int weekNum);

int main(){

	workingHours(0);
	workingHours(1);
	workingHours(2);
	workingHours(3);
	workingHours(4);
	workingHours(5);
	workingHours(6);
	workingHours(7);
	workingHours(8);

	workingTeam(1);

	workingTeam(53); // last week of that year

	return 0;
}

void workingHours (int dayNum) {

	switch (dayNum) {
	case 1:
	case 3:
	case 5: printf("Ba Yom Rishon, Yom Sheni, Yom Shlishi mi 8:30 ad 13:30\n");
		break;
	case 2:
	case 4: printf("Ba Yom Raviyi mi 8:30 ad 13:30 ve mi 16:00 ad 18:30\n");
		break;
	case 6:
	case 7: printf("Sogur.\n");
		break;
	default: printf("Esh lanu rak 7 yamim ba shavua\n");

	}
}

// 2*) 4 brigades: John, 		Peter, 		Tigran, 	Maria
// 				1, 5, 9,   		2, 6, 10,   3, 7, 11,  4, 8, 12...

void workingTeam(int weekNum){

	int teamNum = weekNum % 4;

	switch (teamNum) {
	case 1: printf("John works on week %d\n", weekNum);
		break;
	case 2: printf("Peter works on week %d\n", weekNum);
		break;
	case 3: printf("Tigran works on week %d\n", weekNum);
		break;
	case 0: printf("Maria works on week %d\n", weekNum);
		break;
	}

}



