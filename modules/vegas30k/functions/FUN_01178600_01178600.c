/* Module: vegas30k.dll
   Function: FUN_01178600
   Address: 01178600
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01178600(int param_1)

{
  WaitForSingleObject(*(HANDLE *)(param_1 + 0x40),*(DWORD *)(param_1 + 0x44));
  ResetEvent(*(HANDLE *)(param_1 + 0x40));
  FUN_01178320();
  return;
}


