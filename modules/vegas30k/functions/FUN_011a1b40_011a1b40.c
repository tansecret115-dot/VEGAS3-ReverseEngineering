/* Module: vegas30k.dll
   Function: FUN_011a1b40
   Address: 011a1b40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_011a1b40(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = param_1;
  iVar3 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    *param_3 = 0;
    return (undefined4 *)0x1;
  }
  if (*(int **)(param_1 + 0x438) == (int *)0x0) {
    param_1 = 0;
  }
  else {
    param_1 = **(int **)(param_1 + 0x438);
  }
  if (param_1 < 1) {
    return param_3;
  }
  do {
    puVar2 = (undefined4 *)FUN_011b2700(param_2);
    if (puVar2 == (undefined4 *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x414));
      puVar2 = (undefined4 *)FUN_011b42e0(param_3,1);
      LeaveCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x414));
      return puVar2;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < param_1);
  return puVar2;
}


