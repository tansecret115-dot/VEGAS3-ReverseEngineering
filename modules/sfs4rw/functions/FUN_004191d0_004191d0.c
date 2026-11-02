/* Module: sfs4rw.dll
   Function: FUN_004191d0
   Address: 004191d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004191d0(uint *param_1)

{
  uint uVar1;
  
  if (param_1[1] == 0) {
    uVar1 = FUN_004191c0((int)param_1);
    param_1[4] = uVar1;
  }
  uVar1 = FUN_00419140(param_1);
  param_1[10] = uVar1;
  return;
}


