/* Module: oggplug.dll
   Function: FUN_00408180
   Address: 00408180
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00408180(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x32c) = 0;
    SetEvent(*(HANDLE *)(param_1 + 0x328));
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x20),10000);
    CloseHandle(*(HANDLE *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
    return param_1;
  }
  return 0;
}


