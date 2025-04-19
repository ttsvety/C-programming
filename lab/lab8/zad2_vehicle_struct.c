#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Vehicle{
    int speed;
    char color[10];
    int year;
};

struct Vehicle_type{
    struct Vehicle vehicle;
    char model[30];
};

int main(){
    struct Vehicle_type car, motor, boat, plane;

    //Car
    strcpy(car.vehicle.color, "green");
    car.vehicle.speed = 250;
    car.vehicle.year = 1999;
    strcpy(car.model, "BMW");

    //Motor
    strcpy(motor.vehicle.color, "red");
    motor.vehicle.speed = 100;
    motor.vehicle.year = 1990;
    strcpy(motor.model, "Crossroad");


    strcpy(boat.vehicle.color, "white");
    boat.vehicle.speed = 50;
    boat.vehicle.year = 1998;
    strcpy(boat.model, "Sea");

    strcpy(plane.vehicle.color, "blue");
    plane.vehicle.speed = 200;
    plane.vehicle.year = 2010;
    strcpy(plane.model, "WizzAir");

    int temp = car.vehicle.year;

    if(motor.vehicle.year > temp){
        temp = motor.vehicle.year;
    }
    if(boat.vehicle.year > temp){
        temp = boat.vehicle.year;
    }
    if(plane.vehicle.year > temp){
        temp = plane.vehicle.year;
    }

   
    printf("The newest: %d", temp);

    return 0;
}