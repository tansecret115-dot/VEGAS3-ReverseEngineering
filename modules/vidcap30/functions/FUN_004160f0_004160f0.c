/* Module: vidcap30.exe
   Function: FUN_004160f0
   Address: 004160f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004160f0(HWND param_1,undefined4 param_2)

{
  LONG LVar1;
  undefined4 uVar2;
  
  if (param_1 != (HWND)0x0) {
    LVar1 = GetWindowLongA(param_1,8);
    *(undefined4 *)(LVar1 + 8) = param_2;
    FUN_00416380(param_1,0xe55,param_2);
    uVar2 = ftol();
    FUN_00416380(param_1,0xe54,uVar2);
  }
  return;
}


