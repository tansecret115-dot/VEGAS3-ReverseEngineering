/* Module: stl2plg.dll
   Function: FUN_0040c2e0
   Address: 0040c2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040c2e0(int param_1)

{
  FUN_0040be40(*(int *)(param_1 + 4));
  if (*(HANDLE *)(param_1 + 0x10) != (HANDLE)0x0) {
    ReleaseMutex(*(HANDLE *)(param_1 + 0x10));
  }
  return 0;
}


