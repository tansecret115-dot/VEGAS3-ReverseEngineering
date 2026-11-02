/* Module: vegas30k.dll
   Function: FUN_011a1de0
   Address: 011a1de0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011a1de0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    return 1;
  }
  if (*(int **)(param_1 + 0x438) == (int *)0x0) {
    param_1 = 0;
  }
  else {
    param_1 = **(int **)(param_1 + 0x438);
  }
  if (param_1 < 1) {
    return param_1;
  }
  do {
    iVar1 = FUN_011b2700(param_2);
    if (iVar1 == 0) {
      iVar2 = FUN_011b4440(param_3,param_4);
      return iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < param_1);
  return iVar1;
}


