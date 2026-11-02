/* Module: aifplug.dll
   Function: FUN_5fbd2cf0
   Address: 5fbd2cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5fbd2cf0(int param_1)

{
  if (*(HANDLE *)(param_1 + 0x10) != (HANDLE)0x0) {
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x10),0xffffffff);
    ReleaseMutex(*(HANDLE *)(param_1 + 0x10));
  }
  return 0;
}


