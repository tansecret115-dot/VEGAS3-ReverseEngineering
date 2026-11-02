/* Module: vidcap30.exe
   Function: FUN_00540a10
   Address: 00540a10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00540a10(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  iVar1 = **(int **)(param_1 + 0x44);
  if (0 < iVar1) {
    do {
      iVar2 = FUN_00540950(param_2,param_3,
                           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x44) + 8) + iVar3 * 4));
      if (iVar2 == 1) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return iVar2;
}


