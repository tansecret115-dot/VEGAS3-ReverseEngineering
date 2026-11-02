/* Module: pngu3266.dll
   Function: CPNTipManager
   Address: 606044f9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNTipManager::CPNTipManager(class CPNWindow *) */

CPNTipManager * __thiscall CPNTipManager::CPNTipManager(CPNTipManager *this,CPNWindow *param_1)

{
                    /* 0x144f9  154  ??0CPNTipManager@@QAE@PAVCPNWindow@@@Z */
  XPNTipManager::XPNTipManager((XPNTipManager *)this,param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}


