#ifndef MODELLISTENER_HPP
#define MODELLISTENER_HPP

#include <gui/model/Model.hpp>
#include "main.h"

class ModelListener
{
public:
    ModelListener() : model(0) {}

    virtual ~ModelListener() {}

    void bind(Model* m)
    {
        model = m;
    }
		virtual void toggle_icon(int8_t value){};
		virtual void get_adc(int16_t value){};
protected:
    Model* model;
};

#endif // MODELLISTENER_HPP
