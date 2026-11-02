/* Module: pngu3266.dll
   Function: FUN_6061c3d0
   Address: 6061c3d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6061c3d0(void *this,undefined4 *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 *puVar2;
  int local_10 [3];
  
  bVar1 = thunk_FUN_6061bf80((int)this);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    puVar2 = FUN_6061c250(this,local_10,0,*(uint *)((int)this + 0x1c));
    FUN_6061c340(param_1,puVar2);
    FUN_60618cd0(local_10);
    return param_1;
  }
  FUN_6061c330(param_1);
  return param_1;
}


