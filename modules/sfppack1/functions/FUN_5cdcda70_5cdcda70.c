/* Module: sfppack1.dll
   Function: FUN_5cdcda70
   Address: 5cdcda70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5cdcda70(void *this,double *param_1,double *param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  double *pdVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 extraout_ST1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  fVar9 = (float10)*param_1 * (float10)*(double *)((int)this + 0xe8);
  dVar3 = *param_2 * *(double *)((int)this + 0xe8);
  dVar2 = (double)((float10)*(double *)((int)this + 0x240) * (float10)*(double *)((int)this + 0x250)
                  + fVar9 * (float10)*(double *)((int)this + 0x238));
  local_20._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
  uVar6 = local_20._4_4_ & 0x7ff00000;
  local_20 = dVar2;
  if (uVar6 < 0x3df00000) {
    local_20 = 0.0;
  }
  dVar2 = dVar3 * *(double *)((int)this + 0x238) +
          *(double *)((int)this + 0x250) * *(double *)((int)this + 0x248);
  local_28._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
  uVar6 = local_28._4_4_ & 0x7ff00000;
  local_28 = dVar2;
  if (uVar6 < 0x3df00000) {
    local_28 = 0.0;
  }
  fVar10 = (float10)_DAT_5ce12bf0;
  fVar11 = (float10)_DAT_5ce12bf0;
  local_18 = _DAT_5ce12bf0;
  fsin((float10)*(double *)((int)this + 0x268));
  *(undefined4 *)((int)this + 0x240) = (undefined4)local_20;
  *(undefined4 *)((int)this + 0x248) = (undefined4)local_28;
  *(uint *)((int)this + 0x244) = local_20._4_4_;
  *(uint *)((int)this + 0x24c) = local_28._4_4_;
  iVar5 = 0;
  *(double *)((int)this + 0x268) = *(double *)((int)this + 0x260) + *(double *)((int)this + 0x268);
  if (0 < *(int *)((int)this + 0xd8)) {
    piVar7 = (int *)((int)this + 0x110);
    pdVar8 = (double *)((int)this + 0x138);
    do {
      fVar9 = fVar10;
      iVar4 = ftol();
      iVar4 = *piVar7 - iVar4;
      if (iVar4 < 0) {
        iVar4 = iVar4 + *(int *)((int)this + 0x270);
      }
      fVar10 = (float10)*pdVar8 * (float10)*(double *)(*(int *)((int)this + 0x100) + iVar4 * 8) +
               fVar11;
      iVar1 = *piVar7 + -1;
      fVar11 = (float10)pdVar8[8] * (float10)*(double *)(*(int *)((int)this + 0x100) + iVar4 * 8) +
               extraout_ST1;
      *piVar7 = iVar1;
      if (iVar1 < 0) {
        *piVar7 = *(int *)((int)this + 0x270);
      }
      iVar5 = iVar5 + 1;
      pdVar8 = pdVar8 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar5 < *(int *)((int)this + 0xd8));
    local_18 = (double)fVar11;
  }
  dVar2 = (double)(fVar10 * (float10)*(double *)((int)this + 0x238) +
                  (float10)*(double *)((int)this + 0x278) * (float10)*(double *)((int)this + 0x250))
  ;
  local_30._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
  uVar6 = local_30._4_4_ & 0x7ff00000;
  local_30 = dVar2;
  if (uVar6 < 0x3df00000) {
    local_30 = 0.0;
  }
  *(undefined4 *)((int)this + 0x278) = (undefined4)local_30;
  *(uint *)((int)this + 0x27c) = local_30._4_4_;
  dVar2 = local_18 * *(double *)((int)this + 0x238) +
          *(double *)((int)this + 0x280) * *(double *)((int)this + 0x250);
  local_38._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
  uVar6 = local_38._4_4_ & 0x7ff00000;
  local_38 = dVar2;
  if (uVar6 < 0x3df00000) {
    local_38 = 0.0;
  }
  *(undefined4 *)((int)this + 0x280) = (undefined4)local_38;
  *(uint *)((int)this + 0x284) = local_38._4_4_;
  dVar2 = (double)(fVar9 * (float10)*(double *)((int)this + 0xf0) +
                  (float10)local_30 * (float10)*(double *)((int)this + 0xf8));
  local_18._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
  uVar6 = local_18._4_4_ & 0x7ff00000;
  local_18 = dVar2;
  if (uVar6 < 0x3df00000) {
    local_18 = 0.0;
  }
  *(undefined4 *)param_1 = (undefined4)local_18;
  *(uint *)((int)param_1 + 4) = local_18._4_4_;
  dVar2 = dVar3 * *(double *)((int)this + 0xf0) + local_38 * *(double *)((int)this + 0xf8);
  local_18._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
  uVar6 = local_18._4_4_ & 0x7ff00000;
  local_18 = dVar2;
  if (uVar6 < 0x3df00000) {
    local_18 = 0.0;
  }
  *(undefined4 *)param_2 = (undefined4)local_18;
  *(uint *)((int)param_2 + 4) = local_18._4_4_;
  dVar2 = (local_28 + local_20 + (local_38 + local_30) * *(double *)((int)this + 0xe0)) *
          _DAT_5ce12df8;
  dVar3 = _DAT_5ce14458;
  if ((dVar2 <= _DAT_5ce14458) && (dVar3 = dVar2, dVar2 < _DAT_5ce14450)) {
    dVar3 = _DAT_5ce14450;
  }
  *(double *)(*(int *)((int)this + 0x100) + *(int *)((int)this + 600) * 8) = dVar3;
  iVar5 = *(int *)((int)this + 600) + -1;
  *(int *)((int)this + 600) = iVar5;
  if (iVar5 < 0) {
    *(undefined4 *)((int)this + 600) = *(undefined4 *)((int)this + 0x270);
  }
  return;
}


