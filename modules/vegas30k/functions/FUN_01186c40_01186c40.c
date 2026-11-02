/* Module: vegas30k.dll
   Function: FUN_01186c40
   Address: 01186c40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01186c40(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  ResetEvent(*(HANDLE *)(param_1 + 0x810));
  if (*(int *)(param_1 + 0x8b0) != 0) {
    while( true ) {
      SetEvent(*(HANDLE *)(param_1 + 0x814));
      WaitForSingleObject(*(HANDLE *)(param_1 + 0x810),2);
      if (*(int *)(param_1 + 0x614) == 0) break;
      if (*(int *)(param_1 + 0x8b0) == 0) {
        ResetEvent(*(HANDLE *)(param_1 + 0x814));
        return 0;
      }
    }
    uVar1 = 1;
  }
  ResetEvent(*(HANDLE *)(param_1 + 0x814));
  return uVar1;
}


