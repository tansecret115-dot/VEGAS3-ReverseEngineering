/* Module: vidcap30.exe
   Function: FUN_004d30d0
   Address: 004d30d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004d30d0(HWND param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,-0x15);
  FUN_004d0ed0(LVar1);
  FUN_004d0c20(LVar1);
  return 1;
}


