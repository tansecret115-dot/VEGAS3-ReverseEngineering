/* Module: rmme3260.dll
   Function: FUN_6625d620
   Address: 6625d620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6625d620(int param_1)

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


