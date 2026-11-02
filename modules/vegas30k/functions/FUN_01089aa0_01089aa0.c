/* Module: vegas30k.dll
   Function: FUN_01089aa0
   Address: 01089aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01089aa0(int param_1,tagVTSM_C_ADTI *param_2)

{
  int iVar1;
  ushort uVar2;
  tagVTSM_CPI *ptVar3;
  ushort uVar4;
  
  SfCdiSwap_VTSM_C_ADTI(param_2);
  ptVar3 = (tagVTSM_CPI *)(param_2 + 8);
  uVar2 = 0;
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)param_2;
  uVar4 = (ushort)((*(int *)(param_2 + 4) - 7U) / 0xc);
  if (uVar4 == 0) {
    iVar1 = 0;
  }
  else {
    while( true ) {
      SfCdiSwap_VTSM_CPI(ptVar3);
      iVar1 = _SfList_AllocAndInsertItem_20(*(undefined4 *)(param_1 + 0x20),ptVar3,0xc,0xffffffff,0)
      ;
      if (iVar1 < 0) break;
      uVar2 = uVar2 + 1;
      ptVar3 = ptVar3 + 0xc;
      if (uVar4 <= uVar2) {
        return iVar1;
      }
    }
  }
  return iVar1;
}


