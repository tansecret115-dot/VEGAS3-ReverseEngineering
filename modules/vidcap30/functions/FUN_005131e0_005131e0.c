/* Module: vidcap30.exe
   Function: FUN_005131e0
   Address: 005131e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005131e0(HWND param_1,undefined4 param_2)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,0);
  *(undefined4 *)(LVar1 + 4) = param_2;
  return;
}


