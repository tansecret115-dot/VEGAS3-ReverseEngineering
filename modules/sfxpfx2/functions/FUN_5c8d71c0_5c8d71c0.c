/* Module: sfxpfx2.dll
   Function: FUN_5c8d71c0
   Address: 5c8d71c0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_5c8d71c0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_5c8d7110(param_1);
  if (uVar1 != param_1[10]) {
    return false;
  }
  if (param_1[1] != 0) {
    return true;
  }
  uVar1 = FUN_5c8d7190((int)param_1);
  return uVar1 == param_1[4];
}


