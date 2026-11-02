/* Module: sfcdi.dll
   Function: FUN_5bf18ab0
   Address: 5bf18ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf18ab0(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x4c + *(int *)(param_1 + 0x40) * 0x28;
  if (*(int *)(iVar1 + 0x14) != 0) {
    iVar1 = FUN_5bf18aa0(iVar1);
    return iVar1;
  }
  return 0;
}


