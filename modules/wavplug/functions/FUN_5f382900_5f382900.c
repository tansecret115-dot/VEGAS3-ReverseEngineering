/* Module: wavplug.dll
   Function: FUN_5f382900
   Address: 5f382900
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f382900(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    return 0x80004003;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 100))
                    (*(int **)(param_1 + 0x28),*(int *)(param_1 + 0x30));
  return uVar1;
}


