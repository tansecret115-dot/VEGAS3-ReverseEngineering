/* Module: pngu3266.dll
   Function: CPNTipManager
   Address: 605f27d9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNTipManager::CPNTipManager(class CPNTipManager const &) */

CPNTipManager * __thiscall CPNTipManager::CPNTipManager(CPNTipManager *this,CPNTipManager *param_1)

{
                    /* 0x27d9  153  ??0CPNTipManager@@QAE@ABV0@@Z */
  XPNTipManager::XPNTipManager((XPNTipManager *)this,(XPNTipManager *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}


