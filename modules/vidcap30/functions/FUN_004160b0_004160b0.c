/* Module: vidcap30.exe
   Function: FUN_004160b0
   Address: 004160b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004160b0(HWND param_1,undefined4 param_2)

{
  LONG LVar1;
  undefined4 uVar2;
  
  if (param_1 != (HWND)0x0) {
    LVar1 = GetWindowLongA(param_1,8);
    *(undefined4 *)(LVar1 + 4) = param_2;
    uVar2 = ftol();
    FUN_00416380(param_1,0xe54,uVar2);
  }
  return;
}


