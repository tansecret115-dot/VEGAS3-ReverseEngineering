/* Module: pngu3266.dll
   Function: operator=
   Address: 605f27f1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNTipManager & __thiscall CPNTipManager::operator=(class CPNTipManager const &) */

CPNTipManager * __thiscall CPNTipManager::operator=(CPNTipManager *this,CPNTipManager *param_1)

{
                    /* 0x27f1  499  ??4CPNTipManager@@QAEAAV0@ABV0@@Z */
  XPNTipManager::operator=((XPNTipManager *)this,(XPNTipManager *)param_1);
  return this;
}


