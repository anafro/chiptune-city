#include "ChiptuneCity/ChiptuneCity.h"

#ifndef WIN32
#   error Chiptune City cannot be used at not-Windows platforms!
#else

int main(int argc, char** argv)
{
    ChiptuneCity::ChiptuneCity chiptuneCity;
    chiptuneCity.start(argc, argv);

    return 0;
}

#endif // not defined WIN32