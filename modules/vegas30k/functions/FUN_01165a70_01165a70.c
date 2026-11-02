/* Module: vegas30k.dll
   Function: FUN_01165a70
   Address: 01165a70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01165a70(HWND param_1)

{
  int *piVar1;
  
  piVar1 = (int *)GetWindowLongA(param_1,8);
  if (*piVar1 != 0) {
    FUN_01165a50(param_1,piVar1);
    return;
  }
  FUN_01165a60(param_1,piVar1);
  return;
}


