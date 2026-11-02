/* Module: sfs4rw.dll
   Function: FUN_004191f0
   Address: 004191f0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_004191f0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00419140(param_1);
  if (uVar1 != param_1[10]) {
    return false;
  }
  if (param_1[1] != 0) {
    return true;
  }
  uVar1 = FUN_004191c0((int)param_1);
  return uVar1 == param_1[4];
}


