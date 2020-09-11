/*
 * salaryTax.c
 *
 *  Created on: Mar 20, 2020
 *      Author: User
 *
 *      float taxIsrael(float salary) -
 *      float nettoIsrael(float salary) - netto salary after tax
 *
 *
 */
#include<stdio.h>

#include<stdio.h>

float taxUkraine(float salary);

int main(){
  float salary = 900;
  float res = taxUkraine(salary);
  printf("tax from salary=%f is %f\n", salary, res);
  salary = 3000;
  res = taxUkraine(salary);
  printf("tax from salary=%f is %f\n", salary, res);

  return 0;
}

float taxUkraine(float salary){
  float res = 0;
	if (salary > 1000) {
		res = (salary - 1000) * 0.17;
  }
	return res;
  }




//
//float incTaxIsr(float salary);
//float nettoSalIsr(float salary);
//void printData();
//
//int main(){
//
//	int mySalary=22000;
//	float taxToPay = incTaxIsr(mySalary);
//	float netSal = nettoSalIsr(mySalary);
//
//	printf("Since your salary is %d ILS, you must pay taxes as much as %.2f ILS, so you will receive only %.2f ILS.\n", mySalary, taxToPay, netSal);
//
//	return 0;
//}
//
//float incTaxIsr(float salary){
//	if (salary <= 0){
//		return salary * 0;
//	}
//	if (salary <= 6310){
//		return salary * 0.1;
//	}
//	if (salary <= 14530){
//		return salary * 0.2;
//	}
//	if (salary <= 20200){
//		return salary * 0.31;
//	}
//	if (salary <= 42030){
//		return salary * 0.35;
//	}
//	if (salary <= 54130){
//		return salary * 0.47;
//	}
//	if (salary > 54130){
//		return salary * 0.5;
//	}
//
//	return 0;
//}
//
//float nettoSalIsr(float salary){
//	if (salary <= 0){
//		return salary * 0;
//	}
//	if (salary <= 6310){
//		return salary * (1-0.1);
//	}
//	if (salary <= 14530){
//		return salary * (1-0.2);
//	}
//	if (salary <= 20200){
//		return salary * (1-0.31);
//	}
//	if (salary <= 42030){
//		return salary * (1-0.35);
//	}
//	if (salary <= 54130){
//		return salary * (1-0.47);
//	}
//	if (salary > 54130){
//		return salary * (1-0.5);
//	}
//
//	return 0;
//}
