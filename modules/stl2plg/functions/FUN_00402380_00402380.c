/* Module: stl2plg.dll
   Function: FUN_00402380
   Address: 00402380
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00402380(int param_1)

{
  FUN_00401eb0(*(int *)(param_1 + 4));
  if (*(HANDLE *)(param_1 + 0xc) != (HANDLE)0x0) {
    ReleaseMutex(*(HANDLE *)(param_1 + 0xc));
  }
  return 0;
}


