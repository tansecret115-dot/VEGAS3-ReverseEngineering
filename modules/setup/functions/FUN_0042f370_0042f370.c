/* Module: Setup.exe
   Function: FUN_0042f370
   Address: 0042f370
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0042f370(uint *param_1)

{
  uint uVar1;
  
  if (param_1[1] == 0) {
    uVar1 = FUN_0042f360((int)param_1);
    param_1[4] = uVar1;
  }
  uVar1 = FUN_0042f2e0(param_1);
  param_1[10] = uVar1;
  return;
}


