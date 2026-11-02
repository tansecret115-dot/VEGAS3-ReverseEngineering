/* Module: sfxpfx2.dll
   Function: FUN_5c8aa1a0
   Address: 5c8aa1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c8aa1a0(HWND param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,4);
  return *(undefined4 *)(LVar1 + 8);
}


