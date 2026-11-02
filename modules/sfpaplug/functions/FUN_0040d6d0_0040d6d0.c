/* Module: sfpaplug.dll
   Function: FUN_0040d6d0
   Address: 0040d6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040d6d0(int param_1)

{
  if (*(HANDLE *)(param_1 + 0x10) != (HANDLE)0x0) {
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x10),0xffffffff);
    if (*(int *)(param_1 + 0x7c) != 0) {
      FUN_0040dec0(param_1);
    }
    *(undefined4 *)(param_1 + 0x7c) = 0;
    ReleaseMutex(*(HANDLE *)(param_1 + 0x10));
  }
  return 0;
}


