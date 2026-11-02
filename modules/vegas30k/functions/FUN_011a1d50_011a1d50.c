/* Module: vegas30k.dll
   Function: FUN_011a1d50
   Address: 011a1d50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011a1d50(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_1;
  iVar4 = 0;
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
    iVar1 = *(int *)(*(int *)(*(int *)(iVar2 + 0x438) + 8) + iVar4 * 4);
    iVar3 = FUN_011b2700(param_2);
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + 0xc7c) = param_3;
      return 0;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < param_1);
  return iVar3;
}


