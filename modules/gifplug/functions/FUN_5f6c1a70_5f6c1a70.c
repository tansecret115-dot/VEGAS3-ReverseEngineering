/* Module: gifplug.dll
   Function: FUN_5f6c1a70
   Address: 5f6c1a70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6c1a70(int param_1)

{
  BOOL BVar1;
  
  if (*(HANDLE *)(param_1 + 0x69f) != (HANDLE)0xffffffff) {
    BVar1 = CloseHandle(*(HANDLE *)(param_1 + 0x69f));
    if (BVar1 == 0) {
      GetLastError();
      return 0x80004005;
    }
    *(undefined4 *)(param_1 + 0x69f) = 0xffffffff;
  }
  return 0;
}


