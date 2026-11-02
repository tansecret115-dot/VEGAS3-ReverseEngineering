/* Module: mcplug.dll
   Function: FUN_00417660
   Address: 00417660
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00417660(int param_1)

{
  if (*(HANDLE *)(param_1 + 8) != (HANDLE)0x0) {
    WaitForSingleObject(*(HANDLE *)(param_1 + 8),30000);
    CloseHandle(*(HANDLE *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


