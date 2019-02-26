#include "DataFlowCodeGUI.hpp"

int main()
{
    DataFlowCodeGUI gui;
    if (gui.Construct(800, 300, 2, 2))
    {
        gui.StartDFCRuntime();
        gui.Start();
    }

    return 0;
}
