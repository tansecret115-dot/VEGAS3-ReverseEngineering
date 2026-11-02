/* Module: Setup.exe
   Function: FUN_0042f390
   Address: 0042f390
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_0042f390(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0042f2e0(param_1);
  if (uVar1 != param_1[10]) {
    return false;
  }
  if (param_1[1] != 0) {
    return true;
  }
  uVar1 = FUN_0042f360((int)param_1);
  return uVar1 == param_1[4];
}


