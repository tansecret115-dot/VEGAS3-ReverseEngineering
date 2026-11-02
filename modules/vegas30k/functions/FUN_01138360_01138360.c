/* Module: vegas30k.dll
   Function: FUN_01138360
   Address: 01138360
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01138360(HWND param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,8);
  _SfPlugIn_FreeList_4(*(undefined4 *)(LVar1 + 8));
  return;
}


