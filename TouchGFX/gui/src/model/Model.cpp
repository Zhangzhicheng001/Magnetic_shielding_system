#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "main.h"

extern ADC_HandleTypeDef hadc1;
extern ADC_HandleTypeDef hadc2;
extern int32_t adc_value;

extern int i, j;
extern int32_t filter_temp, filter_sum ;
extern int32_t FILTER_N ;
extern int32_t filter_buf[];


Model::Model() : modelListener(0)
{

}

void Model::tick()
{	
	uint8_t GPIO_PH9 = HAL_GPIO_ReadPin(GPIOH,GPIO_PIN_9);
	
	
	if(GPIO_PH9 == 1) HAL_GPIO_WritePin(GPIOC,GPIO_PIN_13,GPIO_PIN_SET);
	else HAL_GPIO_WritePin(GPIOC,GPIO_PIN_13,GPIO_PIN_RESET);
	modelListener ->toggle_icon(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_13));
	

	
	//
	for(i = 0; i < FILTER_N; i++) {
    HAL_ADC_Start(&hadc1);
		HAL_ADC_PollForConversion(&hadc1,10);	
		filter_buf[i] = (HAL_ADC_GetValue(&hadc1)/20);
		HAL_Delay(2);	
  }

	for(j = 0; j < FILTER_N - 1; j++) {
    for(i = 0; i < FILTER_N - 1 - j; i++) {
      if(filter_buf[i] > filter_buf[i + 1]) {
        filter_temp = filter_buf[i];
        filter_buf[i] = filter_buf[i + 1];
        filter_buf[i + 1] = filter_temp;
      }
    }
	}
		
	for(i = 5; i < FILTER_N - 5; i++) filter_sum += filter_buf[i];
	
	//
	
	adc_value = filter_sum / (FILTER_N - 10);	  
	//HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_6);
	HAL_Delay(10);	
	adc_value = -2000;
	modelListener -> get_adc(adc_value);
	filter_sum = 0;
	ITM_SendChar('A');
	
}
