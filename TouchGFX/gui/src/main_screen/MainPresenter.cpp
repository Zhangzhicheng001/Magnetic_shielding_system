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

void MainPresenter::toggle_icon(int8_t value)
{
	view.toggle_icon(value);

}

void MainPresenter::get_adc(int16_t value)
{
	view.get_adc(value);

}