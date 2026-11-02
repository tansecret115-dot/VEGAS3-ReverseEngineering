/* Module: vegas30.exe
   Function: FUN_005aadc0
   Address: 005aadc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005aadc0(double param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  float10 fVar4;
  undefined8 local_20;
  
  if (param_2 < _DAT_00610fd8) {
    param_2 = 0.0;
  }
  if (param_1 < param_3) {
    param_3 = param_1;
  }
  local_20 = 0.0;
  dVar2 = ((param_3 / param_1 - _DAT_00610560) * _DAT_006129c8 -
          (param_2 / param_1 - _DAT_00610560) * _DAT_006129c8) * _DAT_00629dd8;
  fVar4 = (float10)_CIpow();
  iVar3 = 0x24;
  do {
    dVar1 = (double)fVar4;
    fVar4 = (float10)_CIpow();
    iVar3 = iVar3 + -1;
    local_20 = (double)((fVar4 + (float10)dVar1) * (float10)dVar2 * (float10)_DAT_00610560 +
                       (float10)local_20);
  } while (iVar3 != 0);
  return (float10)local_20;
}


