#include "DataFlowCodeRuntime.hpp"
#include "DataFlowCodeGUI_ext.hpp"

DataFlowCodeRuntime::DataFlowCodeRuntime()
{
}

void DataFlowCodeRuntime::SetGUI(std::shared_ptr<DataFlowCodeGUI> ptr)
{
    dfcGUIptr_ = ptr;
}

void DataFlowCodeRuntime::Message(std::string msg)
{
    if (dfcGUIptr_)
    {
        dfcGUIptr_->GetConsole()->Message(msg);
    }
}

void DataFlowCodeRuntime::StartRuntime()
{
    Message("Starting DFC Runtime...");
    Message("DFC Runtime Started.");
}