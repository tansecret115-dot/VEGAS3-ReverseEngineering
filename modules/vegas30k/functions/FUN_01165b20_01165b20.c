/* Module: vegas30k.dll
   Function: FUN_01165b20
   Address: 01165b20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01165b20(HWND param_1)

{
  int *piVar1;
  
  piVar1 = (int *)GetWindowLongA(param_1,8);
  if (*piVar1 != 0) {
    FUN_01165b00(param_1,piVar1);
    return;
  }
  FUN_01165b10(param_1,piVar1);
  return;
}


