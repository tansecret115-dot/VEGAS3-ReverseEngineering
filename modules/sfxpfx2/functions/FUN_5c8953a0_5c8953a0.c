/* Module: sfxpfx2.dll
   Function: FUN_5c8953a0
   Address: 5c8953a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5c8953a0(void *this,int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  double dVar3;
  int iVar4;
  undefined4 *puVar5;
  double *pdVar6;
  float10 fVar7;
  float10 fVar8;
  int local_18;
  double local_10;
  
  dVar3 = (double)param_1[8] * _DAT_5c8dc928;
  *(double *)((int)this + 0x178) = dVar3;
  *(double *)((int)this + 0x170) = _DAT_5c8dc920 - dVar3;
  local_10 = _DAT_5c8dc920 - (double)param_1[4] * _DAT_5c8dc928;
  if (local_10 == _DAT_5c8dc8e8) {
    local_10 = 1e-05;
  }
  FUN_5c8955f0(local_10);
  FUN_5c895140(this,param_1[3]);
  pdVar6 = (double *)((int)this + 0x180);
  local_18 = 0x3e9;
  do {
    fVar7 = (float10)_CIpow();
    *pdVar6 = (double)fVar7;
    pdVar6 = pdVar6 + 1;
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  iVar1 = *(int *)((int)this + 0x164);
  iVar4 = ftol();
  *(double *)((int)this + 0x20c0) = _DAT_5c8dc900 / (double)iVar4;
  if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x20c8) = 0;
    *(undefined4 *)((int)this + 0x20cc) = 0;
    iVar4 = 0;
    if (*(short *)(iVar1 + 2) != 0) {
      puVar5 = (undefined4 *)((int)this + 0x20f0);
      do {
        *puVar5 = 0;
        puVar5[1] = 0;
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + 2;
      } while (iVar4 < (int)(uint)*(ushort *)(*(int *)((int)this + 0x164) + 2));
    }
  }
  if ((*(int *)((int)this + 0x148) != 0) || (param_2 == 0)) {
    if ((*(short *)(*(int *)((int)this + 0x164) + 2) == 2) && (param_1[2] != 0)) {
      *(undefined4 *)((int)this + 0x20d0) = 1;
      *(double *)((int)this + 0x20d8) =
           (double)param_1[2] * _DAT_5c8dc918 * _DAT_5c8dc8f8 * _DAT_5c8dc900 +
           *(double *)((int)this + 0x20c8);
    }
    else {
      *(undefined4 *)((int)this + 0x20d0) = 0;
    }
    *(undefined4 *)((int)this + 0x148) = 0;
  }
  if (param_1[1] != 0) {
    iVar1 = *param_1;
    uVar2 = *(uint *)(*(int *)((int)this + 0x164) + 4);
    if (iVar1 <= (int)uVar2 / 2) {
      local_10 = (double)(ulonglong)uVar2;
      *(undefined4 *)((int)this + 0x168) = 1;
      fVar8 = (float10)1.4426950408889634 *
              (((float10)iVar1 * (float10)_DAT_5c8dc8f0) / (float10)(longlong)local_10);
      fVar7 = ROUND(fVar8);
      fVar8 = (float10)f2xm1(fVar8 - fVar7);
      fVar7 = (float10)fscale((float10)1 + fVar8,fVar7);
      *(double *)((int)this + 0x20e0) = (double)fVar7;
      *(double *)((int)this + 0x20e8) = (double)((float10)_DAT_5c8dc920 - fVar7);
      return 0;
    }
  }
  *(undefined4 *)((int)this + 0x20e0) = 0;
  *(undefined4 *)((int)this + 0x20e8) = 0;
  *(undefined4 *)((int)this + 0x168) = 1;
  *(undefined4 *)((int)this + 0x20e4) = 0;
  *(undefined4 *)((int)this + 0x20ec) = 0x3ff00000;
  return 0;
}


