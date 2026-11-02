/* Module: 50comupd.exe
   Function: FUN_01002b86
   Address: 01002b86
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01002b86(HWND param_1,LONG param_2)

{
  DAT_0100b708 = GetWindowLongA(param_1,-4);
  SetWindowLongA(param_1,-4,param_2);
  return;
}


