/* Module: vidcap30.exe
   Function: FUN_00581f10
   Address: 00581f10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00581f10(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0xd8) + 0x50))(0,param_2);
  if (-1 < iVar1) {
    FUN_0057dad0(param_2);
  }
  return;
}


