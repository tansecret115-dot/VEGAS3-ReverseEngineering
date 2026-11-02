/* Module: sftrans1.dll
   Function: FUN_0048c9a0
   Address: 0048c9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_0048c9a0(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((-1 < iVar1) && (iVar1 < **(int **)(param_1 + 0xa4))) {
    iVar1 = FUN_00486910(iVar1);
    if (iVar1 == 0) {
      return param_2[1] == 0;
    }
    if ((-1 < param_2[1]) && (param_2[1] < *(int *)(iVar1 + 0xc))) {
      return true;
    }
  }
  return false;
}


