/* Module: wmfplug2.dll
   Function: GetParams
   Address: 0041caf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CEncodeWizard::GetParams(struct SFASF3_PARAMS *) */

void __thiscall CEncodeWizard::GetParams(CEncodeWizard *this,SFASF3_PARAMS *param_1)

{
  int iVar1;
  CEncodeWizard *pCVar2;
  
                    /* 0x1caf0  8  ?GetParams@CEncodeWizard@@QAEXPAUSFASF3_PARAMS@@@Z */
  pCVar2 = this + 8;
  for (iVar1 = 0x23e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)param_1 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    param_1 = param_1 + 4;
  }
  return;
}


