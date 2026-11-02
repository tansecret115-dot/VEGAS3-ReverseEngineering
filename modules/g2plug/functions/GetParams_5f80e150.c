/* Module: g2plug.dll
   Function: GetParams
   Address: 5f80e150
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CG2EncodeWizard::GetParams(struct SFG2_PARAMS *) */

void __thiscall CG2EncodeWizard::GetParams(CG2EncodeWizard *this,SFG2_PARAMS *param_1)

{
  int iVar1;
  CG2EncodeWizard *pCVar2;
  
  for (iVar1 = 0x19c; pCVar2 = this + 4, iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)param_1 = *(undefined4 *)pCVar2;
    param_1 = param_1 + 4;
    this = pCVar2;
  }
  *(undefined2 *)param_1 = *(undefined2 *)pCVar2;
  *(CG2EncodeWizard *)(param_1 + 2) = this[6];
  return;
}


