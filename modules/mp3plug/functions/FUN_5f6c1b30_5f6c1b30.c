/* Module: mp3plug.dll
   Function: FUN_5f6c1b30
   Address: 5f6c1b30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f6c1b30(double *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  float10 fVar1;
  double dVar2;
  undefined8 local_10;
  
  dVar2 = _hypot((double)CONCAT44(param_3,param_2),(double)CONCAT44(param_5,param_4));
  fVar1 = FUN_5f6c1be0((dVar2 - (double)CONCAT44(param_3,param_2)) * _DAT_5f72c7b8);
  local_10 = (double)fVar1;
  fVar1 = FUN_5f6c1be0(((double)CONCAT44(param_3,param_2) + dVar2) * _DAT_5f72c7b8);
  if ((double)CONCAT44(param_5,param_4) < _DAT_5f7349d0) {
    local_10 = -local_10;
  }
  *param_1 = (double)fVar1;
  *(undefined4 *)(param_1 + 1) = (undefined4)local_10;
  *(undefined4 *)((int)param_1 + 0xc) = local_10._4_4_;
  return;
}


