/* Module: sftrans1.dll
   Function: FUN_004863b0
   Address: 004863b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_004863b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = **(int **)(param_1 + 0xa4) + -1;
  if (-1 < iVar1) {
    puVar2 = (undefined4 *)((*(int **)(param_1 + 0xa4))[2] + iVar1 * 4);
    do {
      if (*(int *)*puVar2 != -1) {
        return iVar1;
      }
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + -1;
    } while (-1 < iVar1);
  }
  return -1;
}


