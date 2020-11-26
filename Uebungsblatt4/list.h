#pragma once

struct List {
	struct Element* head; //Pointer to head
};

typedef struct List List;

//exersice 1
List* listCreate();
void listPush(List* list);
Element* listPop(List* list);
void listPrint(List* list);

//exersice2
Element* listFindElement(List* list, unsigned int value);
int listGetIndexOfElement(List* list, unsigned int value);
Element* listGetElementAtIndex(List* list, unsigned int index);

//exersice3
boolean listSwapElements(List* list, unsigned int aIndex, unsigned int bIndex);
boolean listDeleteElement(List* list, unsigned int value);

