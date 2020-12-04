#pragma once

struct Element {
	unsigned int value;
	void* pSuccessor;
};

typedef struct Element Element;
//Element* elementCreate();

Element* elementCreate() {
	Element* newelem = malloc(sizeof(Element));
	newelem->value = 0;
	newelem->pSuccessor = NULL;
	return newelem;
}