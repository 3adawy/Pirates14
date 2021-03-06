#ifndef ADC_H_
#define ADC_H_

#include <stdint.h>
#include "MemMap.h"
#include "MotorInit.h"

extern uint32_t ADC0Value[8] ;
extern uint32_t SHARP[1] ;

extern uint32_t IR[3] ;
extern uint32_t V_L[2] ;
extern int sensor_lifter1 , sensor_lifter3;
extern int ls1 ,ls2 , ls3 ,ls4 ,ls5 ,ls6 ,ls7 ,ls8;
extern int VL ;
extern uint32_t V1,V2,V3,V4,V5,V6,V7,V8;
extern uint32_t previous[8];

void calibration();
void init_adc();
void data_get_ss0 (uint32_t *pt , int i );
void data_get_ss1 (uint32_t *pt , int i );
void digital_reads(uint32_t *ADC );
void line ();
void VerticalLines();



#endif
