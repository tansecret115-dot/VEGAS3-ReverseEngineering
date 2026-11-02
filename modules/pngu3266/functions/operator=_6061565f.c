/* Module: pngu3266.dll
   Function: operator=
   Address: 6061565f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNRadioGroup & __thiscall CPNRadioGroup::operator=(class CPNRadioGroup const &) */

CPNRadioGroup * __thiscall CPNRadioGroup::operator=(CPNRadioGroup *this,CPNRadioGroup *param_1)

{
  int iVar1;
  CPNRadioGroup *pCVar2;
  CPNRadioGroup *pCVar3;
  
                    /* 0x2565f  485  ??4CPNRadioGroup@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  pCVar2 = param_1 + 8;
  pCVar3 = this + 8;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar3 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    pCVar3 = pCVar3 + 4;
  }
  return this;
}


