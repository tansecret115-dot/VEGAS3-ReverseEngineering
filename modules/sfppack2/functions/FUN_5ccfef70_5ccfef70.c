/* Module: sfppack2.dll
   Function: FUN_5ccfef70
   Address: 5ccfef70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5ccfef70(void *this,int param_1)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  int local_20;
  
  dVar2 = (double)*(int *)(param_1 + 4) * _DAT_5cd53ad8;
  dVar3 = (double)*(int *)(param_1 + 8) * _DAT_5cd53ad8;
  uVar5 = ftol();
  *(undefined4 *)(*(int *)((int)this + 0x130) + 0x50) = uVar5;
  uVar5 = ftol();
  *(undefined4 *)(*(int *)((int)this + 0x130) + 0x20) = uVar5;
  uVar5 = ftol();
  *(undefined4 *)(*(int *)((int)this + 0x130) + 0x38) = uVar5;
  uVar5 = ftol();
  *(undefined4 *)(*(int *)((int)this + 0x130) + 0x48) = uVar5;
  iVar6 = FUN_5ccfecc0(this);
  *(double *)(*(int *)((int)this + 0x130) + 0x28) = (double)iVar6;
  iVar6 = *(int *)((int)this + 0x130);
  fVar8 = (float10)_CIpow();
  *(double *)(iVar6 + 0x28) = (double)fVar8;
  dVar4 = _DAT_5cd53ae0;
  iVar6 = *(int *)((int)this + 0x130);
  *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar6 + 0x28);
  *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(iVar6 + 0x2c);
  if (dVar3 <= dVar4) {
    iVar6 = *(int *)((int)this + 0x130);
    *(undefined4 *)(iVar6 + 0x30) = 0;
    *(undefined4 *)(iVar6 + 0x34) = 0x3ff00000;
  }
  else {
    fVar8 = (float10)_CIpow();
    *(double *)(*(int *)((int)this + 0x130) + 0x30) = (double)((float10)_DAT_5cd51510 - fVar8);
  }
  if (dVar2 <= _DAT_5cd53ae0) {
    iVar6 = *(int *)((int)this + 0x130);
    *(undefined4 *)(iVar6 + 0x18) = 0;
    *(undefined4 *)(iVar6 + 0x1c) = 0x3ff00000;
  }
  else {
    fVar8 = (float10)_CIpow();
    *(double *)(*(int *)((int)this + 0x130) + 0x18) = (double)((float10)_DAT_5cd51510 - fVar8);
  }
  iVar6 = *(int *)((int)this + 0x130);
  *(undefined4 *)(iVar6 + 0x40) = *(undefined4 *)(iVar6 + 0x18);
  *(undefined4 *)(iVar6 + 0x44) = *(undefined4 *)(iVar6 + 0x1c);
  puVar1 = *(undefined4 **)((int)this + 0x130);
  *puVar1 = 0;
  puVar1[1] = 0x40490000;
  *(undefined4 *)(*(int *)((int)this + 0x130) + 0x4c) = *(undefined4 *)(param_1 + 0x10);
  fVar8 = (float10)_CIpow();
  *(double *)(*(int *)((int)this + 0x130) + 8) = (double)fVar8;
  if (*(int *)(param_1 + 0xc) != 0) {
    *(double *)(*(int *)((int)this + 0x130) + 8) =
         *(double *)(*(int *)((int)this + 0x130) + 8) * _DAT_5cd53fe8;
  }
  *(undefined4 *)(*(int *)((int)this + 0x130) + 0x54) = 0x349;
  FUN_5ccfedb0(this,param_1);
  iVar6 = *(int *)((int)this + 0x130);
  local_20 = 0;
  if (0 < *(int *)(iVar6 + 0x54)) {
    iVar7 = 0x58;
    do {
      if ((*(int *)(iVar7 + iVar6) == 0) && (*(int *)(iVar7 + 4 + iVar6) == -0x3f75c000)) {
        *(undefined4 *)(iVar7 + iVar6) = 0;
        *(undefined4 *)(iVar7 + 4 + iVar6) = 0;
      }
      else {
        fVar8 = (float10)_CIpow();
        *(double *)(iVar7 + iVar6) = (double)fVar8;
      }
      iVar6 = *(int *)((int)this + 0x130);
      local_20 = local_20 + 1;
      iVar7 = iVar7 + 8;
    } while (local_20 < *(int *)(iVar6 + 0x54));
  }
  return;
}


