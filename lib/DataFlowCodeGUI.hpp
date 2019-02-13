#ifndef DATAFLOWCODEGUI_HPP
#define DATAFLOWCODEGUI_HPP

#include "olcPixelGameEngine.h"

class DataFlowCodeGUI : public olc::PixelGameEngine
{
public:
    DataFlowCodeGUI();

public:
    bool OnUserCreate() override;
    bool OnUserUpdate(float fElapsedTime) override;
};

#endif