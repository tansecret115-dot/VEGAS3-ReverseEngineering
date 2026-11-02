/* Module: pngu3266.dll
   Function: ~XPNTipManager
   Address: 6061585c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNTipManager::~XPNTipManager(void) */

void __thiscall XPNTipManager::~XPNTipManager(XPNTipManager *this)

{
                    /* 0x2585c  423  ??1XPNTipManager@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  if (*(int *)(this + 8) != 0) {
    RemoveAllToolTips(this);
    if (*(undefined4 **)(this + 8) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 8))(1);
      *(undefined4 *)(this + 8) = 0;
    }
  }
  if (*(XPNTimer **)(this + 0x10) != (XPNTimer *)0x0) {
    XPNTimer::SetPending(*(XPNTimer **)(this + 0x10),0);
    *(undefined4 *)(this + 0x10) = 0;
  }
  if (*(XPNTimer **)(this + 0x14) != (XPNTimer *)0x0) {
    XPNTimer::SetPending(*(XPNTimer **)(this + 0x14),0);
    *(undefined4 *)(this + 0x14) = 0;
  }
  CPNRouter::~CPNRouter((CPNRouter *)this);
  return;
}


