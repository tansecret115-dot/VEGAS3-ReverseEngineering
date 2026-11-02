/* Module: stl2plg.dll
   Function: FUN_0040c450
   Address: 0040c450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040c450(int param_1)

{
  WaitForSingleObject(*(HANDLE *)(param_1 + 0x10),2000);
  if (*(int *)(param_1 + 0x2c) != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  ReleaseMutex(*(HANDLE *)(param_1 + 0x10));
  return 0;
}


