/* Module: espr3260.dll
   Function: FUN_632f7e20
   Address: 632f7e20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_632f7e20(void *this,float *param_1,int param_2,float *param_3,float *param_4,float *param_5,
            int param_6)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar8 = (float10)_DAT_632fa558;
  iVar3 = param_2;
  if (0 < param_2) {
    do {
      fVar7 = *param_1;
      param_1 = param_1 + 1;
      iVar3 = iVar3 + -1;
      fVar8 = (float10)fVar7 * (float10)fVar7 + fVar8;
    } while (iVar3 != 0);
  }
  iVar3 = 4;
  log2(fVar8 / (float10)param_2);
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  fVar8 = (float10)_CIpow();
  iVar3 = DAT_632fb238;
  if (param_6 == 1) {
    iVar3 = DAT_632fb238 + -0x1a;
  }
  iVar3 = iVar3 + -0x40;
  iVar5 = 0;
  pfVar4 = (float *)&DAT_632fb340;
  fVar7 = *param_3;
  if (0 < iVar3) {
    do {
      if (*pfVar4 < fVar7) {
        iVar5 = iVar5 + 1;
      }
      pfVar4 = pfVar4 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_1 = (float *)0x7f7fffff;
  pfVar4 = (float *)(&DAT_632fb240 + iVar5 * 2);
  fVar6 = 0.0;
  do {
    fVar1 = *pfVar4;
    fVar9 = (float10)pfVar4[1] * fVar8;
    pfVar4 = pfVar4 + 2;
    fVar9 = (float10)fVar1 * (float10)param_5[1] +
            fVar9 * (float10)param_5[3] +
            fVar9 * fVar9 * (float10)param_5[2] +
            fVar9 * (float10)fVar1 * (float10)param_5[4] +
            (float10)*param_5 * (float10)fVar1 * (float10)fVar1;
    if (fVar9 < (float10)(float)param_1) {
      param_1 = (float *)(float)fVar9;
      fVar7 = fVar6;
    }
    fVar6 = (float)((int)fVar6 + 1);
  } while ((int)fVar6 < 0x40);
  iVar5 = (int)fVar7 + iVar5;
  *param_3 = (float)(&DAT_632fb240)[iVar5 * 2];
  *param_4 = (float)(fVar8 * (float10)(float)(&DAT_632fb244)[iVar5 * 2]);
  puVar2 = (undefined4 *)((int)this + 2000);
  iVar3 = 3;
  do {
    *puVar2 = puVar2[-1];
    puVar2 = puVar2 + -1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  fVar8 = (float10)log2((float10)(float)(&DAT_632fb244)[iVar5 * 2]);
  *(float *)((int)this + 0x7c4) =
       (float)((float10)0.3010299956639812 * fVar8 * (float10)_DAT_632fa580);
  return iVar5;
}


