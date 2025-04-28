//pide el peso de un paquete y cobra $5 si pesa hasta 5kg y pide $10 si pesa entre 6kg o 10 kg y 15 si el peso es de 10 a 15kg


#include <iostream> 

using namespace std;

int main (){

int weight;

cout <<"what is the weight of the package"<< endl;
cin >>weight ;

if (weight <= 5) {
cout <<"your total is $5"<< endl;
}

else if (weight <= 10){
cout <<"your total is $10"<< endl;
}

else if (weight <= 15){
cout <<"your total is $15"<< endl;
}

else if (weight -5){
cout <<"the minimum you can purchase is 5kg"<< endl;
}

else if (weight >15){
cout <<"the max a person can purchsse is 15kg"<< endl;
}

else {

}




    return 0;
}

