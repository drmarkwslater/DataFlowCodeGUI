#ifndef DATAFLOWCODEGUI_HPP
#define DATAFLOWCODEGUI_HPP

#include "olcPixelGameEngine.h"
#include "ConsoleOutputWindow.hpp"

class DataFlowCodeGUI : public olc::PixelGameEngine
{
public:
    DataFlowCodeGUI();

    bool OnUserCreate() override;
    bool OnUserUpdate(const float fElapsedTime) override;

    void StartDFCRuntime();

private:
    ConsoleOutputWindow consoleOutput_;

    void DrawWindowBorders();
};

#endif