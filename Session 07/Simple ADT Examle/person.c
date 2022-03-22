#include "person.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct person {
	char name[30];
	car_t ownCar[10];
	car_t drivenCar;
	int ownCarIndex;
} person_st;

/* ---------------------------------------------------------------- */
person_t person_create(char* name) {
	person_t _newPerson = calloc(sizeof(person_st), 1);
	strncpy(_newPerson->name, name, sizeof(_newPerson->name) - 1);
	return _newPerson;
}

/* ---------------------------------------------------------------- */
void person_startDrive(person_t self, car_t car) {
	car_start(car);
	self->drivenCar = car;
}

/* ---------------------------------------------------------------- */
void person_stopDriving(person_t self) {
	car_stop(self->drivenCar);
	self->drivenCar = NULL;
}

/* ---------------------------------------------------------------- */
car_t person_addNewCar(person_t self, int hp, char* brand, char* model) {
	car_t _newCar = NULL;
	if (sizeof(self->ownCar) / sizeof(car_t) > self->ownCarIndex) { // Are there room for more cars?
		_newCar = car_create(hp, brand, model);
		if (NULL != _newCar) { // A new car is created
			self->ownCar[self->ownCarIndex++] = _newCar;
		}
	}

	return _newCar;
}

/* ---------------------------------------------------------------- */
void person_showOwnCars(person_t self) {
	for (int i = 0; i < self->ownCarIndex; i++) {
		printf("Brand: %s, Model: %s, HP: %d, State: %s\n",
			car_getBrand(self->ownCar[i]),
			car_getModel(self->ownCar[i]),
			car_getHp(self->ownCar[i]),
			(car_isStarted(self->ownCar[i]) ? "Started!" : "Stopped!")
			);
	}
}