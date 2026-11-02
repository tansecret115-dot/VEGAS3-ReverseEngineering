/* Module: cook3260.dll
   Function: FUN_633a4430
   Address: 633a4430
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_633a4430(int param_1,undefined4 *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float *pfVar9;
  void *this;
  undefined4 *puVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  float local_2150 [20];
  undefined4 local_2100 [2028];
  float local_150 [20];
  float afStackY_100 [20];
  int local_b0 [20];
  float local_60 [16];
  undefined4 uStackY_20;
  
  puVar5 = param_2;
  FUN_633a7330();
  iVar11 = *(int *)(&DAT_633a8c4c + *(int *)((int)this + 0xc) * 4);
  uVar4 = *(undefined4 *)((int)this + 0x1c);
  iVar16 = *(int *)(&DAT_633a8c50 + *(int *)((int)this + 0x18) * 4);
  uStackY_20 = 0x633a447d;
  FUN_633a41d0(this,param_1,local_150,*(int *)((int)this + 0x18));
  uStackY_20 = 0x633a4491;
  FUN_633a41d0(this,(int)param_2,local_60,*(int *)((int)this + 0x18));
  if (iVar16 <= iVar11) {
    iVar15 = (1 << ((byte)uVar4 & 0x1f)) + -2;
    piVar14 = local_b0 + iVar16;
    pfVar12 = afStackY_100 + iVar16;
    do {
      if (_DAT_633a8f60 <= local_150[iVar16] + local_60[iVar16]) {
        *pfVar12 = (local_60[iVar16] - local_150[iVar16]) / (local_150[iVar16] + local_60[iVar16]);
      }
      else {
        *pfVar12 = 0.0;
      }
      iVar6 = ftol();
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      if (iVar15 < iVar6) {
        iVar6 = iVar15;
      }
      *piVar14 = iVar6;
      iVar16 = iVar16 + 1;
      pfVar12 = pfVar12 + 1;
      piVar14 = piVar14 + 1;
    } while (iVar16 <= iVar11);
  }
  iVar16 = FUN_633a4280(this,local_b0);
  iVar11 = *(int *)((int)this + 0x18);
  if (0 < iVar11) {
    puVar17 = local_2100;
    puVar7 = param_2;
    do {
      iVar15 = 0x14;
      puVar8 = puVar7;
      puVar10 = puVar17;
      do {
        puVar7 = puVar8 + 1;
        puVar10[-0x14] = *(undefined4 *)((param_1 - (int)param_2) + (int)puVar8);
        *puVar10 = *puVar8;
        puVar10 = puVar10 + 1;
        iVar15 = iVar15 + -1;
        puVar8 = puVar7;
      } while (iVar15 != 0);
      puVar17 = puVar17 + 0x28;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  iVar11 = *(int *)((int)this + 0x18);
  if (iVar11 < *(int *)((int)this + 0xc)) {
    pfVar9 = (float *)(param_2 + iVar11 * 0x14);
    param_2 = (undefined4 *)(*(int *)((int)this + 0xc) - iVar11);
    piVar14 = (int *)(&DAT_633a8c50 + iVar11 * 4);
    pfVar12 = local_2150 + iVar11 * 0x28;
    do {
      fVar2 = afStackY_100[*piVar14];
      iVar11 = 0x14;
      pfVar13 = pfVar12;
      do {
        pfVar1 = (float *)((int)pfVar9 + (param_1 - (int)puVar5));
        fVar3 = *pfVar9;
        pfVar9 = pfVar9 + 1;
        pfVar12 = pfVar13 + 1;
        iVar11 = iVar11 + -1;
        *pfVar13 = (*pfVar1 + fVar3) *
                   ((float)_DAT_633a8f70 / SQRT((float)_DAT_633a8f68 - ABS(fVar2)));
        pfVar13 = pfVar12;
      } while (iVar11 != 0);
      piVar14 = piVar14 + 1;
      param_2 = (undefined4 *)((int)param_2 + -1);
    } while (param_2 != (undefined4 *)0x0);
  }
  FUN_633a4090(this,local_2150,(int *)(param_3 - iVar16));
  return;
}


