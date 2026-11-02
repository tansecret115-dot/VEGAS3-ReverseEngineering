/* Module: vidcap30.exe
   Function: FUN_0042fa30
   Address: 0042fa30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042fa30(int param_1)

{
  HCURSOR pHVar1;
  
  FUN_0042f4b0(param_1,1);
  pHVar1 = (HCURSOR)_SfGetUICursor_4(0x7f02);
  pHVar1 = SetCursor(pHVar1);
  FUN_0046ed20();
  FUN_0046e490();
  SetCursor(pHVar1);
  if (param_1 != 0) {
    DAT_005ba50c = DAT_005ba50c | 0x100;
  }
  FUN_0042f5d0(param_1,1);
  return;
}


