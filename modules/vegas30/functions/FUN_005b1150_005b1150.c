/* Module: vegas30.exe
   Function: FUN_005b1150
   Address: 005b1150
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005b1150(float *param_1,float param_2,float *param_3)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  int local_8;
  int local_4;
  
  iVar5 = 0;
  fVar3 = 0.0;
  local_8 = 0;
  local_4 = 0;
  if (0 < (int)param_3[0xfd]) {
    fVar1 = _DAT_00629ff8 - param_2;
    pfVar4 = param_3;
    do {
      fVar6 = SfVector3DDot(param_1,pfVar4);
      if (-fVar6 <= fVar1) {
        if (-param_2 - _DAT_00629ff8 <= -fVar6) {
          fVar3 = (float)((int)fVar3 + 1);
        }
        else {
          local_8 = local_8 + 1;
        }
      }
      else {
        local_4 = local_4 + 1;
      }
      iVar5 = iVar5 + 1;
      pfVar4 = pfVar4 + 7;
    } while (iVar5 < (int)param_3[0xfd]);
  }
  fVar1 = param_3[0xfd];
  if ((fVar1 == 5.60519e-45) && (fVar3 == 4.2039e-45)) {
    fVar3 = 5.60519e-45;
  }
  if (fVar3 != fVar1) {
    if ((float)((int)fVar3 + local_8) != fVar1) {
      uVar2 = 1;
      if ((float)((int)fVar3 + local_4) != fVar1) {
        uVar2 = 3;
      }
      return uVar2;
    }
    return 0;
  }
  return 2;
}


