// Safe inclusion of the main GUI app otherwise you'd get a lot of multiple definitions of OLC stuff

#ifdef OLC_PGE_APPLICATION
#undef OLC_PGE_APPLICATION
#endif

#include "DataFlowCodeGUI.hpp"
