/* Module: pngu3266.dll
   Function: XPNTimer
   Address: 60611e95
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNTimer::XPNTimer(void) */

XPNTimer * __thiscall XPNTimer::XPNTimer(XPNTimer *this)

{
                    /* 0x21e95  283  ??0XPNTimer@@IAE@XZ */
  *(undefined ***)this = &PTR_LAB_606249b8;
  CPNObject::CPNObject((CPNObject *)(this + 4));
  *(undefined ***)(this + 4) = &_vftable__for__CPNObject__;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined ***)this = &_vftable__for__IRMACallback__;
  return this;
}


