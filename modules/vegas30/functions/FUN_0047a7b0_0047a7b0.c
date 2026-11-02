/* Module: vegas30.exe
   Function: FUN_0047a7b0
   Address: 0047a7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047a7b0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    if ((*(int *)(param_1 + 0x48) == 0) && (*(int *)(param_1 + 0x4c) == **(int **)(param_2 + 0x30)))
    {
      FUN_00478140(param_2);
      return;
    }
    do {
      iVar1 = FUN_004797c0(param_1,param_2,*(undefined4 *)(param_1 + 0x48));
      if (iVar1 == 0) {
        return;
      }
    } while (*(int *)(param_1 + 0x4c) != 0);
  }
  return;
}


