#include "DataFlowCodeGUI.hpp"

DataFlowCodeGUI::DataFlowCodeGUI()
{
    sAppName = "DataFlowCodeGUI";
}

void DataFlowCodeGUI::SetDFCRuntime(std::shared_ptr<DataFlowCodeRuntime> ptr)
{
    dfcRuntime_ = ptr;
}

bool DataFlowCodeGUI::OnUserCreate()
{
    // Called once at the start, so create things here
    return true;
}

bool DataFlowCodeGUI::OnUserUpdate(float /*fElapsedTime*/)
{
    // Draw borders
    DrawWindowBorders();
    
    // Draw text
    DrawString(1, 1 + ScreenHeight() * 2/3, consoleOutput_.GetTextBuffer(ScreenWidth() / 8 - 2, ScreenHeight() - 2 / (3*8)));

    return true;
}

void DataFlowCodeGUI::DrawWindowBorders()
{
    // Do borders for debug and output windows
    for (int x = 0; x < ScreenWidth(); x++) 
    {
        Draw(x, 0);
        Draw(x, ScreenHeight() - 1);
    }

    for (int y = 0; y < ScreenHeight(); y++) 
    {
        Draw(ScreenWidth() / 2, y);
    }

    for (int x = 0; x < ScreenWidth()/2; x++) 
    {
        Draw(x, ScreenHeight() * 2/3);
    }
}