/* Module: aifplug.dll
   Function: FUN_5fbd70f0
   Address: 5fbd70f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5fbd70f0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    return 0x80004003;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 100))
                    (*(int **)(param_1 + 0x28),*(int *)(param_1 + 0x30));
  return uVar1;
}


