/* Module: pngu3266.dll
   Function: XPNTipManager
   Address: 60615821
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNTipManager::XPNTipManager(class CPNWindow *) */

XPNTipManager * __thiscall XPNTipManager::XPNTipManager(XPNTipManager *this,CPNWindow *param_1)

{
                    /* 0x25821  285  ??0XPNTipManager@@IAE@PAVCPNWindow@@@Z */
  CPNRouter::CPNRouter((CPNRouter *)this);
  *(undefined4 *)(this + 8) = 0;
  *(CPNWindow **)(this + 0xc) = param_1;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined ***)this = &_vftable_;
  if (((byte)param_1[9] & 0x80) != 0) {
    CPNRouter::AddObserver((CPNRouter *)param_1,(CPNRouter *)this,0x10,0);
  }
  return this;
}


