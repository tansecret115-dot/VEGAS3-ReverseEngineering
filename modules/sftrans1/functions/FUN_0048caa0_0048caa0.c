/* Module: sftrans1.dll
   Function: FUN_0048caa0
   Address: 0048caa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0048caa0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0048c9a0(param_2);
  if (iVar1 != 0) {
    if (-1 < param_2[1] + -1) {
      *param_2 = *param_2;
      param_2[1] = param_2[1] + -1;
      return 1;
    }
    iVar1 = *param_2 + -1;
    if ((-1 < iVar1) && (iVar1 < **(int **)(param_1 + 0xa4))) {
      iVar2 = FUN_00486910(iVar1);
      iVar2 = *(int *)(iVar2 + 0xc);
      *param_2 = iVar1;
      param_2[1] = iVar2 + -1;
      return 1;
    }
  }
  return 0;
}


