#pragma once

#include "../Envelope.h"

namespace ChiptuneCity
{
    class Instrument
    {
        public:
        Envelope& getEnvelope();

        private:
        Envelope mEnvelope;
    }
}