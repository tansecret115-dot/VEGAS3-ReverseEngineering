/* Module: encn3260.dll
   Function: FUN_664c4200
   Address: 664c4200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664c4200(int param_1)

{
  DWORD DVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0x80040009;
  }
  DVar1 = GetCurrentThreadId();
  if (DVar1 != *(DWORD *)(param_1 + 0x14)) {
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x10),0xffffffff);
  }
  CloseHandle(*(HANDLE *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 0;
}


