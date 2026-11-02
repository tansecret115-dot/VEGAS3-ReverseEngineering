/* Module: pngu3266.dll
   Function: CPNRadioGroup
   Address: 60615635
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNRadioGroup::CPNRadioGroup(class CPNRadioGroup const &) */

void __thiscall CPNRadioGroup::CPNRadioGroup(CPNRadioGroup *this,CPNRadioGroup *param_1)

{
  int iVar1;
  CPNRadioGroup *pCVar2;
  CPNRadioGroup *pCVar3;
  
                    /* 0x25635  125  ??0CPNRadioGroup@@QAE@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &CPNRouter::_vftable_;
  pCVar2 = param_1 + 8;
  pCVar3 = this + 8;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar3 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    pCVar3 = pCVar3 + 4;
  }
  *(undefined ***)this = &_vftable_;
  return;
}


