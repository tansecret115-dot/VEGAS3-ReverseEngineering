/* Module: vegas30k.dll
   Function: FUN_011a2450
   Address: 011a2450
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011a2450(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 1;
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = FUN_011b28f0(param_3);
    return iVar1;
  }
  if (*(int **)(param_1 + 0x438) == (int *)0x0) {
    param_1 = 0;
  }
  else {
    param_1 = **(int **)(param_1 + 0x438);
  }
  if (0 < param_1) {
    while (iVar1 = FUN_011b2700(param_2), iVar1 != 0) {
      iVar2 = iVar2 + 1;
      if (param_1 <= iVar2) {
        return iVar1;
      }
    }
    iVar1 = FUN_011b28f0(param_3);
  }
  return iVar1;
}


