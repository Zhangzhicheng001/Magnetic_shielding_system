#include <gui/main_screen/MainView.hpp>
#include <gui/main_screen/MainPresenter.hpp>

MainPresenter::MainPresenter(MainView& v)
    : view(v)
{

}

void MainPresenter::activate()
{

}

void MainPresenter::deactivate()
{

}

void MainPresenter::toggle_icon(uint8_t value)
{
	view.toggle_icon(value);

}

void MainPresenter::get_adc(uint16_t value)
{
	view.get_adc(value);

}