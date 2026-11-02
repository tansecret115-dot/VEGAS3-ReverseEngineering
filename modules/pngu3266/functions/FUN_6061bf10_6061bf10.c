/* Module: pngu3266.dll
   Function: FUN_6061bf10
   Address: 6061bf10
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_6061bf10(void *this,undefined4 *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_6061bf80((int)param_1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    *(undefined4 *)((int)this + 0xc) = 1;
    FUN_60618ed0(this,&DAT_60649ac0);
    return this;
  }
  FUN_6061bf90(this,(char *)*param_1);
  return this;
}


