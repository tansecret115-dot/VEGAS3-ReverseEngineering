/* Module: g2plug.dll
   Function: FUN_5f8671c0
   Address: 5f8671c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f8671c0(HWND param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,-0x15);
  FUN_5f864fc0(LVar1);
  FUN_5f864d10(LVar1);
  return 1;
}


