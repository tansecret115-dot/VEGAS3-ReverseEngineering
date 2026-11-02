/* Module: pngu3266.dll
   Function: ~XPNTimer
   Address: 60611ed1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual __thiscall XPNTimer::~XPNTimer(void) */

void __thiscall XPNTimer::~XPNTimer(XPNTimer *this)

{
                    /* 0x21ed1  422  ??1XPNTimer@@MAE@XZ */
  *(undefined ***)(this + -4) = &_vftable__for__IRMACallback__;
  *(undefined ***)this = &_vftable__for__CPNObject__;
  if (*(undefined4 **)(this + 0x20) != (undefined4 *)0x0) {
    **(undefined4 **)(this + 0x20) = 0;
  }
  CPNObject::~CPNObject((CPNObject *)(-(uint)(this + -4 != (XPNTimer *)0x0) & (uint)this));
  return;
}


