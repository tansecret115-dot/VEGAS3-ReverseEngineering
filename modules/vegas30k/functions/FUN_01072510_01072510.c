/* Module: vegas30k.dll
   Function: FUN_01072510
   Address: 01072510
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01072510(HWND param_1,undefined4 param_2)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,-0x15);
  *(undefined4 *)(LVar1 + 4) = param_2;
  return;
}


