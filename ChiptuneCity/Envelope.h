#pragma once

namespace ChiptuneCity
{
    class Envelope
    {
        public:
        double getAttack();
        double getDelay();
        double getSustain();
        double getRelease();

        void setAttack(double newAttack);
        void setDelay(double newDelay);
        void setSustain(double newSustain);
        void setRelease(double newRelease);

        private:
        double mAttack;
        double mDelay;
        double mSustain;
        double mRelease;
    }
}