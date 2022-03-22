#include "car.h"

void useCar(void) {
	car_t myCar;

	myCar = car_create(195, "Volvo", "V50");

	car_start(myCar);
	car_stop(myCar);
}