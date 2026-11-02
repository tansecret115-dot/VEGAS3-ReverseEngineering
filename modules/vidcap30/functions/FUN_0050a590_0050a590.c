/* Module: vidcap30.exe
   Function: FUN_0050a590
   Address: 0050a590
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0050a590(HWND param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,-0x15);
  return *(undefined4 *)(LVar1 + 4);
}


