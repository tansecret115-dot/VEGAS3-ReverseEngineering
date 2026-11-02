/* Module: sfxpfx1.dll
   Function: FUN_5c985890
   Address: 5c985890
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_5c985890(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_5c9857e0(param_1);
  if (uVar1 != param_1[10]) {
    return false;
  }
  if (param_1[1] != 0) {
    return true;
  }
  uVar1 = FUN_5c985860((int)param_1);
  return uVar1 == param_1[4];
}


