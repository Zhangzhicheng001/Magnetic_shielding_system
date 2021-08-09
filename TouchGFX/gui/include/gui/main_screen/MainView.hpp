#ifndef MAINVIEW_HPP
#define MAINVIEW_HPP

#include <gui_generated/main_screen/MainViewBase.hpp>
#include <gui/main_screen/MainPresenter.hpp>

class MainView : public MainViewBase
{
public:
    MainView();
    virtual ~MainView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
		void toggle_icon(uint8_t value);
		int16_t get_adc(int16_t value);
		int16_t adc_value ;
protected:
    int tickCounter;

    void handleTickEvent();
    virtual void sliderValueChanged(int value);
};

#endif // MAINVIEW_HPP
