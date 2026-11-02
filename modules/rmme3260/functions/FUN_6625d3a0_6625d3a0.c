/* Module: rmme3260.dll
   Function: FUN_6625d3a0
   Address: 6625d3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6625d3a0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x36) != 0) {
    (**(code **)(**(int **)(param_1 + 0x44) + 4))();
    uVar1 = (**(code **)(**(int **)(param_1 + 0x36) + 0x40))();
    (**(code **)(**(int **)(param_1 + 0x44) + 8))();
  }
  return uVar1;
}


