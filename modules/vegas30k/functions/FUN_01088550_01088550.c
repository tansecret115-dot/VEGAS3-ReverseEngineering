/* Module: vegas30k.dll
   Function: FUN_01088550
   Address: 01088550
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01088550(int param_1,tagVMGM_C_ADTI *param_2)

{
  int iVar1;
  ushort uVar2;
  tagVMGM_CPI *ptVar3;
  ushort uVar4;
  
  SfCdiSwap_VMGM_C_ADTI(param_2);
  ptVar3 = (tagVMGM_CPI *)(param_2 + 8);
  uVar2 = 0;
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)param_2;
  uVar4 = (ushort)((*(int *)(param_2 + 4) - 7U) / 0xc);
  if (uVar4 == 0) {
    iVar1 = 0;
  }
  else {
    while( true ) {
      SfCdiSwap_VMGM_CPI(ptVar3);
      iVar1 = _SfList_AllocAndInsertItem_20(*(undefined4 *)(param_1 + 0x38),ptVar3,0xc,0xffffffff,0)
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


