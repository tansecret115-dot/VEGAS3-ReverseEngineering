/* Module: sfppack1.dll
   Function: FUN_5cdd6c60
   Address: 5cdd6c60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cdd6c60(void *this,int *param_1)

{
  uint uVar1;
  double dVar2;
  double *pdVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float10 fVar8;
  float10 fVar9;
  
  if (*(int *)((int)this + 0x50) != 0) {
    iVar5 = FUN_5cdd6950(this,param_1);
    *(undefined4 *)((int)this + 0x50) = 0;
    *(uint *)((int)this + 0x70) = (uint)(-1 < iVar5);
    return iVar5;
  }
  fVar8 = FUN_5cdd6c30(*param_1,-600);
  *(double *)((int)this + 0x78) = (double)fVar8;
  fVar8 = FUN_5cdd6c30(param_1[1],-600);
  *(double *)((int)this + 0x80) = (double)fVar8;
  fVar8 = FUN_5cdd6c30(param_1[2],-600);
  *(double *)((int)this + 0x218) = (double)fVar8;
  if (param_1[5] != 0) {
    *(double *)((int)this + 0x218) = (double)(fVar8 * (float10)_DAT_5ce14f08);
  }
  puVar6 = &DAT_5ce14d50;
  puVar7 = (undefined4 *)((int)this + 0xe8);
  for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = &DAT_5ce14da0;
  pdVar3 = (double *)((int)this + 0x138);
  for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pdVar3 = *puVar6;
    puVar6 = puVar6 + 1;
    pdVar3 = (double *)((int)pdVar3 + 4);
  }
  iVar5 = 10;
  pdVar3 = (double *)((int)this + 0x138);
  do {
    iVar5 = iVar5 + -1;
    pdVar3[-10] = pdVar3[-10] * *(double *)((int)this + 0x218);
    *pdVar3 = *pdVar3 * *(double *)((int)this + 0x218);
    pdVar3 = pdVar3 + 1;
  } while (iVar5 != 0);
  dVar2 = *(double *)((int)this + 0x218) * _DAT_5ce13800;
  *(double *)((int)this + 0x218) = dVar2;
  dVar2 = dVar2 * _DAT_5ce13800;
  *(double *)((int)this + 0x220) = dVar2;
  *(double *)((int)this + 0x228) = dVar2 * _DAT_5ce13800;
  dVar2 = (double)param_1[4] * _DAT_5ce12e20;
  *(double *)((int)this + 0x88) = dVar2;
  if (param_1[0xb] != 0) {
    *(double *)((int)this + 0x88) = dVar2 * _DAT_5ce14f08;
  }
  if (param_1[7] == 0) {
    *(undefined4 *)((int)this + 0x1a8) = 0;
    *(undefined4 *)((int)this + 0x1ac) = 0x3ff00000;
  }
  else {
    *(double *)((int)this + 0x1a8) = _DAT_5ce12d38 / (double)param_1[7];
  }
  iVar5 = 3;
  pdVar3 = (double *)((int)this + 0x230);
  do {
    iVar4 = ftol();
    iVar5 = iVar5 + -1;
    *pdVar3 = (double)iVar4;
    pdVar3[3] = _DAT_5ce14448 / (double)iVar4;
    pdVar3 = pdVar3 + 1;
  } while (iVar5 != 0);
  if (param_1[9] != 0) {
    uVar1 = *(uint *)(*(int *)((int)this + 0x6c) + 4);
    if (param_1[10] < (int)(uVar1 >> 1)) {
      fVar9 = (float10)1.4426950408889634 *
              (((float10)param_1[10] * (float10)_DAT_5ce14438) / (float10)uVar1);
      fVar8 = ROUND(fVar9);
      fVar9 = (float10)f2xm1(fVar9 - fVar8);
      fVar8 = (float10)fscale((float10)1 + fVar9,fVar8);
      *(double *)((int)this + 0x188) = (double)fVar8;
      *(double *)((int)this + 400) = (double)((float10)_DAT_5ce12e70 - fVar8);
      goto LAB_5cdd6e5f;
    }
  }
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 0x194) = 0x3ff00000;
LAB_5cdd6e5f:
  iVar5 = ftol();
  *(double *)((int)this + 0x1a0) = (double)iVar5;
  return 0;
}


