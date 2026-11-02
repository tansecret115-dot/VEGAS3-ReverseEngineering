/* Module: vidcap30.exe
   Function: FUN_00509c90
   Address: 00509c90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00509c90(HWND param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,4);
  return *(undefined4 *)(LVar1 + 8);
}


