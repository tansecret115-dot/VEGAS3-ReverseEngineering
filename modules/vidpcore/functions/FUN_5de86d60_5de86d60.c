/* Module: vidpcore.dll
   Function: FUN_5de86d60
   Address: 5de86d60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_5de86d60(undefined4 param_1,undefined4 param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float10 fVar4;
  float10 fVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  fVar4 = (float10)FUN_5de86c30(param_1,param_2);
  local_18 = 0x39a08ce9;
  uStack_14 = 0x46293e59;
  local_20 = 0;
  dVar1 = (param_3 + _DAT_5df18830) - (double)CONCAT44(param_2,param_1);
  local_1c = 0;
  local_10 = _DAT_5df18830 / dVar1;
  dVar2 = local_10;
  while( true ) {
    dVar1 = dVar1 + _DAT_5df20c88;
    dVar2 = ((double)local_20 - (double)CONCAT44(param_2,param_1)) * (double)local_1c * dVar2 +
            dVar1;
    if (ABS(dVar2) < _DAT_5df2b510) {
      dVar2 = _DAT_5df2b510;
    }
    if (ABS((double)CONCAT44(uStack_14,local_18)) < _DAT_5df2b510) {
      local_18 = 0xfeebc2a0;
      uStack_14 = 0x39b4484b;
    }
    dVar2 = _DAT_5df18830 / dVar2;
    dVar3 = dVar2 * (double)CONCAT44(uStack_14,local_18);
    local_10 = dVar3 * local_10;
    if (ABS(dVar3 - _DAT_5df18830) < _DAT_5df2b508) break;
    local_20 = local_20 + 1;
    local_1c = local_1c + -1;
    if (local_1c < -99) {
      return (float10)_DAT_5df18838;
    }
  }
  fVar5 = (float10)log2((float10)param_3);
  fVar5 = (float10)1.4426950408889634 *
          (((float10)0.6931471805599453 * fVar5 * (float10)(double)CONCAT44(param_2,param_1) -
           (float10)param_3) - fVar4);
  fVar4 = ROUND(fVar5);
  fVar5 = (float10)f2xm1(fVar5 - fVar4);
  fVar4 = (float10)fscale((float10)1 + fVar5,fVar4);
  return fVar4 * (float10)local_10;
}


