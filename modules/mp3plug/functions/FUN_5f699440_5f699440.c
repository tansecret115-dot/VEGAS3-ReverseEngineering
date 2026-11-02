/* Module: mp3plug.dll
   Function: FUN_5f699440
   Address: 5f699440
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f699440(int param_1)

{
  DWORD DVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
    SetEvent(*(HANDLE *)(param_1 + 0x68));
    DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x20),5000);
    if (DVar1 != 0) {
      if (*(void **)(param_1 + 0x2c) != (void *)0x0) {
        FUN_5f697d90(*(void **)(param_1 + 0x2c),0);
      }
      WaitForSingleObject(*(HANDLE *)(param_1 + 0x20),5000);
    }
    CloseHandle(*(HANDLE *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
    return param_1;
  }
  return 0;
}


