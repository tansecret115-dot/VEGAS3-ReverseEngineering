/* Module: InstMsi-x86w.exe
   Function: FUN_01002b56
   Address: 01002b56
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01002b56(HWND param_1,LONG param_2)

{
  DAT_0100b708 = GetWindowLongA(param_1,-4);
  SetWindowLongA(param_1,-4,param_2);
  return;
}


