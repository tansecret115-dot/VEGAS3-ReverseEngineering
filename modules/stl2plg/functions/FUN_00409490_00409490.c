/* Module: stl2plg.dll
   Function: FUN_00409490
   Address: 00409490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00409490(int param_1)

{
  FUN_00409020(*(int *)(param_1 + 4));
  if (*(HANDLE *)(param_1 + 0x10) != (HANDLE)0x0) {
    ReleaseMutex(*(HANDLE *)(param_1 + 0x10));
  }
  return 0;
}


