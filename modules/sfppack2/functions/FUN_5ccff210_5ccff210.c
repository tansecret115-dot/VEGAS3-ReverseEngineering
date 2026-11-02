/* Module: sfppack2.dll
   Function: FUN_5ccff210
   Address: 5ccff210
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5ccff210(void *this,int param_1,int *param_2,int param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 extraout_ST0;
  float10 extraout_ST1;
  float10 fVar8;
  double *local_28;
  undefined8 local_20;
  
  iVar7 = param_2[6];
  if (param_3 != 0) {
    local_28 = *(double **)(param_3 + 0x18);
  }
  pdVar1 = *(double **)((int)this + 0x130);
  dVar2 = _DAT_5cd51510 - pdVar1[3];
  iVar6 = *(int *)((int)pdVar1 + 0x54);
  if ((float10)_DAT_5cd53ff8 <= (float10)*(double *)(param_2 + 4)) {
    log2((float10)*(double *)(param_2 + 4));
  }
  iVar5 = ftol();
  local_20 = pdVar1[0xb - iVar5];
  if ((float10)(1 - iVar6) < extraout_ST0) {
    local_20 = (double)(((float10)iVar5 - extraout_ST0) *
                        ((float10)pdVar1[0xc - iVar5] - (float10)local_20) + (float10)local_20);
  }
  if (*param_2 == 0) {
    iVar6 = *(int *)(pdVar1 + 7);
    fVar8 = (float10)local_20 * (float10)pdVar1[6] +
            extraout_ST1 * (float10)*(double *)(param_2 + 2);
  }
  else {
    iVar6 = *(int *)(pdVar1 + 4);
    fVar8 = (float10)local_20 * (float10)pdVar1[3] +
            (float10)dVar2 * (float10)*(double *)(param_2 + 2);
  }
  local_20 = (double)fVar8;
  if ((float10)*pdVar1 < fVar8) {
    local_20 = *pdVar1;
  }
  dVar2 = pdVar1[1] * *(double *)(param_2 + 2);
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
  if (param_1 < iVar6) {
    dVar3 = dVar2;
    dVar4 = (local_20 - dVar2) / (double)param_1;
  }
  else {
    dVar3 = local_20;
    dVar4 = _DAT_5cd51520;
    if (iVar6 != 0) {
      dVar3 = dVar2;
      dVar4 = (local_20 - dVar2) / (double)iVar6;
    }
  }
  if (0 < param_1) {
    iVar7 = iVar7 - (int)local_28;
    do {
      *(double *)(iVar7 + (int)local_28) = dVar3 * *(double *)(iVar7 + (int)local_28);
      if (param_3 != 0) {
        *local_28 = dVar3 * *local_28;
      }
      if (((_DAT_5cd51520 < dVar4) && (dVar3 < local_20)) ||
         ((dVar4 < _DAT_5cd51520 && (local_20 < dVar3)))) {
        dVar3 = dVar4 + dVar3;
      }
      local_28 = local_28 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


