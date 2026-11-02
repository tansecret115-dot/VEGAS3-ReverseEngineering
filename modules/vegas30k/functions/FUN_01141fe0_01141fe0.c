/* Module: vegas30k.dll
   Function: FUN_01141fe0
   Address: 01141fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01141fe0(HWND param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,-0x15);
  FUN_0113fde0(LVar1);
  FUN_0113fb30(LVar1);
  return 1;
}


