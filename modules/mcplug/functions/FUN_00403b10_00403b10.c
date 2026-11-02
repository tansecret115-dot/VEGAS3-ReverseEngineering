/* Module: mcplug.dll
   Function: FUN_00403b10
   Address: 00403b10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00403b10(int param_1)

{
  if (*(HANDLE *)(param_1 + 0x24) != (HANDLE)0x0) {
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x24),0xffffffff);
    if (*(int *)(param_1 + 0x20) != 0) {
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    ReleaseMutex(*(HANDLE *)(param_1 + 0x24));
  }
  return 0;
}


