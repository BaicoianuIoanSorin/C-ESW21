#include "car.h"
#include "person.h"

int main(void) {
	car_t car;

	person_t me = person_create("Ib");
	person_addNewCar(me, 190, "Mercedes", "C220 CDI T");
	person_addNewCar(me, 195, "Volvo", "V60");
	car = person_addNewCar(me, 55, "Skoda", "Fabia");
	person_startDrive(me, car);

	person_showOwnCars(me);
}