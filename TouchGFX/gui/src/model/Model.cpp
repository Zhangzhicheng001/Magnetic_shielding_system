#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "main.h"

extern ADC_HandleTypeDef hadc1;

Model::Model() : modelListener(0)
{

}

void Model::tick()
{	
	uint8_t GPIO_PH9 = HAL_GPIO_ReadPin(GPIOH,GPIO_PIN_9);
	
	if(GPIO_PH9 == 1) HAL_GPIO_WritePin(GPIOC,GPIO_PIN_13,GPIO_PIN_SET);
	else HAL_GPIO_WritePin(GPIOC,GPIO_PIN_13,GPIO_PIN_RESET);
	modelListener ->toggle_icon(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_13));
	
	
	uint16_t ADC1_NB = HAL_ADC_GetValue(&hadc1);
	modelListener -> get_adc(ADC1_NB+50);
	HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_6);
	//modelListener -> get_adc(50);
	printf("1");
	
}
