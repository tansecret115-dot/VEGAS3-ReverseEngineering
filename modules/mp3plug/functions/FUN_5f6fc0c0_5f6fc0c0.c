/* Module: mp3plug.dll
   Function: FUN_5f6fc0c0
   Address: 5f6fc0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f6fc0c0(undefined4 param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint local_1c;
  
  pfVar10 = (float *)&DAT_5f746cd4;
  fVar3 = param_2[0x10] * DAT_5f746cdc;
  param_2[0x10] = *param_2 - fVar3;
  local_1c = 0x20;
  *param_2 = fVar3 + *param_2;
  uVar15 = 0x10;
  do {
    uVar12 = uVar15;
    uVar15 = (int)uVar12 >> 1;
    iVar14 = 0;
    do {
      iVar16 = iVar14 + uVar15;
      iVar13 = local_1c + iVar14;
      pfVar1 = pfVar10 + 1;
      fVar3 = *pfVar10;
      fVar4 = param_2[iVar14];
      fVar5 = *pfVar10;
      pfVar2 = pfVar10 + 1;
      pfVar10 = pfVar10 + 2;
      fVar6 = *pfVar1 * param_2[0x20 - iVar16] + param_2[iVar16] * fVar3;
      fVar7 = fVar5 * param_2[0x20 - iVar16] - param_2[iVar16] * *pfVar2;
      iVar11 = (0x20 - iVar16) - uVar15;
      fVar3 = param_2[iVar11];
      fVar5 = param_2[iVar11];
      param_2[0x20 - iVar16] = param_2[iVar14] - fVar6;
      param_2[iVar16] = fVar7 + fVar5;
      param_2[iVar14] = fVar4 + fVar6;
      param_2[iVar11] = fVar3 - fVar7;
      iVar14 = iVar13;
    } while (iVar13 < 0x20);
    if (uVar12 != 2) {
      iVar14 = 0;
      do {
        fVar3 = *pfVar10;
        fVar4 = pfVar10[1];
        pfVar10 = pfVar10 + 2;
        iVar16 = 1;
        if (1 < uVar15) {
          iVar13 = iVar14;
          do {
            iVar13 = iVar13 + 1;
            iVar11 = (uVar12 + iVar14) - iVar16;
            iVar16 = iVar16 + 1;
            fVar8 = param_2[iVar11] * fVar3 + param_2[0x20 - iVar11] * fVar4;
            fVar5 = param_2[iVar13];
            fVar9 = param_2[0x20 - iVar11] * fVar3 - param_2[iVar11] * fVar4;
            fVar6 = param_2[0x20 - iVar13];
            fVar7 = param_2[0x20 - iVar13];
            param_2[0x20 - iVar11] = param_2[iVar13] - fVar8;
            param_2[iVar11] = -fVar6 - fVar9;
            param_2[iVar13] = fVar8 + fVar5;
            param_2[0x20 - iVar13] = fVar7 - fVar9;
          } while (iVar16 < (int)uVar15);
        }
        iVar14 = iVar14 + local_1c;
      } while (iVar14 < 0x20);
    }
    local_1c = uVar12;
  } while (1 < uVar15);
  uVar15 = 0;
  iVar14 = 1;
  do {
    uVar15 = uVar15 ^ 0x10;
    uVar12 = 0x10;
    if (uVar15 < 0x10) {
      do {
        uVar12 = (int)uVar12 >> 1;
        uVar15 = uVar15 ^ uVar12;
      } while (uVar15 < uVar12);
    }
    if (iVar14 < (int)uVar15) {
      fVar3 = param_2[iVar14];
      param_2[iVar14] = param_2[uVar15];
      param_2[uVar15] = fVar3;
    }
    iVar14 = iVar14 + 1;
  } while (iVar14 < 0x1f);
  return;
}


