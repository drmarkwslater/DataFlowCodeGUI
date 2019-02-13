#include "DataFlowCodeGUI.hpp"

int main()
{
  DataFlowCodeGUI demo;
  if (demo.Construct(400, 300, 2, 2))
    demo.Start();
  return 0;
}
