/* Module: sfppack3.dll
   Function: FUN_5cc34f70
   Address: 5cc34f70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5cc34f70(void *this,double *param_1,uint param_2)

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
  
  iVar4 = *(int *)((int)this + 0x88);
  fsin((float10)iVar4 * (float10)*(double *)((int)this + 0xa0));
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
  iVar2 = *(int *)((int)this + 0xb0);
  fVar9 = (float10)*(double *)((int)this + 0xc0) * (float10)*(double *)((int)this + 0x80) +
          ((extraout_ST0 - (float10)iVar3) *
           ((float10)*(double *)(iVar2 + iVar6 * 8) - (float10)*(double *)(iVar2 + iVar3 * 8)) +
          (float10)*(double *)(iVar2 + iVar3 * 8)) * (float10)*(double *)((int)this + 0xb8);
  *(double *)((int)this + 0x80) = (double)fVar9;
  if (ABS(fVar9) < (float10)_DAT_5cc87d48) {
    *(undefined4 *)((int)this + 0x80) = 0;
    *(undefined4 *)((int)this + 0x84) = 0;
  }
  dVar1 = *(double *)((int)this + 0x90) - _DAT_5cc87d18;
  *(double *)((int)this + 0x90) = dVar1;
  if (dVar1 < _DAT_5cc87cd8) {
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0x94) = 0x40b96300;
  }
  iVar4 = iVar4 + 1;
  *(int *)((int)this + 0x88) = iVar4;
  if (*(double *)((int)this + 0x98) <= (double)iVar4) {
    *(undefined4 *)((int)this + 0x88) = 0;
  }
  if (param_2 < 2) {
    dVar1 = *param_1;
    *param_1 = (double)fVar9 * *(double *)((int)this + 0x68) +
               *(double *)((int)this + 0x70) * *param_1;
    fVar9 = (float10)(double)fVar9 * (float10)*(double *)((int)this + 200) + (float10)dVar1;
  }
  else {
    fVar8 = extraout_ST1;
    if (param_2 != 0) {
      pdVar5 = (double *)((int)this + 0xd0);
      uVar7 = param_2;
      do {
        fVar8 = fVar8 + (float10)*param_1;
        dVar1 = *pdVar5;
        pdVar5 = pdVar5 + 1;
        uVar7 = uVar7 - 1;
        *param_1 = (double)((float10)*param_1 * (float10)*(double *)((int)this + 0x70) +
                           (float10)dVar1 * (float10)*(double *)((int)this + 0x68) * fVar9);
        param_1 = param_1 + 1;
      } while (uVar7 != 0);
    }
    fVar9 = fVar8 / (float10)param_2 + fVar9 * (float10)*(double *)((int)this + 200);
  }
  if (ABS(fVar9) < (float10)_DAT_5cc87d48) {
    fVar9 = (float10)_DAT_5cc87cd8;
  }
  *(double *)(*(int *)((int)this + 0xb0) + *(int *)((int)this + 0x78) * 8) = (double)fVar9;
  iVar4 = *(int *)((int)this + 0x78) + -1;
  *(int *)((int)this + 0x78) = iVar4;
  if (iVar4 < 0) {
    *(undefined4 *)((int)this + 0x78) = 0x1963;
  }
  return;
}


