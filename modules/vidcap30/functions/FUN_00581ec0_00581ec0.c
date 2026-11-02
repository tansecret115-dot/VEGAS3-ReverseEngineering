/* Module: vidcap30.exe
   Function: FUN_00581ec0
   Address: 00581ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00581ec0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0xd8) + 0x48))(0,param_2);
  if (-1 < iVar1) {
    FUN_0057db00(param_2);
  }
  return;
}


