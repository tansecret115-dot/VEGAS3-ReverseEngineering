/* Module: vidcap30.exe
   Function: FUN_00499df0
   Address: 00499df0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00499df0(int param_1)

{
  tagRECT local_10;
  
  GetClientRect(*(HWND *)(*(int *)(param_1 + 0x18) + 0x28),&local_10);
  FUN_00521040(&local_10);
  return 0;
}


