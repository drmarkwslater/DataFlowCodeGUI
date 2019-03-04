#ifndef DATAFLOWCODEGUI_HPP
#define DATAFLOWCODEGUI_HPP

#include <thread>

#include "olcPixelGameEngine.h"
#include "ConsoleOutputWindow.hpp"
#include "DataFlowCodeRuntime.hpp"

class DataFlowCodeGUI : public olc::PixelGameEngine
{
private:
    ConsoleOutputWindow consoleOutput_;
    std::shared_ptr<DataFlowCodeRuntime> dfcRuntime_;
    
    void DrawWindowBorders();

public:
    DataFlowCodeGUI();

    bool OnUserCreate() override;
    bool OnUserUpdate(const float fElapsedTime) override;

    void SetDFCRuntime(std::shared_ptr<DataFlowCodeRuntime> ptr);

    ConsoleOutputWindow *GetConsole() {return &consoleOutput_;}
};

#endif