/* Module: vegas30.exe
   Function: FUN_00543070
   Address: 00543070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00543070(int param_1)

{
  int local_24 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_0061aaa8;
  puStack_10 = &DAT_0060ac70;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffd0;
  local_8 = 0;
  ExceptionList = &local_14;
  CoInitialize((LPVOID)0x0);
  local_24[0] = 0;
  do {
    if (local_24[0] == 0) {
      WaitForSingleObject(*(HANDLE *)(param_1 + 8),0xffffffff);
    }
    FUN_00542ef0(param_1,local_24);
    if (local_24[0] == 1) {
      local_24[0] = 0;
      ResetEvent(*(HANDLE *)(param_1 + 8));
      SetEvent(*(HANDLE *)(param_1 + 0x18));
    }
    else if (local_24[0] != 2) {
      FUN_00542f60(param_1);
    }
  } while (local_24[0] != 2);
  CoUninitialize();
  ExceptionList = local_14;
  return 0;
}


