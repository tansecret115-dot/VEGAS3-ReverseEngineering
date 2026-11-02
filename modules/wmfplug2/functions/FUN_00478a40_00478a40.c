/* Module: wmfplug2.dll
   Function: FUN_00478a40
   Address: 00478a40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00478a40(HWND param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,-0x15);
  FUN_00476840(LVar1);
  FUN_00476590(LVar1);
  return 1;
}


