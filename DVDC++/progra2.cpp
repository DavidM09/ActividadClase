//pide la velocidad de un conductor segun el tipo de vehiculo que maneja si es un moto y supera los 60kmh se le da una multa de 100 si
//supera los 80kmh la multa sera mayor a $1000 si es una kia soul y supera los 70kmh se le aplica un amulta de $200 si supera los 90kmh la multa
//es de $1111 si es una 44 tuneada y supera los 80kmh multa de $1500 si supera los 100km la multa es mayor a $30000

#include <iostream>

using namespace std;

int main () {

   
    int kiasoul = 1;
    int topspeed1;
    int moto;
    int topspeed2;
    int coaster;
    int topspeed3;
    int car;

    cout <<"please insert the vehicle (kiasoul = 1, motorcycle = 2, coaster = 3)"<< endl;
    cin >> kiasoul, moto,  coaster;

    if ( kiasoul ){
        cout <<"please insert your top speed"<< endl;
        cin >>topspeed1;
    }
    else if (topspeed1 >= 70 && topspeed1 <89){
        cout <<"your ticket is $200"<< endl;
        }
        else if (topspeed1 >= 90){
        cout <<"your ticket is $1111"<< endl;
        }

    else if ( moto = 2 ){
        cout <<"please insert your top speed"<< endl;
        cin >>topspeed2 ;
    }
        else if (topspeed2 >= 60 && topspeed2 <80){
            cout <<"your ticket is $100"<< endl;
        }
            else if  (topspeed2 >= 80){
                cout <<"your ticket is $1000"<< endl;
    }
    else if ( coaster = 3 ){
        cout <<"please instert your top speed"<< endl;
        cin >>topspeed3 ;
    }
        else if (topspeed3 >= 80 && topspeed3<99){
            cout <<"your ticket is $1500"<<  endl;
        }
         else if( topspeed3 >= 100){
         cout <<"your ticket is $30000"<< endl;
        }
        else{

        }
    

    





        






    













    return 0;
    }