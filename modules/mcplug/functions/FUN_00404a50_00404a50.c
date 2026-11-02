/* Module: mcplug.dll
   Function: FUN_00404a50
   Address: 00404a50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00404a50(int param_1)

{
  WaitForSingleObject(*(HANDLE *)(param_1 + 0x10),0xffffffff);
  *(undefined4 *)(param_1 + 0x20) = 0;
  ReleaseMutex(*(HANDLE *)(param_1 + 0x10));
  return 0;
}


