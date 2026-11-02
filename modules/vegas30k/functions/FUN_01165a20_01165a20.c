/* Module: vegas30k.dll
   Function: FUN_01165a20
   Address: 01165a20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01165a20(HWND param_1)

{
  int *piVar1;
  
  piVar1 = (int *)GetWindowLongA(param_1,8);
  if (*piVar1 != 0) {
    FUN_01165820(param_1,piVar1);
    return;
  }
  FUN_01165830(param_1,piVar1);
  return;
}


