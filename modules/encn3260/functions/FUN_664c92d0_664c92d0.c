/* Module: encn3260.dll
   Function: FUN_664c92d0
   Address: 664c92d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664c92d0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0x36) != 0) {
    (**(code **)(**(int **)(param_1 + 0x44) + 4))();
    uVar1 = (**(code **)(**(int **)(param_1 + 0x36) + 0x50))();
    (**(code **)(**(int **)(param_1 + 0x44) + 8))();
  }
  return uVar1;
}


