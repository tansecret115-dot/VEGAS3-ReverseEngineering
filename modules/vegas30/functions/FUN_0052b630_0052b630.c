/* Module: vegas30.exe
   Function: FUN_0052b630
   Address: 0052b630
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052b630(HWND param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,-0x15);
  if (LVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(LVar1 + 0xb0);
}


