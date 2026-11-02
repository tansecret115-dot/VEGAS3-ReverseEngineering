/* Module: sftrans1.dll
   Function: FUN_0048ab50
   Address: 0048ab50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0048ab50(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_3) {
    do {
      if (**(int **)(param_1 + 0xb0) <= iVar2) {
        return iVar2;
      }
      uVar1 = FUN_004dc7f0(*(undefined4 *)(param_1 + 0xa4),0,0xffffffff,
                           *(undefined4 *)((*(int **)(param_1 + 0xb0))[2] + iVar2 * 4));
      *(undefined4 *)(param_2 + iVar2 * 4) = uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  return iVar2;
}


