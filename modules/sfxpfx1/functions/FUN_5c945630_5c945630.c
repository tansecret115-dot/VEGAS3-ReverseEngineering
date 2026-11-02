/* Module: sfxpfx1.dll
   Function: FUN_5c945630
   Address: 5c945630
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5c945630(void *this,double *param_1,uint param_2)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  int iVar6;
  uint uVar7;
  float10 extraout_ST0;
  float10 fVar8;
  float10 extraout_ST1;
  float10 fVar9;
  
  iVar4 = *(int *)((int)this + 0x90);
  fsin((float10)iVar4 * (float10)*(double *)((int)this + 0xa8));
  iVar3 = ftol();
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x1963 < iVar3) {
    iVar3 = 0x1963;
  }
  iVar6 = iVar3 + 1;
  if (0x1963 < iVar6) {
    iVar6 = 0;
  }
  iVar2 = *(int *)((int)this + 0xb8);
  fVar9 = (float10)*(double *)((int)this + 200) * (float10)*(double *)((int)this + 0x88) +
          ((extraout_ST0 - (float10)iVar3) *
           ((float10)*(double *)(iVar2 + iVar6 * 8) - (float10)*(double *)(iVar2 + iVar3 * 8)) +
          (float10)*(double *)(iVar2 + iVar3 * 8)) * (float10)*(double *)((int)this + 0xc0);
  *(double *)((int)this + 0x88) = (double)fVar9;
  if (ABS(fVar9) < (float10)_DAT_5c98b9b8) {
    *(undefined4 *)((int)this + 0x88) = 0;
    *(undefined4 *)((int)this + 0x8c) = 0;
  }
  dVar1 = *(double *)((int)this + 0x98) - _DAT_5c98b988;
  *(double *)((int)this + 0x98) = dVar1;
  if (dVar1 < _DAT_5c98b970) {
    *(undefined4 *)((int)this + 0x98) = 0;
    *(undefined4 *)((int)this + 0x9c) = 0x40b96300;
  }
  iVar4 = iVar4 + 1;
  *(int *)((int)this + 0x90) = iVar4;
  if (*(double *)((int)this + 0xa0) <= (double)iVar4) {
    *(undefined4 *)((int)this + 0x90) = 0;
  }
  if (param_2 < 2) {
    dVar1 = *param_1;
    *param_1 = (double)fVar9 * *(double *)((int)this + 0x70) +
               *(double *)((int)this + 0x78) * *param_1;
    fVar9 = (float10)(double)fVar9 * (float10)*(double *)((int)this + 0xd0) + (float10)dVar1;
  }
  else {
    fVar8 = extraout_ST1;
    if (param_2 != 0) {
      pdVar5 = (double *)((int)this + 0xd8);
      uVar7 = param_2;
      do {
        fVar8 = fVar8 + (float10)*param_1;
        dVar1 = *pdVar5;
        pdVar5 = pdVar5 + 1;
        uVar7 = uVar7 - 1;
        *param_1 = (double)((float10)*param_1 * (float10)*(double *)((int)this + 0x78) +
                           (float10)dVar1 * (float10)*(double *)((int)this + 0x70) * fVar9);
        param_1 = param_1 + 1;
      } while (uVar7 != 0);
    }
    fVar9 = fVar8 / (float10)param_2 + fVar9 * (float10)*(double *)((int)this + 0xd0);
  }
  if (ABS(fVar9) < (float10)_DAT_5c98b9b8) {
    fVar9 = (float10)_DAT_5c98b970;
  }
  *(double *)(*(int *)((int)this + 0xb8) + *(int *)((int)this + 0x80) * 8) = (double)fVar9;
  iVar4 = *(int *)((int)this + 0x80) + -1;
  *(int *)((int)this + 0x80) = iVar4;
  if (iVar4 < 0) {
    *(undefined4 *)((int)this + 0x80) = 0x1963;
  }
  return;
}


