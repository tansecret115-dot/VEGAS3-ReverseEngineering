/* Module: sfppack1.dll
   Function: FUN_5cdd6950
   Address: 5cdd6950
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cdd6950(void *this,int *param_1)

{
  uint uVar1;
  double dVar2;
  double *pdVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float10 fVar10;
  float10 fVar11;
  
  puVar7 = &DAT_5ce14d00;
  puVar8 = (undefined4 *)((int)this + 0x98);
  for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar7 = (undefined4 *)((int)this + 0x1bc);
  puVar8 = &DAT_5ce14d50;
  puVar9 = (undefined4 *)((int)this + 0xe8);
  for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar8 = &DAT_5ce14da0;
  puVar9 = (undefined4 *)((int)this + 0x138);
  for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  iVar5 = 3;
  do {
    if ((undefined4 *)*puVar7 != (undefined4 *)0x0) {
      puVar8 = (undefined4 *)*puVar7;
      for (iVar6 = 13000; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
    }
    puVar7 = puVar7 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(int *)((int)this + 0x90) = param_1[3];
  fVar10 = FUN_5cdd6c30(*param_1,-600);
  *(double *)((int)this + 0x78) = (double)fVar10;
  fVar10 = FUN_5cdd6c30(param_1[1],-600);
  *(double *)((int)this + 0x80) = (double)fVar10;
  fVar10 = FUN_5cdd6c30(param_1[2],-600);
  *(double *)((int)this + 0x218) = (double)fVar10;
  if (param_1[5] != 0) {
    *(double *)((int)this + 0x218) = (double)(fVar10 * (float10)_DAT_5ce14f08);
  }
  if (param_1[7] == 0) {
    *(undefined4 *)((int)this + 0x1a8) = 0;
    *(undefined4 *)((int)this + 0x1ac) = 0x3ff00000;
  }
  else {
    *(double *)((int)this + 0x1a8) = _DAT_5ce12d38 / (double)param_1[7];
  }
  dVar2 = (double)param_1[4] * _DAT_5ce12e20;
  *(double *)((int)this + 0x88) = dVar2;
  if (param_1[0xb] != 0) {
    *(double *)((int)this + 0x88) = dVar2 * _DAT_5ce14f08;
  }
  if (param_1[9] != 0) {
    uVar1 = *(uint *)(*(int *)((int)this + 0x6c) + 4);
    if (param_1[10] < (int)(uVar1 >> 1)) {
      fVar11 = (float10)1.4426950408889634 *
               (((float10)param_1[10] * (float10)_DAT_5ce14438) / (float10)uVar1);
      fVar10 = ROUND(fVar11);
      fVar11 = (float10)f2xm1(fVar11 - fVar10);
      fVar10 = (float10)fscale((float10)1 + fVar11,fVar10);
      *(double *)((int)this + 0x188) = (double)fVar10;
      *(double *)((int)this + 400) = (double)((float10)_DAT_5ce12e70 - fVar10);
      goto LAB_5cdd6ad5;
    }
  }
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 0x194) = 0x3ff00000;
LAB_5cdd6ad5:
  iVar5 = ftol();
  *(double *)((int)this + 0x1b0) = (double)iVar5;
  iVar5 = ftol();
  iVar6 = 10;
  *(double *)((int)this + 0x1a0) = (double)iVar5;
  pdVar3 = (double *)((int)this + 0x138);
  do {
    iVar6 = iVar6 + -1;
    pdVar3[-10] = pdVar3[-10] * *(double *)((int)this + 0x218);
    *pdVar3 = *pdVar3 * *(double *)((int)this + 0x218);
    pdVar3 = pdVar3 + 1;
  } while (iVar6 != 0);
  uVar4 = ftol();
  *(undefined4 *)((int)this + 0x1b8) = uVar4;
  puVar7 = (undefined4 *)((int)this + 0x1c8);
  param_1 = (int *)0x3;
  iVar5 = (int)this + 0x98;
  do {
    *puVar7 = 0;
    *(undefined4 *)(iVar5 + 0x140) = 0;
    *(undefined4 *)(iVar5 + 0x144) = 0;
    iVar6 = ftol();
    *(double *)(iVar5 + 0x168) = (double)iVar6;
    iVar6 = ftol();
    puVar7 = puVar7 + 1;
    param_1 = (int *)((int)param_1 + -1);
    *(double *)(iVar5 + 0x198) = (double)iVar6;
    *(double *)(iVar5 + 0x1b0) = _DAT_5ce14448 / (double)iVar6;
    iVar5 = iVar5 + 8;
  } while (param_1 != (int *)0x0);
  dVar2 = *(double *)((int)this + 0x218) * _DAT_5ce13800;
  *(double *)((int)this + 0x218) = dVar2;
  dVar2 = dVar2 * _DAT_5ce13800;
  *(double *)((int)this + 0x220) = dVar2;
  *(double *)((int)this + 0x228) = dVar2 * _DAT_5ce13800;
  return 0;
}


