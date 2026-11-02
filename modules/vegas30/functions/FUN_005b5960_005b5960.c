/* Module: vegas30.exe
   Function: FUN_005b5960
   Address: 005b5960
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005b5960(int param_1)

{
  LONG local_4;
  
  local_4 = 0;
  SetFilePointer(*(HANDLE *)(param_1 + 0x118),*(LONG *)(param_1 + 0x1c8),&local_4,0);
  return;
}


