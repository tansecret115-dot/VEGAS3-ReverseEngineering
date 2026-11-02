/* Module: vidcap30.exe
   Function: FUN_0057f6e0
   Address: 0057f6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0057f6e0(int param_1)

{
  ResetEvent(*(HANDLE *)(param_1 + 0xbc));
  SetEvent(*(HANDLE *)(param_1 + 0xc0));
  CloseHandle(*(HANDLE *)(param_1 + 0xc0));
  *(undefined4 *)(param_1 + 0xc4) = 2;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  return;
}


