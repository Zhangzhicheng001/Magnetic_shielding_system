#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "main.h"

Model::Model() : modelListener(0)
{

}

void Model::tick()
{	
	uint8_t GPIO_PH9 = HAL_GPIO_ReadPin(GPIOH,GPIO_PIN_9);
	
	if(GPIO_PH9 == 1) HAL_GPIO_WritePin(GPIOC,GPIO_PIN_13,GPIO_PIN_SET);
	else HAL_GPIO_WritePin(GPIOC,GPIO_PIN_13,GPIO_PIN_RESET);
	
	modelListener ->toggle_icon(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_13));
	
}
