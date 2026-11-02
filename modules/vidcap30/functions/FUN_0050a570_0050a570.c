/* Module: vidcap30.exe
   Function: FUN_0050a570
   Address: 0050a570
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0050a570(HWND param_1,undefined4 param_2)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,-0x15);
  *(undefined4 *)(LVar1 + 4) = param_2;
  return;
}


