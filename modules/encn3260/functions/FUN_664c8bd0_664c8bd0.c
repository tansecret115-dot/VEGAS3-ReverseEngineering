/* Module: encn3260.dll
   Function: FUN_664c8bd0
   Address: 664c8bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664c8bd0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x80040009;
  if (*(int *)(param_1 + 0x36) != 0) {
    (**(code **)(**(int **)(param_1 + 0x44) + 4))();
    uVar1 = (**(code **)(**(int **)(param_1 + 0x36) + 0x28))();
    (**(code **)(**(int **)(param_1 + 0x44) + 8))();
  }
  return uVar1;
}


