/* Module: pngu3266.dll
   Function: ~CPNTipManager
   Address: 60604511
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNTipManager::~CPNTipManager(void) */

void __thiscall CPNTipManager::~CPNTipManager(CPNTipManager *this)

{
                    /* 0x14511  369  ??1CPNTipManager@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  RemoveAllToolTips(this);
  XPNTipManager::~XPNTipManager((XPNTipManager *)this);
  return;
}


