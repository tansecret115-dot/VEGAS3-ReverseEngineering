/* Module: encn3260.dll
   Function: FUN_664c9080
   Address: 664c9080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664c9080(int param_1)

{
  undefined2 uVar1;
  undefined2 extraout_var;
  undefined2 uVar2;
  
  uVar1 = 0;
  uVar2 = 0;
  if (*(int *)(param_1 + 0x36) != 0) {
    (**(code **)(**(int **)(param_1 + 0x44) + 4))();
    uVar1 = (**(code **)(**(int **)(param_1 + 0x36) + 0x44))();
    (**(code **)(**(int **)(param_1 + 0x44) + 8))();
    uVar2 = extraout_var;
  }
  return CONCAT22(uVar2,uVar1);
}


