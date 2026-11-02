/* Module: espr3260.dll
   Function: FUN_632f85b0
   Address: 632f85b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_632f85b0(float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  int *piVar10;
  float10 fVar11;
  float10 fVar12;
  float local_168 [16];
  float local_128 [16];
  float local_e8 [15];
  float local_ac;
  float local_a8 [15];
  float local_6c;
  float local_68 [16];
  int local_28 [4];
  int local_18;
  int local_14;
  float local_c;
  int local_8;
  
  pfVar8 = local_e8;
  local_8 = 0xf;
  do {
    fVar11 = (float10)_CIacos();
    *pfVar8 = (float)(fVar11 * (float10)_DAT_632fa5f8);
    pfVar8 = pfVar8 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  fVar11 = (float10)_CIacos();
  pfVar4 = (float *)&DAT_632fc5c0;
  local_ac = (float)((float10)_DAT_632fa608 - fVar11 * (float10)_DAT_632fa600);
  pfVar8 = param_1;
  do {
    pfVar6 = local_e8;
    iVar7 = 0x10;
    fVar3 = _DAT_632fa5f4;
    do {
      fVar1 = *pfVar4;
      fVar2 = *pfVar6;
      pfVar4 = pfVar4 + 1;
      pfVar6 = pfVar6 + 1;
      iVar7 = iVar7 + -1;
      fVar3 = fVar1 * fVar2 + fVar3;
    } while (iVar7 != 0);
    *pfVar8 = fVar3;
    pfVar8 = pfVar8 + 1;
  } while ((int)pfVar4 < 0x632fc9c0);
  local_c = 1e+30;
  local_8 = 0;
  pfVar8 = (float *)&DAT_632ff3c0;
  do {
    fVar3 = *pfVar8;
    local_28[0] = local_8;
    iVar7 = 0;
    do {
      iVar5 = iVar7 + 4;
      *(float *)((int)local_68 + iVar7) =
           ((*(float *)((int)param_1 + iVar7) - *(float *)((int)&DAT_632fc580 + iVar7)) -
           *(float *)((int)&DAT_632ffae8 + iVar7) * *pfVar8) / (_DAT_632fa610 - fVar3);
      iVar7 = iVar5;
    } while (iVar5 < 0x40);
    local_28[1] = FUN_632f8520(local_68,(float *)&DAT_632fcdc0,3,0x80);
    local_28[2] = FUN_632f8520(local_68 + 3,(float *)&DAT_632fd3c0,3,0x100);
    local_28[3] = FUN_632f8520(local_68 + 6,(float *)&DAT_632fdfc0,3,0x80);
    local_18 = FUN_632f8520(local_68 + 9,(float *)&DAT_632fe5c0,3,0x80);
    local_14 = FUN_632f8520(local_68 + 0xc,(float *)&DAT_632febc0,4,0x80);
    fVar3 = *pfVar8;
    iVar7 = 0;
    do {
      iVar5 = iVar7 + 4;
      *(float *)((int)local_128 + iVar7) =
           *(float *)((int)&DAT_632ffae8 + iVar7) * *pfVar8 +
           *(float *)((int)local_68 + iVar7) * (_DAT_632fa610 - fVar3) +
           *(float *)((int)&DAT_632fc580 + iVar7);
      iVar7 = iVar5;
    } while (iVar5 < 0x40);
    FUN_632f88d0(local_128,50.0,0x10);
    pfVar4 = local_128;
    iVar7 = 0x10;
    fVar3 = _DAT_632fa5f4;
    do {
      fVar1 = *(float *)(((int)param_1 - (int)local_128) + (int)pfVar4) - *pfVar4;
      pfVar4 = pfVar4 + 1;
      iVar7 = iVar7 + -1;
      fVar3 = fVar1 * fVar1 + fVar3;
    } while (iVar7 != 0);
    if (fVar3 < local_c) {
      pfVar4 = local_128;
      pfVar6 = local_a8;
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pfVar6 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar6 = pfVar6 + 1;
      }
      local_c = fVar3;
      pfVar4 = local_68;
      pfVar6 = local_168;
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pfVar6 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar6 = pfVar6 + 1;
      }
      piVar9 = local_28;
      piVar10 = param_2;
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar10 = *piVar9;
        piVar9 = piVar9 + 1;
        piVar10 = piVar10 + 1;
      }
    }
    pfVar8 = pfVar8 + 1;
    local_8 = local_8 + 1;
  } while ((int)pfVar8 < 0x632ff3c8);
  pfVar6 = (float *)&DAT_632fc9c0;
  pfVar8 = local_168;
  pfVar4 = (float *)&DAT_632ffae8;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar4 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar4 = pfVar4 + 1;
  }
  pfVar8 = local_a8;
  pfVar4 = local_e8;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar4 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar4 = pfVar4 + 1;
  }
  pfVar8 = local_a8;
  do {
    pfVar4 = local_e8;
    iVar7 = 0x10;
    fVar3 = _DAT_632fa5f4;
    do {
      fVar1 = *pfVar4;
      fVar2 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar4 = pfVar4 + 1;
      iVar7 = iVar7 + -1;
      fVar3 = fVar1 * fVar2 + fVar3;
    } while (iVar7 != 0);
    *pfVar8 = fVar3;
    pfVar8 = pfVar8 + 1;
  } while ((int)pfVar6 < 0x632fcdc0);
  FUN_632f88d0(local_a8,50.0,0xf);
  iVar7 = 0xf;
  pfVar8 = param_1;
  do {
    iVar7 = iVar7 + -1;
    fVar11 = (float10)fcos((float10)*(float *)(((int)local_a8 - (int)param_1) + (int)pfVar8) *
                           (float10)_DAT_632fa614);
    *pfVar8 = (float)fVar11;
    pfVar8 = pfVar8 + 1;
  } while (iVar7 != 0);
  fVar12 = (float10)fcos(((float10)local_6c - (float10)_DAT_632fa618) * (float10)_DAT_632fa61c);
  fVar11 = (float10)_DAT_632fa620;
  param_1[0xf] = (float)fVar12;
  if (fVar12 < fVar11) {
    param_1[0xf] = -0.8;
  }
  if (_DAT_632fa624 < param_1[0xf]) {
    param_1[0xf] = 0.5;
  }
  return;
}


