#include <memory>
#include <thread>

#include "DataFlowCodeGUI.hpp"

int main()
{
    std::shared_ptr<DataFlowCodeGUI> gui_ptr = std::make_shared<DataFlowCodeGUI>();
    std::shared_ptr<DataFlowCodeRuntime> rt_ptr = std::make_shared<DataFlowCodeRuntime>();
    gui_ptr->SetDFCRuntime(rt_ptr);
    rt_ptr->SetGUI(gui_ptr);
    
    if (gui_ptr->Construct(800, 300, 2, 2))
    {
        std::thread rt_thread = std::thread(&DataFlowCodeRuntime::StartRuntime, rt_ptr);
        gui_ptr->Start();
        rt_thread.join();
    }

    return 0;
}
