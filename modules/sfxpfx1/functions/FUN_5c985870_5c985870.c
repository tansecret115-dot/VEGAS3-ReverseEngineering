/* Module: sfxpfx1.dll
   Function: FUN_5c985870
   Address: 5c985870
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5c985870(uint *param_1)

{
  uint uVar1;
  
  if (param_1[1] == 0) {
    uVar1 = FUN_5c985860((int)param_1);
    param_1[4] = uVar1;
  }
  uVar1 = FUN_5c9857e0(param_1);
  param_1[10] = uVar1;
  return;
}


