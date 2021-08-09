#include <gui/main_screen/MainView.hpp>
#include <math.h>
#include <stdlib.h>

MainView::MainView()
{
    tickCounter = 0;
}

void MainView::setupScreen()
{
    MainViewBase::setupScreen();
		
    // Initialize graph range with default slider value at start up
    
}

void MainView::tearDownScreen()
{
    MainViewBase::tearDownScreen();
}

void MainView::handleTickEvent()
{
    tickCounter++;
/*
    // Insert each second tick
    if (tickCounter % 2 == 0)
    {
        float yMax = graph.getGraphRangeYMaxAsFloat();
        // Insert "random" points along a sine wave
        //graph.addDataPoint((int)((sinf(tickCounter * .02f) + 1) * (yMax / 2.2f)) + rand() % (int)(yMax / 10.f));		
    }
	*/
	if (tickCounter % 2 == 0)
    {
        float yMax = graph.getGraphRangeYMaxAsFloat();
        graph.addDataPoint(get_adc(adc_value));	
				//graph.addDataPoint(-500);	
    }
}

void MainView::sliderValueChanged(int value)
{
    
}

void MainView::toggle_icon(uint8_t value)
{
	
}

int16_t MainView::get_adc(int16_t value)
{
	adc_value = value;
}
