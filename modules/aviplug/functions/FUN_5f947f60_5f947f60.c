/* Module: aviplug.dll
   Function: FUN_5f947f60
   Address: 5f947f60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f947f60(int param_1)

{
  if (*(int *)(param_1 + -400) != -1) {
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x78),0xffffffff);
    CloseHandle(*(HANDLE *)(param_1 + -400));
    *(undefined4 *)(param_1 + -400) = 0xffffffff;
    *(undefined4 *)(param_1 + -0xe8) = 1;
    ReleaseMutex(*(HANDLE *)(param_1 + 0x78));
  }
  return 0;
}


