/* Module: vegas30k.dll
   Function: FUN_0114e640
   Address: 0114e640
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0114e640(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  iVar1 = **(int **)(param_1 + 0x44);
  if (0 < iVar1) {
    do {
      iVar2 = FUN_0114e580(param_2,param_3,
                           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x44) + 8) + iVar3 * 4));
      if (iVar2 == 1) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return iVar2;
}


