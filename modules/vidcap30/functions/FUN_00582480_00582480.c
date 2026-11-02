/* Module: vidcap30.exe
   Function: FUN_00582480
   Address: 00582480
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00582480(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0xa0) + 0x50))(1,param_2);
  if (-1 < iVar1) {
    FUN_0057e100(param_2);
  }
  return;
}


