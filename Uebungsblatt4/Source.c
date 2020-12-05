#include <stdio.h>
#include <stdlib.h>
#include "myboolean.h"
#include "element.h"
#include "list.h"
#include "test.h"

int main(void) {
	srand(42);
	//testing exercise1
	/*
	List* testtastisch =listCreate();
	listPrint(testtastisch);
	Element* addelem = elementCreate();
	listPush(testtastisch, 5);
	listPush(testtastisch, 7);
	listPrint(testtastisch);
	listPop(testtastisch);
	listPrint(testtastisch);
	listPop(testtastisch);
	listFillRandom(testtastisch, 42, 10, 1,100);
	listPrint(testtastisch);
	//*/
	//testint exercise2
	/*
	List* testtastisch = listCreate();
	listFillRandom(testtastisch, 42, 10, 1, 100);
	listPrint(testtastisch);
	printf("Found element on %p\n", listFindElement(testtastisch, 5));
	printf("Found element on %p\n", listFindElement(testtastisch, 42));
	printf("Found element at position %i\n", listGetIndexOfElement(testtastisch, 5));
	printf("Found element at position %i\n", listGetIndexOfElement(testtastisch, 42));
	printf("value of pos 8 %p\n", listGetElementAtIndex(testtastisch, 8));
	printf("value of pos 22 %p\n", listGetElementAtIndex(testtastisch, 22));
	free(testtastisch);
	//*/
	//testint exercise3
	//*
	List* testtastisch = listCreate();
	listFillRandom(testtastisch, 42, 10, 1, 100);
	listPrint(testtastisch);
	listSwapElements(testtastisch, 2,2);
	listSwapElements(testtastisch, 0, 1);
	listPrint(testtastisch);
	listSwapElements(testtastisch, 2, 3);
	listPrint(testtastisch);
	//*/

	//test exercise4
	/*
	test_pushPrint();
	testListFindElement();
	//*/

	//test exercise5
	//*
	//testListGetIndexOf();
	//testListGetElementAtIndex();
	//*/

	return 0;
}