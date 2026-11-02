/* Module: oggplug.dll
   Function: FUN_00433560
   Address: 00433560
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00433560(int *param_1,int param_2,int param_3)

{
  float fVar1;
  double dVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  undefined4 *puVar9;
  float *pfVar10;
  undefined4 *puVar11;
  float *pfVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float local_a94;
  int local_a90;
  float local_a80 [56];
  float local_9a0 [56];
  float local_8c0 [560];
  
  dVar2 = (double)param_2 * _DAT_00447a78;
  puVar9 = (undefined4 *)(param_1[4] + 8);
  puVar11 = (undefined4 *)(*param_1 + 8);
  for (iVar4 = 0x38; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar9 = (undefined4 *)(param_1[4] + 8);
  puVar11 = (undefined4 *)(param_1[2] + 8);
  for (iVar4 = 0x38; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  pfVar7 = local_a80;
  local_a90 = -0xf;
  do {
    fVar3 = (float)_DAT_0044d770;
    fVar14 = (float10)1.4426950408889634 *
             ((float10)(local_a90 + -1) * (float10)_DAT_0044d770 + (float10)dVar2 +
             (float10)_DAT_0044d76c) * (float10)_DAT_0044d768;
    fVar13 = ROUND(fVar14);
    fVar14 = (float10)f2xm1(fVar14 - fVar13);
    fVar13 = (float10)fscale((float10)1 + fVar14,fVar13);
    fVar14 = (float10)fpatan(fVar13 * fVar13 * (float10)_DAT_0044d760,(float10)1);
    fVar15 = (float10)fpatan(fVar13 * (float10)_DAT_0044d758,(float10)1);
    fVar1 = (float)(fVar13 * (float10)_DAT_0044d750 +
                   fVar15 * (float10)_DAT_0044d6d0 + fVar14 * (float10)_DAT_0044d6e0);
    floor((double)fVar1);
    iVar4 = ftol();
    fVar1 = fVar1 - (float)iVar4;
    if (iVar4 < 0x1a) {
      local_a94 = fVar1 * *(float *)(&DAT_00451170 + iVar4 * 4) +
                  (_DAT_0044d74c - fVar1) * *(float *)(&DAT_0045116c + iVar4 * 4);
    }
    else {
      local_a94 = DAT_004511d0;
    }
    fVar14 = (float10)1.4426950408889634 *
             ((float10)((float)local_a90 * fVar3 + (float)dVar2) + (float10)_DAT_0044d76c) *
             (float10)_DAT_0044d768;
    fVar13 = ROUND(fVar14);
    fVar14 = (float10)f2xm1(fVar14 - fVar13);
    fVar13 = (float10)fscale((float10)1 + fVar14,fVar13);
    fVar14 = (float10)fpatan(fVar13 * fVar13 * (float10)_DAT_0044d760,(float10)1);
    fVar15 = (float10)fpatan(fVar13 * (float10)_DAT_0044d758,(float10)1);
    fVar1 = (float)(fVar13 * (float10)_DAT_0044d750 +
                   fVar15 * (float10)_DAT_0044d6d0 + fVar14 * (float10)_DAT_0044d6e0);
    floor((double)fVar1);
    iVar4 = ftol();
    fVar1 = fVar1 - (float)iVar4;
    fVar3 = DAT_004511d0;
    if (iVar4 < 0x1a) {
      fVar3 = fVar1 * *(float *)(&DAT_00451170 + iVar4 * 4) +
              (_DAT_0044d74c - fVar1) * *(float *)(&DAT_0045116c + iVar4 * 4);
    }
    if (local_a94 < fVar3) {
      fVar3 = local_a94;
    }
    *pfVar7 = fVar3;
    pfVar7 = pfVar7 + 1;
    iVar4 = local_a90 + 0x10;
    local_a90 = local_a90 + 1;
  } while (iVar4 < 0x38);
  iVar4 = 5;
  piVar8 = param_1;
  do {
    FUN_00433920(piVar8[1] + 8,*piVar8 + 8,(float *)(piVar8[2] + 8),0.5);
    piVar8 = piVar8 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_a94 = 0.0;
  pfVar7 = local_9a0;
  piVar8 = param_1;
  do {
    FUN_00433900((float *)(*piVar8 + 8),*(float *)((param_3 - (int)param_1) + (int)piVar8));
    pfVar10 = local_a80;
    pfVar12 = pfVar7;
    for (iVar4 = 0x38; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar12 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      pfVar12 = pfVar12 + 1;
    }
    FUN_00433900(pfVar7,(float)(int)local_a94 * _DAT_0044d748);
    FUN_004338d0(pfVar7,*piVar8 + 8);
    local_a94 = (float)((int)local_a94 + -1);
    piVar8 = piVar8 + 1;
    pfVar7 = pfVar7 + 0x38;
  } while (-0xb < (int)local_a94);
  pfVar7 = local_8c0;
  iVar4 = 10;
  piVar8 = param_1;
  do {
    piVar8 = piVar8 + 1;
    FUN_00433530(pfVar7,(int)(pfVar7 + -0x38));
    FUN_00433530((float *)(*piVar8 + 8),(int)pfVar7);
    pfVar7 = pfVar7 + 0x38;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = 0xb;
  do {
    iVar5 = 0;
    pfVar7 = (float *)*param_1 + 2;
    do {
      if (_DAT_0044d744 < *pfVar7) break;
      iVar5 = iVar5 + 1;
      pfVar7 = pfVar7 + 1;
    } while (iVar5 < 0x10);
    iVar6 = 0x37;
    *(float *)*param_1 = (float)iVar5;
    iVar5 = *param_1;
    pfVar7 = (float *)(iVar5 + 0xe4);
    do {
      if (_DAT_0044d744 < *pfVar7) break;
      iVar6 = iVar6 + -1;
      pfVar7 = pfVar7 + -1;
    } while (0x11 < iVar6);
    param_1 = param_1 + 1;
    iVar4 = iVar4 + -1;
    *(float *)(iVar5 + 4) = (float)iVar6;
    if (iVar4 == 0) {
      return;
    }
  } while( true );
}


