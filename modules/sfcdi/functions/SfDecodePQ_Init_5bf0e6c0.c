/* Module: sfcdi.dll
   Function: SfDecodePQ_Init
   Address: 5bf0e6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfDecodePQ_Init(struct SFPQdecodetag *,unsigned long) */

void SfDecodePQ_Init(SFPQdecodetag *param_1,ulong param_2)

{
  int iVar1;
  SFPQdecodetag *pSVar2;
  
  pSVar2 = param_1;
                    /* 0xe6c0  81  ?SfDecodePQ_Init@@YGXPAUSFPQdecodetag@@K@Z */
  for (iVar1 = 0x25; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pSVar2 = 0;
    pSVar2 = pSVar2 + 4;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(ulong *)param_1 = param_2;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}


