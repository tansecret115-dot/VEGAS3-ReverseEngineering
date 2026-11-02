/* Module: g2plug.dll
   Function: CG2EncodeWizard
   Address: 5f80bd30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CG2EncodeWizard::CG2EncodeWizard(class CG2EncodeWizard const &) */

void __thiscall CG2EncodeWizard::CG2EncodeWizard(CG2EncodeWizard *this,CG2EncodeWizard *param_1)

{
  CG2EncodeWizard *pCVar1;
  CG2EncodeWizard *pCVar2;
  int iVar3;
  CG2EncodeWizard *pCVar4;
  CG2EncodeWizard *pCVar5;
  
  iVar3 = 0x19c;
  pCVar1 = param_1;
  pCVar2 = this;
  while( true ) {
    pCVar5 = pCVar2 + 4;
    pCVar4 = pCVar1 + 4;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    *(undefined4 *)pCVar5 = *(undefined4 *)pCVar4;
    pCVar1 = pCVar4;
    pCVar2 = pCVar5;
  }
  *(undefined2 *)pCVar5 = *(undefined2 *)pCVar4;
  pCVar2[6] = pCVar1[6];
  *(undefined4 *)(this + 0x678) = *(undefined4 *)(param_1 + 0x678);
  *(undefined4 *)(this + 0x67c) = *(undefined4 *)(param_1 + 0x67c);
  *(undefined4 *)(this + 0x680) = *(undefined4 *)(param_1 + 0x680);
  *(undefined4 *)(this + 0x684) = *(undefined4 *)(param_1 + 0x684);
  *(undefined4 *)(this + 0x688) = *(undefined4 *)(param_1 + 0x688);
  *(undefined4 *)(this + 0x68c) = *(undefined4 *)(param_1 + 0x68c);
  *(undefined ***)this = &_vftable_;
  return;
}


