//criação da blioteca principal
#ifndef Sensor_H
#define Sensor_H
//Inclução das bibliotecas de composição
#include <stdio.h>
#include "driver/gpio.h"

void config_botao(void);
//configurÇõ em pull down
#define botao_pull_down


Void acionamento(int pino);
//coluna col
#define pino_Col_1 GPIO_NUM_5
#define pino_Col_2 GPIO_NUM_4
#define pino_col_3 GPIO_NUM_3
// coluna row
#define pino_Row_1 GPIO_NUM_8
#define pino_Row_2 GPIO_NUM_9
#define pino_row_3 GPIO_NUM_10

#endif
