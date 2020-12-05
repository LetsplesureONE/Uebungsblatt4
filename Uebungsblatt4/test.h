#pragma once
#include "list.h"

void test_pushPrint(void);
void testListFindElement(void);
void printfindelemtest(List* list, int value); //simplyfying 4b ;)
void testListGetElementAtIndex(void);
void testListGetIndexOf(void);

//exercise4
void test_pushPrint(void) {
	List* testit = listCreate();
	listPrint(testit);
	for (int i = 9; i > 0; i--) {
		listPush(testit, i);
	}
	listPrint(testit);

}

void filllist110(List* list) {
	for (int i = 10; i > 0; i--) {
		listPush(list, i);
	}
}

void testListFindElement(void) {
	List* tryto = listCreate();
	listPrint(tryto);
	printfindelemtest(tryto, 0);
	//fill list
	filllist110(tryto);
	//listPrint(tryto); // testing list fill
	//position of element value 5 ==> should be 4 cause pos 0=1 
	if (listGetIndexOfElement(tryto, 5) == 4) {
		printf("True\n");
	}
	else {
		printf("False\n");
	}
	//search for value 20 ==> expecting pos = -1 cause not in list
	if (listGetIndexOfElement(tryto, 20) == -1) {
		printf("True\n");
	}
	else {
		printf("False\n");
	}
}

void printfindelemtest(List* list, int value) {
	if (listFindElement(list, value) == NULL) {
		printf("True\n");
	}
	else {
		printf("False\n");
	}
}

//exercise5
void testListGetIndexOf(void) {
	List* noiceList = listCreate();
	if(-1 ==listGetIndexOfElement(noiceList, 0)){
		printf("True\n");
	}
	else {
	printf("False\n");
	}
	filllist110(noiceList);
	if (0 == listGetIndexOfElement(noiceList, 1)) {
		printf("True\n");
	}
	else {
		printf("False\n");
	}
	if (3 == listGetIndexOfElement(noiceList, 4)) {
		printf("True\n");
	}
	else {
		printf("False\n");
	}
	if (-1 == listGetIndexOfElement(noiceList, 25)) {
		printf("True\n");
	}
	else {
		printf("False\n");
	}
}

void testListGetElementAtIndex(void) {
	List* finaltest = listCreate();
	if (NULL == listGetElementAtIndex(finaltest, 5)) {
		printf("True\n");
	}
	else {
		printf("False\n");
	}
	filllist110(finaltest);
	//printf("%i\n", listGetIndexOfElement(finaltest, 5));
	if (4 == listGetIndexOfElement(finaltest, 5)) {
		printf("True\n");
	}
	else {
		printf("False\n");
	}
	if (NULL == listGetElementAtIndex(finaltest, 25)) {
		printf("True\n");
	}
	else {
		printf("False\n");
	}
}