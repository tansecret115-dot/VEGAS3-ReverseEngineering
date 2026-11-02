/* Module: sfppack2.dll
   Function: FUN_5ccff470
   Address: 5ccff470
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5ccff470(void *this,int param_1,int *param_2,int param_3)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 extraout_ST0;
  float10 fVar6;
  float10 extraout_ST1;
  float10 fVar7;
  float *local_28;
  undefined8 local_20;
  
  iVar5 = param_2[6];
  if (param_3 != 0) {
    local_28 = *(float **)(param_3 + 0x18);
  }
  pdVar1 = *(double **)((int)this + 0x130);
  dVar2 = _DAT_5cd51510 - pdVar1[3];
  iVar4 = *(int *)((int)pdVar1 + 0x54);
  if ((float10)_DAT_5cd53ff8 <= (float10)*(double *)(param_2 + 4)) {
    log2((float10)*(double *)(param_2 + 4));
  }
  iVar3 = ftol();
  local_20 = pdVar1[0xb - iVar3];
  if ((float10)(1 - iVar4) < extraout_ST0) {
    local_20 = (double)(((float10)iVar3 - extraout_ST0) *
                        ((float10)pdVar1[0xc - iVar3] - (float10)local_20) + (float10)local_20);
  }
  if (*param_2 == 0) {
    iVar4 = *(int *)(pdVar1 + 7);
    fVar7 = (float10)local_20 * (float10)pdVar1[6] +
            extraout_ST1 * (float10)*(double *)(param_2 + 2);
  }
  else {
    iVar4 = *(int *)(pdVar1 + 4);
    fVar7 = (float10)local_20 * (float10)pdVar1[3] +
            (float10)dVar2 * (float10)*(double *)(param_2 + 2);
  }
  local_20 = (double)fVar7;
  if ((float10)*pdVar1 < fVar7) {
    local_20 = *pdVar1;
  }
  fVar7 = (float10)pdVar1[1] * (float10)*(double *)(param_2 + 2);
  param_2[2] = (int)local_20;
  param_2[3] = local_20._4_4_;
  local_20 = local_20 * *(double *)(*(int *)((int)this + 0x130) + 8);
  if (_DAT_5cd53ff0 <= local_20) {
    if (_DAT_5cd51be0 < local_20) {
      param_2[2] = 0;
      local_20 = 5000.0;
      param_2[3] = 0x40b38800;
    }
  }
  else {
    param_2[2] = 0;
    local_20 = 0.0;
    param_2[3] = 0;
  }
  if (param_1 < iVar4) {
    fVar6 = ((float10)local_20 - fVar7) / (float10)param_1;
  }
  else if (iVar4 == 0) {
    fVar7 = (float10)local_20;
    fVar6 = (float10)_DAT_5cd51520;
  }
  else {
    fVar6 = ((float10)local_20 - fVar7) / (float10)iVar4;
  }
  if (0 < param_1) {
    iVar5 = iVar5 - (int)local_28;
    do {
      *(float *)(iVar5 + (int)local_28) =
           (float)((float10)*(float *)(iVar5 + (int)local_28) * fVar7);
      if (param_3 != 0) {
        *local_28 = (float)((float10)*local_28 * fVar7);
      }
      if ((((float10)_DAT_5cd51520 < fVar6) && (fVar7 < (float10)local_20)) ||
         ((fVar6 < (float10)_DAT_5cd51520 && ((float10)local_20 < fVar7)))) {
        fVar7 = fVar6 + fVar7;
      }
      local_28 = local_28 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


