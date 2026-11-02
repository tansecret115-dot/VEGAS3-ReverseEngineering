/* Module: sfppack3.dll
   Function: FUN_5cc490f0
   Address: 5cc490f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cc490f0(void *this,int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  double *pdVar5;
  float10 fVar6;
  float10 fVar7;
  int local_20;
  
  fVar6 = FUN_5cc49310(param_1[6],-800);
  *(double *)((int)this + 0x178) = (double)fVar6;
  fVar6 = FUN_5cc49310(param_1[7],-800);
  *(double *)((int)this + 0x170) = (double)fVar6;
  FUN_5cc48e90(this,param_1[3]);
  pdVar5 = (double *)((int)this + 0x180);
  local_20 = 0x3e9;
  do {
    fVar6 = (float10)_CIpow();
    *pdVar5 = (double)fVar6;
    pdVar5 = pdVar5 + 1;
    local_20 = local_20 + -1;
  } while (local_20 != 0);
  iVar1 = *(int *)((int)this + 0x160);
  iVar3 = ftol();
  *(double *)((int)this + 0x20c0) = _DAT_5cc87bf8 / (double)iVar3;
  if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x20c8) = 0;
    *(undefined4 *)((int)this + 0x20cc) = 0;
    iVar3 = 0;
    if (*(short *)(iVar1 + 2) != 0) {
      puVar4 = (undefined4 *)((int)this + 0x20f0);
      do {
        *puVar4 = 0;
        puVar4[1] = 0;
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 2;
      } while (iVar3 < (int)(uint)*(ushort *)(*(int *)((int)this + 0x160) + 2));
    }
  }
  if ((*(int *)((int)this + 0x144) != 0) || (param_2 == 0)) {
    if ((*(short *)(*(int *)((int)this + 0x160) + 2) == 2) && (param_1[2] != 0)) {
      *(undefined4 *)((int)this + 0x20d0) = 1;
      *(double *)((int)this + 0x20d8) =
           (double)param_1[2] * _DAT_5cc87d28 * _DAT_5cc87cf8 * _DAT_5cc87bf8 +
           *(double *)((int)this + 0x20c8);
    }
    else {
      *(undefined4 *)((int)this + 0x20d0) = 0;
    }
    *(undefined4 *)((int)this + 0x144) = 0;
  }
  if (param_1[1] != 0) {
    iVar1 = *param_1;
    uVar2 = *(uint *)(*(int *)((int)this + 0x160) + 4);
    if (iVar1 <= (int)uVar2 / 2) {
      *(undefined4 *)((int)this + 0x164) = 1;
      fVar7 = (float10)1.4426950408889634 *
              (((float10)iVar1 * (float10)_DAT_5cc87ce0) / (float10)uVar2);
      fVar6 = ROUND(fVar7);
      fVar7 = (float10)f2xm1(fVar7 - fVar6);
      fVar6 = (float10)fscale((float10)1 + fVar7,fVar6);
      *(double *)((int)this + 0x20e0) = (double)fVar6;
      *(double *)((int)this + 0x20e8) = (double)((float10)_DAT_5cc87d18 - fVar6);
      return 0;
    }
  }
  *(undefined4 *)((int)this + 0x20e0) = 0;
  *(undefined4 *)((int)this + 0x20e8) = 0;
  *(undefined4 *)((int)this + 0x20e4) = 0;
  *(undefined4 *)((int)this + 0x20ec) = 0x3ff00000;
  *(undefined4 *)((int)this + 0x164) = 1;
  return 0;
}


