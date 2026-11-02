/* Module: vegas30k.dll
   Function: FUN_011a1e70
   Address: 011a1e70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011a1e70(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    FUN_011b1ba0(param_3,1);
    return;
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
        return;
      }
    }
    FUN_011b1ba0(param_3,0);
  }
  return;
}


