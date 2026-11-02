/* Module: aviplug.dll
   Function: FUN_5f9578b0
   Address: 5f9578b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f9578b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5f9d8e38;
  param_1[8] = &PTR_LAB_5f9d8e18;
  FUN_5f957cd0((int)param_1);
  FUN_5f958030((int)param_1);
  if ((LPVOID)param_1[9] != (LPVOID)0x0) {
    FUN_5f967300((LPVOID)param_1[9]);
    param_1[9] = 0;
  }
  FUN_5f958890(param_1);
  return;
}


