/* Module: sfcd.cdd
   Function: FUN_00401190
   Address: 00401190
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00401190(HMODULE param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  
  uVar2 = 1;
  if (param_2 == 0) {
    uVar2 = FUN_00401180();
  }
  else if (param_2 == 1) {
    bVar1 = FUN_00401110(param_1);
    return CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}


