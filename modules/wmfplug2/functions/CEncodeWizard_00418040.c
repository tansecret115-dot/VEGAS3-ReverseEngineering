/* Module: wmfplug2.dll
   Function: CEncodeWizard
   Address: 00418040
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CEncodeWizard::CEncodeWizard(class CEncodeWizard const &) */

void __thiscall CEncodeWizard::CEncodeWizard(CEncodeWizard *this,CEncodeWizard *param_1)

{
  int iVar1;
  CEncodeWizard *pCVar2;
  CEncodeWizard *pCVar3;
  
                    /* 0x18040  1  ??0CEncodeWizard@@QAE@ABV0@@Z */
  pCVar2 = param_1 + 8;
  pCVar3 = this + 8;
  for (iVar1 = 0x23e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar3 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    pCVar3 = pCVar3 + 4;
  }
  *(undefined4 *)(this + 0x900) = *(undefined4 *)(param_1 + 0x900);
  *(undefined4 *)(this + 0x904) = *(undefined4 *)(param_1 + 0x904);
  *(undefined4 *)(this + 0x908) = *(undefined4 *)(param_1 + 0x908);
  *(undefined4 *)(this + 0x90c) = *(undefined4 *)(param_1 + 0x90c);
  *(undefined4 *)(this + 0x910) = *(undefined4 *)(param_1 + 0x910);
  *(undefined4 *)(this + 0x914) = *(undefined4 *)(param_1 + 0x914);
  *(undefined4 *)(this + 0x918) = *(undefined4 *)(param_1 + 0x918);
  *(undefined ***)this = &_vftable_;
  return;
}


