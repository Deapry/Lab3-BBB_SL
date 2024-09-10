#include <stdio.h>
#include <stdlib.h>


int main ()
{
    int Baro;
    int Gyro;


    Baro = system("./Lab3I2C_Baro_Check.sh");
    
    Gyro = system("./Lab3I2C_Gyro_Check.sh");


}