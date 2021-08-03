#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "main.h"

extern ADC_HandleTypeDef hadc1;
extern ADC_HandleTypeDef hadc2;
extern int adc_value;

Model::Model() : modelListener(0)
{

}

void Model::tick()
{	
	uint8_t GPIO_PH9 = HAL_GPIO_ReadPin(GPIOH,GPIO_PIN_9);
	
	if(GPIO_PH9 == 1) HAL_GPIO_WritePin(GPIOC,GPIO_PIN_13,GPIO_PIN_SET);
	else HAL_GPIO_WritePin(GPIOC,GPIO_PIN_13,GPIO_PIN_RESET);
	modelListener ->toggle_icon(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_13));
	

  HAL_ADC_Start(&hadc2);
  HAL_ADC_PollForConversion(&hadc2,10);	
  adc_value = HAL_ADC_GetValue(&hadc2);
	adc_value = adc_value*(3.3/40960);
  HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_1);
  HAL_Delay(100);
	modelListener -> get_adc(adc_value);
	
}
