/* Module: oggplug.dll
   Function: FUN_00406be0
   Address: 00406be0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00406be0(WPARAM param_1)

{
  if (((*(int *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x30) != 0)) &&
     (*(int *)(param_1 + 0x10) != 0)) {
    FUN_00406d80(param_1);
    FUN_00406ea0(param_1);
    FUN_00406f90(param_1);
    return 1;
  }
  return 0;
}


