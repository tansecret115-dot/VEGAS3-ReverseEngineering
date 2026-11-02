/* Module: sfppack2.dll
   Function: FUN_5cd339e0
   Address: 5cd339e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_5cd339e0(undefined4 *param_1,float *param_2,uint param_3,float param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  float local_20;
  float local_1c;
  uint local_10;
  
  uVar8 = param_3;
  if (param_3 == 0x1000) {
    FUN_5cd3ae50((int)param_2);
  }
  else if (param_3 == 0x800) {
    FUN_5cd3ae00((int)param_2);
  }
  else if (param_3 == 0x400) {
    FUN_5cd3adb0((int)param_2);
  }
  else if (param_3 == 0x200) {
    FUN_5cd3ad60((int)param_2);
  }
  else {
    uVar15 = 0;
    bVar16 = param_3 != 0;
    param_3 = 0;
    pfVar13 = param_2;
    if (bVar16) {
      do {
        uVar14 = uVar8;
        if (param_3 < uVar15) {
          fVar2 = param_2[uVar15 * 2];
          fVar3 = param_2[uVar15 * 2 + 1];
          param_2[uVar15 * 2] = *pfVar13;
          param_2[uVar15 * 2 + 1] = pfVar13[1];
          *pfVar13 = fVar2;
          pfVar13[1] = fVar3;
        }
        while ((uVar14 = uVar14 >> 1, uVar14 != 0 && (uVar14 <= uVar15))) {
          uVar15 = uVar15 - uVar14;
        }
        param_3 = param_3 + 1;
        uVar15 = uVar15 + uVar14;
        pfVar13 = pfVar13 + 2;
      } while (param_3 < uVar8);
    }
  }
  iVar9 = FUN_5cd264b0(param_1,1);
  if (iVar9 != 0) {
    FUN_5cd33170((int)param_2,uVar8,_DAT_5cd59348,_DAT_5cd5934c);
    iVar9 = FUN_5cd264b0(param_1,2);
    if (iVar9 == 0) {
      return false;
    }
    uVar15 = 4;
    param_3 = 2;
    if (0x10 < uVar8) {
      pfVar13 = (float *)&DAT_5cd59358;
      uVar14 = uVar15;
      do {
        FUN_5cd33250((int)param_2,uVar8,uVar14,pfVar13[-2],pfVar13[-1],*pfVar13,pfVar13[1]);
        iVar9 = FUN_5cd264b0(param_1,2);
        if (iVar9 == 0) {
          return false;
        }
        pfVar13 = pfVar13 + 4;
        uVar15 = uVar14 << 2;
        param_3 = param_3 + 2;
        uVar1 = uVar14 * 0x10;
        uVar14 = uVar15;
      } while (uVar1 < uVar8);
    }
    if (uVar15 * 4 - uVar8 == 0) {
      fVar2 = *(float *)(&UNK_5cd59344 + param_3 * 8);
      local_20 = 1.0;
      local_1c = 0.0;
      if (uVar15 == 1) {
        if (uVar8 != 0) {
          uVar15 = uVar8 + 1 >> 1;
          pfVar13 = param_2 + 3;
          do {
            fVar2 = pfVar13[-1];
            fVar3 = *pfVar13;
            uVar15 = uVar15 - 1;
            pfVar13[-1] = pfVar13[-3] - fVar2;
            *pfVar13 = pfVar13[-2] - fVar3;
            pfVar13[-3] = fVar2 + pfVar13[-3];
            pfVar13[-2] = fVar3 + pfVar13[-2];
            pfVar13 = pfVar13 + 4;
          } while (uVar15 != 0);
        }
      }
      else {
        fVar3 = *(float *)(&UNK_5cd59340 + param_3 * 8) + _DAT_5cd5344c;
        pfVar13 = param_2 + 2;
        pfVar10 = param_2 + uVar15 * 2 + 3;
        local_10 = 0;
        while( true ) {
          fVar6 = fVar3 * local_20 - local_1c * fVar2;
          fVar7 = local_20 * fVar2 + fVar3 * local_1c;
          if (local_10 < uVar8) {
            pfVar11 = pfVar10;
            pfVar12 = pfVar13;
            uVar14 = local_10;
            do {
              uVar14 = uVar14 + uVar15 * 2;
              fVar4 = local_20 * pfVar11[-3] - local_1c * pfVar11[-2];
              fVar5 = local_1c * pfVar11[-3] + local_20 * pfVar11[-2];
              pfVar11[-3] = pfVar12[-2] - fVar4;
              pfVar11[-2] = pfVar12[-1] - fVar5;
              pfVar12[-2] = fVar4 + pfVar12[-2];
              pfVar12[-1] = fVar5 + pfVar12[-1];
              fVar5 = fVar6 * pfVar11[-1] - fVar7 * *pfVar11;
              fVar4 = fVar6 * *pfVar11 + fVar7 * pfVar11[-1];
              pfVar11[-1] = *pfVar12 - fVar5;
              *pfVar11 = pfVar12[1] - fVar4;
              pfVar11 = pfVar11 + uVar15 * 4;
              *pfVar12 = fVar5 + *pfVar12;
              pfVar12[1] = fVar4 + pfVar12[1];
              pfVar12 = pfVar12 + uVar15 * 4;
            } while (uVar14 < uVar8);
          }
          local_10 = local_10 + 2;
          pfVar13 = pfVar13 + 4;
          pfVar10 = pfVar10 + 4;
          if (uVar15 <= local_10) break;
          local_20 = fVar3 * fVar6 - fVar7 * fVar2;
          local_1c = fVar6 * fVar2 + fVar3 * fVar7;
        }
      }
      iVar9 = FUN_5cd264b0(param_1,1);
      if (iVar9 == 0) {
        return false;
      }
      param_3 = param_3 + 1;
    }
    FUN_5cd34640(param_2,uVar8,*(float *)(&UNK_5cd59340 + param_3 * 8),
                 *(float *)(&UNK_5cd59344 + param_3 * 8),param_4 / (float)(uVar8 * 2));
    iVar9 = FUN_5cd264b0(param_1,1);
    return iVar9 != 0;
  }
  return false;
}


