/* Module: mp3plug.dll
   Function: FUN_5f69ccf0
   Address: 5f69ccf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f69ccf0(int param_1)

{
  if (*(HANDLE *)(param_1 + 8) != (HANDLE)0x0) {
    WaitForSingleObject(*(HANDLE *)(param_1 + 8),30000);
    CloseHandle(*(HANDLE *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


