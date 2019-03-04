#ifndef DATAFLOWCODERUNTIME_HPP
#define DATAFLOWCODERUNTIME_HPP

#include <memory>
#include <string>

class DataFlowCodeGUI;

class DataFlowCodeRuntime 
{
private:
    std::shared_ptr<DataFlowCodeGUI> dfcGUIptr_;
    
public:
    DataFlowCodeRuntime();
    void SetGUI(std::shared_ptr<DataFlowCodeGUI> ptr);
    void StartRuntime();
    void Message(std::string msg);
};

#endif
