/* Module: wavplug.dll
   Function: FUN_5f38d880
   Address: 5f38d880
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f38d880(int param_1)

{
  if (*(HANDLE *)(param_1 + 0x10) != (HANDLE)0x0) {
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x10),0xffffffff);
    FUN_5f395660(param_1 + -0xa8);
    ReleaseMutex(*(HANDLE *)(param_1 + 0x10));
  }
  return 0;
}


