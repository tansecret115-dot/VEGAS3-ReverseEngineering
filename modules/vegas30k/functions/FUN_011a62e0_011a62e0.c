/* Module: vegas30k.dll
   Function: FUN_011a62e0
   Address: 011a62e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011a62e0(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = -0x7fffbffb;
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_01193dd0(0,0);
    (**(code **)(**(int **)(param_1 + 0x28) + 8))(*(int **)(param_1 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_2 != (int *)0x0) {
    iVar1 = FUN_01193dd0(1,param_1);
    if (-1 < iVar1) {
      (**(code **)(*param_2 + 4))(param_2);
      *(int **)(param_1 + 0x28) = param_2;
    }
  }
  return iVar1;
}


