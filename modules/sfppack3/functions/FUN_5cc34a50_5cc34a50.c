/* Module: sfppack3.dll
   Function: FUN_5cc34a50
   Address: 5cc34a50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cc34a50(void *this,int param_1)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar3 = (uint)(*(int *)(*(int *)((int)this + 0x54) + 4) * 1000) /
          (uint)(*(int *)(param_1 + 0xc) << 1);
  uVar5 = 2000;
  if ((int)uVar3 < 0x7d1) {
    uVar5 = uVar3;
  }
  *(uint *)((int)this + 0x1d8) = uVar5;
  *(double *)((int)this + 0x1e8) = (double)(int)uVar5 / (double)(int)uVar3;
  dVar2 = (double)(*(int *)(param_1 + 0x18) + -0x32);
  local_20 = dVar2 * dVar2 * _DAT_5cc87d20 + _DAT_5cc87d18;
  if (*(int *)(param_1 + 0x18) < 0x32) {
    local_20 = _DAT_5cc87d18 / local_20;
  }
  dVar2 = (double)(*(int *)(param_1 + 0x10) + -0x32);
  dVar2 = dVar2 * dVar2 * _DAT_5cc87d10 + _DAT_5cc87d18;
  if (_DAT_5cc87d08 < (double)*(int *)(param_1 + 0x10)) {
    dVar2 = _DAT_5cc87d18 / dVar2;
  }
  local_28 = (ulonglong)*(uint *)(*(int *)((int)this + 0x54) + 4);
  dVar1 = (double)*(int *)(param_1 + 0x14) / (double)local_28;
  if (_DAT_5cc87cd8 == dVar2) {
    fVar7 = (float10)dVar1;
    fVar6 = (float10)_DAT_5cc87cd8;
  }
  else {
    fVar6 = (float10)_CIpow();
    fVar7 = (float10)dVar1 / fVar6;
    fVar6 = (float10)(double)fVar6 * (float10)dVar1;
    if (fVar7 <= fVar6) {
      if ((float10)_DAT_5cc87cf8 < fVar6) {
        fVar6 = (float10)_DAT_5cc87cf8;
      }
      fVar6 = (fVar6 - fVar7) / (float10)(int)uVar5;
    }
    else {
      fVar6 = (fVar7 - fVar7) / (float10)(int)uVar5;
    }
  }
  iVar4 = 0;
  if (0 < (int)uVar5) {
    do {
      iVar4 = iVar4 + 1;
      fVar9 = (float10)1.4426950408889634 * ((fVar7 * (float10)_DAT_5cc87cf0) / (float10)local_20);
      fVar8 = ROUND(fVar9);
      fVar9 = (float10)f2xm1(fVar9 - fVar8);
      fVar8 = (float10)fscale((float10)1 + fVar9,fVar8);
      fVar9 = (float10)fcos(fVar7 * (float10)_DAT_5cc87ce8);
      *(double *)(*(int *)((int)this + 0x1f0) + -8 + iVar4 * 8) =
           (double)(fVar9 * fVar8 + fVar9 * fVar8);
      fVar9 = (float10)1.4426950408889634 * ((fVar7 * (float10)_DAT_5cc87ce0) / (float10)local_20);
      fVar8 = ROUND(fVar9);
      fVar9 = (float10)f2xm1(fVar9 - fVar8);
      fVar8 = (float10)fscale((float10)1 + fVar9,fVar8);
      *(double *)(*(int *)((int)this + 500) + -8 + iVar4 * 8) = (double)fVar8;
      fVar7 = fVar6 + fVar7;
    } while (iVar4 < *(int *)((int)this + 0x1d8));
  }
  return 0;
}


