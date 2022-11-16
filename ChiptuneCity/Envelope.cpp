#include "Envelope.h"

namespace ChiptuneCity
{
    double Envelope::getAttack()
    {
        return this->mAttack;
    }

    double Envelope::getDelay()
    {
        return this->mDelay;
    }

    double Envelope::getSustain()
    {
        return this->mSustain;
    }

    double Envelope::getRelease()
    {
        return this->mRelease;
    }

    void Envelope::setAttack(double newAttack)
    {
        this->mAttack = newAttack;
    }

    void Envelope::setDelay(double newDelay)
    {
        this->mDelay = newDelay;
    }

    void Envelope::setSustain(double newSustain)
    {
        this->mSustain = newSustain;
    }

    void Envelope::setRelease(double newRelease)
    {
        this->mRelease = newRelease;
    }
}