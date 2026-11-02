/* Module: sftrans1.dll
   Function: FUN_0054fd20
   Address: 0054fd20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0054fd20(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8);
  if (0 < iVar1) {
    do {
      FUN_0054ed50(0,1);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 1;
}


