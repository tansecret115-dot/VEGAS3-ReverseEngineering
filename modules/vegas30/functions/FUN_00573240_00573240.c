/* Module: vegas30.exe
   Function: FUN_00573240
   Address: 00573240
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00573240(int param_1,undefined4 param_2,LONG param_3,LONG param_4,undefined4 param_5)

{
  ScreenToClient(*(HWND *)(param_1 + 8),(LPPOINT)&param_3);
  FUN_004d5d90(param_2,param_3,param_4,param_5);
  return;
}


