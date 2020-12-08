#pragma once
#include "element.h"
#include "myboolean.h"

struct List {
	struct Element* head; //Pointer to head
};

typedef struct List List;

//exersice 1
List* listCreate();
void listPush(List* list, unsigned int value);
Element* listPop(List* list);
void listPrint(List* list);
void listFillRandom(List* list, int seed, int anzahlWerte, int min, int max);

//exersice2
Element* listFindElement(List* list, unsigned int value);
int listGetIndexOfElement(List* list, unsigned int value);
Element* listGetElementAtIndex(List* list, unsigned int index);

//exersice3
boolean listSwapElements(List* list, unsigned int aIndex, unsigned int bIndex);
boolean listDeleteElement(List* list, unsigned int value);

//exersice1

List* listCreate() {
	List* newlist = malloc(sizeof(List));
	newlist->head = NULL;
	return newlist;
}

void listPush(List* list, unsigned int value) {
	Element* tempelem = elementCreate();
	tempelem->pSuccessor = list->head;
	tempelem->value = value;
	list->head = tempelem;
}

Element* listPop(List* list) {
	Element* oldhead = list->head;
	list->head = list->head->pSuccessor;
	return oldhead;
}

void listPrint(List* list) {
	if (!(list->head == NULL)) {
		Element* ptr = list->head;
		while(!(ptr==NULL)) {
			printf("%d ", ptr->value);
			ptr = ptr->pSuccessor;
		}
	}
	else {
		printf("List empty!");
	}
	printf("\n");
}

void listFillRandom(List* list, int seed, int anzahlWerte, int min, int max) {
	srand(seed);
	for (int i = 0; i < anzahlWerte; i++) {
		listPush(list, ((rand() % (max - min)) + min));
	}
	
}

//exersice2

Element* listFindElement(List* list, unsigned int value) {
	Element* elemptr = list->head;
	while (elemptr!=NULL) {
		if (elemptr->value == value) {
			return(elemptr);
		}
		elemptr = elemptr->pSuccessor;
	}
	return (elemptr);
}

int listGetIndexOfElement(List* list, unsigned int value) {
	Element* elemptr = list->head;
	int counter = 0;
	while (elemptr != NULL) {
		if (elemptr->value == value) {
			return(counter);
		}
		elemptr = elemptr->pSuccessor;
		counter++;
	}
	return (-1);
}


Element* listGetElementAtIndex(List* list, unsigned int index) {
	Element* elemptr = list->head;
	for (unsigned int intind = index; intind > 0; intind--) {
		if (elemptr != NULL) {
			elemptr = elemptr->pSuccessor;
		}
		else
			return (NULL);
	}
	return (elemptr);
}

//exersice3
boolean listSwapElements(List* list, unsigned int aIndex, unsigned int bIndex) {
	printf("Initialized swap sequence...\nSwapping element %i with %i\n", aIndex, bIndex);
	if (aIndex == bIndex) {
		printf("Error cannot change position with itself\n");
		return FALSE;
	}
	//check if both elements exist
	if ((listGetElementAtIndex(list, aIndex) == NULL) || (listGetElementAtIndex(list, bIndex) == NULL)) {
		printf("got null pointer --> one element doesn't exist");
		return FALSE;
	}
	//Werte auslesen und tauschen
	int temp = listGetElementAtIndex(list, aIndex)->value;
	//printf("temp = %i\n", temp);//debug
	listGetElementAtIndex(list, aIndex)->value = listGetElementAtIndex(list, bIndex)->value;
	listGetElementAtIndex(list, bIndex)->value = temp;
	return TRUE;
}

boolean listDeleteElement(List* list, unsigned int value) {
	int elempos = listGetIndexOfElement(list, value);
	if (elempos == -1) return FALSE;
	if (elempos ==0) {
		free (listPop(list));
		return TRUE;
	}
	Element* elemptr = listGetElementAtIndex(list, elempos);
	//Element* preelemptr = listGetElementAtIndex(list, (elempos - 1));
	Element* postelemptr = listGetElementAtIndex(list, (elempos + 1));
	printf("%p, %p \n", elemptr, postelemptr);
	free(elemptr);
	listGetElementAtIndex(list, (elempos - 1))->pSuccessor = postelemptr;

	return TRUE;
}
