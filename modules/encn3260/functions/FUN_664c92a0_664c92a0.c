/* Module: encn3260.dll
   Function: FUN_664c92a0
   Address: 664c92a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664c92a0(int param_1)

{
  undefined2 uVar1;
  undefined2 extraout_var;
  undefined2 uVar2;
  
  uVar1 = 0;
  uVar2 = 0;
  if (*(int *)(param_1 + 0x36) != 0) {
    (**(code **)(**(int **)(param_1 + 0x44) + 4))();
    uVar1 = (**(code **)(**(int **)(param_1 + 0x36) + 0x4c))();
    (**(code **)(**(int **)(param_1 + 0x44) + 8))();
    uVar2 = extraout_var;
  }
  return CONCAT22(uVar2,uVar1);
}


