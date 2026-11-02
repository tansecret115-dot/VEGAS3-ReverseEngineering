/* Module: encn3260.dll
   Function: FUN_664c9230
   Address: 664c9230
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664c9230(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x36) != 0) {
    (**(code **)(**(int **)(param_1 + 0x44) + 4))();
    uVar1 = (**(code **)(**(int **)(param_1 + 0x36) + 8))();
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    (**(code **)(**(int **)(param_1 + 0x44) + 8))();
  }
  return *(undefined4 *)(param_1 + 0xc);
}


