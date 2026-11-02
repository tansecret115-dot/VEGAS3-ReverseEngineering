/* Module: erv23260.dll
   Function: FUN_63811800
   Address: 63811800
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_63811800(int param_1)

{
  int iVar1;
  SIZE_T SVar2;
  SIZE_T SVar3;
  
  iVar1 = *(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x14);
  SVar3 = iVar1 * 0x400 + 0x17ff;
  SVar2 = iVar1 * 0x200 + 0x13ff;
  iVar1 = FUN_63817980((void *)(param_1 + 0x520),*(int *)(param_1 + 0x14) * 0x400 + SVar3,3);
  if (iVar1 == 0) {
    iVar1 = FUN_63817980((void *)(param_1 + 0x52c),SVar2,3);
    if (iVar1 == 0) {
      iVar1 = FUN_63817980((void *)(param_1 + 0x540),SVar3,2);
      if (iVar1 == 0) {
        FUN_63817980((void *)(param_1 + 0x54c),SVar2,2);
      }
    }
  }
  return;
}


