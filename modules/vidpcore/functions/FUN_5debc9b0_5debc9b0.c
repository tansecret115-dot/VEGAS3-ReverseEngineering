/* Module: vidpcore.dll
   Function: FUN_5debc9b0
   Address: 5debc9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5debc9b0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                int param_7,int param_8,int param_9,double *param_10)

{
  byte *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  double *pdVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  float *pfVar16;
  uint uVar17;
  uint uVar18;
  float *pfVar19;
  int iVar20;
  int local_2c;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  iVar13 = FUN_5debbfb0(&param_5,&param_4,&param_8,&param_6,param_1,param_2,param_3,param_4,param_5,
                        param_6,param_7,param_8,param_9);
  pdVar9 = param_10;
  if (iVar13 < 0) {
    return iVar13;
  }
  if (param_10 == (double *)0x0) {
    param_2 = 0;
    if (0 < param_4) {
      do {
        if (param_9 == 4) {
          iVar20 = 0;
          if (0 < param_5) {
            do {
              bVar12 = *(byte *)(param_6 + iVar20 * 4);
              pcVar3 = (char *)(param_6 + iVar20 * 4);
              pbVar1 = (byte *)(param_8 + iVar20 * 4);
              uVar14 = (uint)pbVar1[3];
              iVar15 = ((uint)*pbVar1 - (uint)bVar12) * uVar14;
              *pcVar3 = (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8) + bVar12;
              iVar15 = ((uint)pbVar1[1] - (uint)(byte)pcVar3[1]) * uVar14;
              pcVar3[1] = (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8) + pcVar3[1];
              iVar15 = ((uint)pbVar1[2] - (uint)(byte)pcVar3[2]) * uVar14;
              pcVar3[2] = (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8) + pcVar3[2];
              iVar15 = (uVar14 - (byte)pcVar3[3]) * uVar14;
              iVar20 = iVar20 + 1;
              pcVar3[3] = (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8) + pcVar3[3];
            } while (iVar20 < param_5);
          }
        }
        else {
          iVar20 = 0;
          if (0 < param_5) {
            iVar15 = 0;
            do {
              pfVar19 = (float *)(param_8 + iVar15);
              pfVar16 = (float *)(param_6 + iVar15);
              iVar20 = iVar20 + 1;
              iVar15 = iVar15 + 0x10;
              *pfVar16 = (*pfVar19 - *pfVar16) * pfVar19[3] + *pfVar16;
              pfVar16[1] = (pfVar19[1] - pfVar16[1]) * pfVar19[3] + pfVar16[1];
              pfVar16[2] = (pfVar19[2] - pfVar16[2]) * pfVar19[3] + pfVar16[2];
              pfVar16[3] = (pfVar19[3] - pfVar16[3]) * pfVar19[3] + pfVar16[3];
            } while (iVar20 < param_5);
          }
        }
        param_6 = param_6 + param_3;
        param_8 = param_8 + param_7;
        param_2 = param_2 + 1;
      } while (param_2 < param_4);
    }
  }
  else {
    uVar10 = ftol();
    uVar11 = ftol();
    bVar12 = ftol();
    dVar4 = *pdVar9;
    dVar5 = pdVar9[1];
    local_2c = 0;
    dVar6 = pdVar9[2];
    if (0 < param_4) {
      do {
        if (param_9 == 4) {
          iVar20 = 0;
          if (0 < param_5) {
            uVar17 = CONCAT11(bVar12,uVar11) & 0xff;
            uVar14 = CONCAT12(bVar12,CONCAT11(uVar11,uVar10)) & 0xff;
            do {
              pbVar1 = (byte *)(param_6 + iVar20 * 4);
              pbVar2 = (byte *)(param_8 + iVar20 * 4);
              uVar18 = (uint)pbVar2[3];
              local_24 = (uint)*pbVar1;
              iVar15 = (uVar14 - local_24) * uVar18;
              iVar15 = (uint)*pbVar2 +
                       local_24 + (((int)((iVar15 >> 0x1f & 0xffU) + iVar15) >> 8) - uVar14);
              if (iVar15 < 0) {
                iVar15 = 0;
              }
              else if (0xff < iVar15) {
                iVar15 = 0xff;
              }
              *pbVar1 = (byte)iVar15;
              local_20 = (uint)pbVar1[1];
              iVar15 = (uVar17 - local_20) * uVar18;
              iVar15 = ((((int)(iVar15 + (iVar15 >> 0x1f & 0xffU)) >> 8) + (uint)pbVar2[1]) - uVar17
                       ) + local_20;
              if (iVar15 < 0) {
                iVar15 = 0;
              }
              else if (0xff < iVar15) {
                iVar15 = 0xff;
              }
              pbVar1[1] = (byte)iVar15;
              local_1c = (uint)pbVar1[2];
              iVar15 = (bVar12 - local_1c) * uVar18;
              iVar15 = ((((int)(iVar15 + (iVar15 >> 0x1f & 0xffU)) >> 8) + (uint)pbVar2[2]) -
                       (uint)bVar12) + local_1c;
              if (iVar15 < 0) {
                iVar15 = 0;
              }
              else if (0xff < iVar15) {
                iVar15 = 0xff;
              }
              pbVar1[2] = (byte)iVar15;
              iVar20 = iVar20 + 1;
            } while (iVar20 < param_5);
          }
        }
        else {
          iVar20 = 0;
          if (0 < param_5) {
            iVar15 = 0;
            do {
              pfVar19 = (float *)(param_8 + iVar15);
              pfVar16 = (float *)(iVar15 + param_6);
              fVar7 = ((*(float *)(iVar15 + param_6) + *pfVar19) - (float)dVar4) +
                      ((float)dVar4 - *(float *)(iVar15 + param_6)) * pfVar19[3];
              fVar8 = _DAT_5df205cc;
              if ((_DAT_5df205cc <= fVar7) && (fVar8 = fVar7, _DAT_5df205c8 < fVar7)) {
                fVar8 = _DAT_5df205c8;
              }
              *pfVar16 = fVar8;
              fVar7 = ((pfVar16[1] + pfVar19[1]) - (float)dVar5) +
                      ((float)dVar5 - pfVar16[1]) * pfVar19[3];
              fVar8 = _DAT_5df205cc;
              if ((_DAT_5df205cc <= fVar7) && (fVar8 = fVar7, _DAT_5df205c8 < fVar7)) {
                fVar8 = _DAT_5df205c8;
              }
              pfVar16[1] = fVar8;
              fVar7 = ((pfVar16[2] + pfVar19[2]) - (float)dVar6) +
                      ((float)dVar6 - pfVar16[2]) * pfVar19[3];
              fVar8 = _DAT_5df205cc;
              if ((_DAT_5df205cc <= fVar7) && (fVar8 = fVar7, _DAT_5df205c8 < fVar7)) {
                fVar8 = _DAT_5df205c8;
              }
              pfVar16[2] = fVar8;
              iVar20 = iVar20 + 1;
              iVar15 = iVar15 + 0x10;
            } while (iVar20 < param_5);
          }
        }
        param_8 = param_8 + param_7;
        param_6 = param_6 + param_3;
        local_2c = local_2c + 1;
      } while (local_2c < param_4);
      return iVar13;
    }
  }
  return iVar13;
}


