/* Module: sfpaplug.dll
   Function: FUN_00402160
   Address: 00402160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00402160(int param_1)

{
  if (((*(int *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x30) != 0)) &&
     (*(int *)(param_1 + 0x10) != 0)) {
    FUN_00402360(param_1);
    FUN_00402490(param_1);
    FUN_00402580(param_1);
    return 1;
  }
  return 0;
}


