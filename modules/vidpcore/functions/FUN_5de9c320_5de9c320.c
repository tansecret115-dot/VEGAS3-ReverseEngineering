/* Module: vidpcore.dll
   Function: FUN_5de9c320
   Address: 5de9c320
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_5de9c320(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,double param_8,int param_9,
            double param_10,double param_11,double param_12,double param_13,double param_14,
            int param_15,int param_16,double param_17,undefined4 param_18,double param_19,
            undefined4 param_20,int param_21)

{
  double dVar1;
  double dVar2;
  double local_28;
  double local_20;
  
  dVar1 = param_12;
  dVar2 = param_13;
  if (param_9 == 0) {
    dVar1 = param_12 - param_10;
    if (param_12 - param_10 < param_10) {
      dVar1 = param_10;
    }
    dVar2 = param_13 - param_11;
    if (param_13 - param_11 < param_11) {
      dVar2 = param_11;
    }
  }
  if (param_21 == 1) {
    param_14 = dVar2 / dVar1;
  }
  else if (param_21 == 2) {
    param_14 = dVar1 / dVar2;
  }
  dVar1 = SQRT(dVar1 * dVar1 + (dVar2 / param_14) * (dVar2 / param_14));
  dVar2 = param_17;
  if (_DAT_5df18838 < param_19) {
    dVar2 = param_17 + param_19 + param_17 + param_19;
  }
  local_20 = (dVar1 + dVar2) * param_8;
  if (local_20 < param_17) {
    param_17 = local_20;
  }
  local_20 = local_20 - param_17;
  local_28 = param_17 * _DAT_5df1eec0;
  dVar2 = local_28;
  if ((local_28 <= local_20) && (dVar2 = local_20, param_19 < local_20)) {
    dVar2 = param_19;
  }
  local_20 = local_20 - dVar2;
  if ((local_28 <= local_20) && (dVar1 = dVar2 + dVar1, local_28 = local_20, dVar1 < local_20)) {
    local_28 = dVar1;
  }
  if (param_19 <= _DAT_5df18838) {
    FUN_5de9c590(param_1,param_2,param_3,param_7,(double)param_15 * param_12 + param_10,
                 (double)param_16 * param_13 + param_11,local_28._0_4_,
                 (int)((ulonglong)local_28 >> 0x20),param_14._0_4_,param_14._4_4_,0,0x3ff80000,
                 param_18);
    return 0;
  }
  param_11 = (double)param_16 * param_13 + param_11;
  param_10 = (double)param_15 * param_12 + param_10;
  FUN_5de9c590(param_1,param_2,param_3,param_7,param_10,param_11,(local_28 - dVar2) - _DAT_5df2f3c0,
               param_14._0_4_,param_14._4_4_,0,0x3ff80000,param_18);
  FUN_5de9c590(param_4,param_5,param_6,param_7,param_10,param_11,dVar2 + local_28,param_14._0_4_,
               param_14._4_4_,0,0x3ff80000,param_20);
  return 0;
}


