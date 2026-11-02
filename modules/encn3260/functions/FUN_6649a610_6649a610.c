/* Module: encn3260.dll
   Function: FUN_6649a610
   Address: 6649a610
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6649a610(void *param_1,int *param_2)

{
  int iVar1;
  
  (**(code **)(*param_2 + 4))(param_2);
  FUN_664baab0((void *)((int)param_1 + 0x48),param_2);
  (**(code **)(**(int **)((int)param_1 + 0x91) + 4))();
  iVar1 = FUN_6649aab0(param_1);
  (**(code **)(**(int **)((int)param_1 + 0x91) + 8))();
  FUN_66497130(iVar1);
  return;
}


