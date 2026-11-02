/* Module: vidcap30.exe
   Function: FUN_00582420
   Address: 00582420
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00582420(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)((*(int **)(param_1 + 0xa0))[0x23] + 0x18) == 0) {
    return -0x7fff0001;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0xa0) + 0x48))(1,param_2);
  if (-1 < iVar1) {
    iVar1 = FUN_0057e120(param_2);
  }
  return iVar1;
}


