/* Module: vegas30.exe
   Function: FUN_005f2ea0
   Address: 005f2ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005f2ea0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = -0x7fffbffb;
  if ((((*(int **)(param_2 + 0x130) != (int *)0x0) && (*(int **)(param_1 + 0x130) != (int *)0x0)) &&
      (iVar1 = **(int **)(param_2 + 0x130), **(int **)(param_1 + 0x130) == iVar1)) &&
     (iVar3 = 0, 0 < iVar1)) {
    do {
      iVar2 = FUN_005f2f00(*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x130) + 8) + iVar3 * 4));
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return iVar2;
}


