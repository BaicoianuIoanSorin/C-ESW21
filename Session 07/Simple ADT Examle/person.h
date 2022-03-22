#pragma once
#include "car.h"

typedef struct person* person_t;
person_t person_create(char* name);
void person_startDrive(person_t self, car_t car);
void person_stopDriving(person_t self);
car_t person_addNewCar(person_t self, int hp, char* brand, char* model);
void person_showOwnCars(person_t self);