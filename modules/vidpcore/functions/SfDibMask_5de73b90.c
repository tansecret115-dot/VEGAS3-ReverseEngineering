/* Module: vidpcore.dll
   Function: SfDibMask
   Address: 5de73b90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfDibMask(void *,struct tagRECT *,long,struct tagRECT *,void *,long,struct tagRECT
   *,struct tagRECT *,long,struct tMASKPROP *) */

long SfDibMask(void *param_1,tagRECT *param_2,long param_3,tagRECT *param_4,void *param_5,
              long param_6,tagRECT *param_7,tagRECT *param_8,long param_9,tMASKPROP *param_10)

{
  byte *pbVar1;
  byte *pbVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  float *pfVar15;
  int iVar16;
  byte *pbVar17;
  float *pfVar18;
  int iVar19;
  int iVar20;
  int local_138;
  int local_134;
  int local_130;
  int local_12c [7];
  undefined1 local_110 [16];
  undefined1 local_100 [255];
  undefined1 local_1;
  
                    /* 0x73b90  18  ?SfDibMask@@YGJPAXPAUtagRECT@@J10J11JPAUtMASKPROP@@@Z */
  if (param_10 == (tMASKPROP *)0x0) {
    return -0x7ff8ffa9;
  }
  FUN_5de73b10(local_100,*(undefined4 *)(param_10 + 8),*(undefined4 *)(param_10 + 0xc),
               *(undefined4 *)(param_10 + 0x10),*(undefined4 *)(param_10 + 0x14),
               *(undefined4 *)(param_10 + 0x18),*(undefined4 *)(param_10 + 0x1c),
               *(undefined4 *)(param_10 + 0x20),*(undefined4 *)(param_10 + 0x24));
  lVar12 = FUN_5debc1e0(local_110,&local_130,local_12c,&local_134,&local_138,param_1,param_2,param_3
                        ,param_4,param_5,param_7,param_6,param_8,param_9);
  if (-1 < lVar12) {
    fVar7 = (float)*(double *)(param_10 + 8);
    fVar3 = (float)((float10)*(double *)(param_10 + 0x10) - (float10)*(double *)(param_10 + 8));
    fVar8 = (float)*(double *)(param_10 + 0x10);
    fVar9 = (float)*(double *)(param_10 + 0x18);
    fVar4 = (float)((float10)*(double *)(param_10 + 0x20) - (float10)*(double *)(param_10 + 0x18));
    iVar16 = -1;
    switch(*(undefined4 *)param_10) {
    case 0:
      iVar16 = 3;
      break;
    case 1:
      iVar16 = -1;
      break;
    case 2:
      iVar16 = 2;
      break;
    case 3:
      iVar16 = 1;
      break;
    case 4:
      iVar16 = 0;
    }
    if (param_9 == 4) {
      if (iVar16 == -1) {
        if (*(int *)(param_10 + 0x28) == 0) {
          iVar16 = 0;
          if (0 < local_12c[0]) {
            do {
              iVar19 = 0;
              if (0 < local_130) {
                pbVar17 = (byte *)(local_134 + 1);
                puVar14 = (undefined1 *)(local_138 + 2);
                do {
                  pbVar1 = pbVar17 + -1;
                  pbVar2 = pbVar17 + 1;
                  bVar5 = *pbVar17;
                  pbVar17 = pbVar17 + 4;
                  uVar10 = ((uint)*pbVar1 + (uint)*pbVar2 + (uint)bVar5) / 3;
                  iVar19 = iVar19 + 1;
                  puVar13 = local_100 + uVar10;
                  puVar14[-2] = local_100[uVar10];
                  puVar14[-1] = *puVar13;
                  *puVar14 = *puVar13;
                  puVar14[1] = *puVar13;
                  puVar14 = puVar14 + 4;
                } while (iVar19 < local_130);
              }
              local_138 = local_138 + param_3;
              local_134 = local_134 + param_6;
              iVar16 = iVar16 + 1;
            } while (iVar16 < local_12c[0]);
            return 0;
          }
        }
        else {
          iVar16 = 0;
          if (0 < local_12c[0]) {
            do {
              iVar19 = 0;
              if (0 < local_130) {
                pbVar17 = (byte *)(local_134 + 1);
                puVar14 = (undefined1 *)(local_138 + 2);
                do {
                  pbVar1 = pbVar17 + -1;
                  pbVar2 = pbVar17 + 1;
                  bVar5 = *pbVar17;
                  pbVar17 = pbVar17 + 4;
                  puVar13 = &local_1 + -(((uint)*pbVar1 + (uint)*pbVar2 + (uint)bVar5) / 3);
                  iVar19 = iVar19 + 1;
                  puVar14[-2] = *puVar13;
                  puVar14[-1] = *puVar13;
                  *puVar14 = *puVar13;
                  puVar14[1] = *puVar13;
                  puVar14 = puVar14 + 4;
                } while (iVar19 < local_130);
              }
              local_138 = local_138 + param_3;
              local_134 = local_134 + param_6;
              iVar16 = iVar16 + 1;
            } while (iVar16 < local_12c[0]);
            return 0;
          }
        }
      }
      else if (*(int *)(param_10 + 0x28) == 0) {
        iVar19 = 0;
        if (0 < local_12c[0]) {
          do {
            iVar20 = 0;
            if (0 < local_130) {
              pbVar17 = (byte *)(iVar16 + local_134);
              puVar14 = (undefined1 *)(local_138 + 2);
              do {
                iVar20 = iVar20 + 1;
                bVar5 = *pbVar17;
                pbVar17 = pbVar17 + 4;
                puVar13 = local_100 + bVar5;
                puVar14[-2] = local_100[bVar5];
                puVar14[-1] = *puVar13;
                *puVar14 = *puVar13;
                puVar14[1] = *puVar13;
                puVar14 = puVar14 + 4;
              } while (iVar20 < local_130);
            }
            local_138 = local_138 + param_3;
            local_134 = local_134 + param_6;
            iVar19 = iVar19 + 1;
          } while (iVar19 < local_12c[0]);
          return 0;
        }
      }
      else {
        iVar19 = 0;
        if (0 < local_12c[0]) {
          do {
            iVar20 = 0;
            if (0 < local_130) {
              pbVar17 = (byte *)(iVar16 + local_134);
              puVar14 = (undefined1 *)(local_138 + 2);
              do {
                bVar5 = *pbVar17;
                pbVar17 = pbVar17 + 4;
                puVar13 = &local_1 + -(uint)bVar5;
                iVar20 = iVar20 + 1;
                puVar14[-2] = *puVar13;
                puVar14[-1] = *puVar13;
                *puVar14 = *puVar13;
                puVar14[1] = *puVar13;
                puVar14 = puVar14 + 4;
              } while (iVar20 < local_130);
            }
            local_138 = local_138 + param_3;
            local_134 = local_134 + param_6;
            iVar19 = iVar19 + 1;
          } while (iVar19 < local_12c[0]);
          return 0;
        }
      }
    }
    else if (iVar16 == -1) {
      if (*(int *)(param_10 + 0x28) == 0) {
        iVar16 = 0;
        if (0 < local_12c[0]) {
          do {
            iVar19 = 0;
            if (0 < local_130) {
              pfVar18 = (float *)(local_134 + 4);
              pfVar15 = (float *)(local_138 + 8);
              do {
                fVar6 = (pfVar18[-1] + pfVar18[1] + *pfVar18) * _DAT_5df231d8;
                fVar11 = _DAT_5df205cc;
                if ((fVar7 < fVar6) && (fVar11 = _DAT_5df205c8, fVar6 < fVar8)) {
                  fVar11 = (fVar6 - fVar7) / fVar3;
                }
                iVar19 = iVar19 + 1;
                pfVar18 = pfVar18 + 4;
                fVar6 = fVar11 * fVar4 + fVar9;
                pfVar15[-2] = fVar6;
                pfVar15[-1] = fVar6;
                *pfVar15 = fVar6;
                pfVar15[1] = fVar6;
                pfVar15 = pfVar15 + 4;
              } while (iVar19 < local_130);
            }
            local_138 = local_138 + param_3;
            local_134 = local_134 + param_6;
            iVar16 = iVar16 + 1;
          } while (iVar16 < local_12c[0]);
          return 0;
        }
      }
      else {
        iVar16 = 0;
        if (0 < local_12c[0]) {
          do {
            iVar19 = 0;
            if (0 < local_130) {
              pfVar18 = (float *)(local_134 + 4);
              pfVar15 = (float *)(local_138 + 8);
              do {
                fVar6 = _DAT_5df205c8 - (pfVar18[-1] + pfVar18[1] + *pfVar18) * _DAT_5df231d8;
                fVar11 = _DAT_5df205cc;
                if ((fVar7 < fVar6) && (fVar11 = _DAT_5df205c8, fVar6 < fVar8)) {
                  fVar11 = (fVar6 - fVar7) / fVar3;
                }
                iVar19 = iVar19 + 1;
                pfVar18 = pfVar18 + 4;
                fVar6 = fVar11 * fVar4 + fVar9;
                pfVar15[-2] = fVar6;
                pfVar15[-1] = fVar6;
                *pfVar15 = fVar6;
                pfVar15[1] = fVar6;
                pfVar15 = pfVar15 + 4;
              } while (iVar19 < local_130);
            }
            local_138 = local_138 + param_3;
            local_134 = local_134 + param_6;
            iVar16 = iVar16 + 1;
          } while (iVar16 < local_12c[0]);
          return 0;
        }
      }
    }
    else if (*(int *)(param_10 + 0x28) == 0) {
      iVar19 = 0;
      if (0 < local_12c[0]) {
        do {
          iVar20 = 0;
          if (0 < local_130) {
            pfVar18 = (float *)(local_134 + iVar16 * 4);
            pfVar15 = (float *)(local_138 + 8);
            do {
              fVar6 = *pfVar18;
              fVar11 = _DAT_5df205cc;
              if ((fVar7 < fVar6) && (fVar11 = _DAT_5df205c8, fVar6 < fVar8)) {
                fVar11 = (fVar6 - fVar7) / fVar3;
              }
              iVar20 = iVar20 + 1;
              pfVar18 = pfVar18 + 4;
              fVar6 = fVar11 * fVar4 + fVar9;
              pfVar15[-2] = fVar6;
              pfVar15[-1] = fVar6;
              *pfVar15 = fVar6;
              pfVar15[1] = fVar6;
              pfVar15 = pfVar15 + 4;
            } while (iVar20 < local_130);
          }
          local_138 = local_138 + param_3;
          local_134 = local_134 + param_6;
          iVar19 = iVar19 + 1;
        } while (iVar19 < local_12c[0]);
      }
    }
    else {
      iVar19 = 0;
      if (0 < local_12c[0]) {
        do {
          iVar20 = 0;
          if (0 < local_130) {
            pfVar18 = (float *)(local_134 + iVar16 * 4);
            pfVar15 = (float *)(local_138 + 8);
            do {
              fVar6 = _DAT_5df205c8 - *pfVar18;
              fVar11 = _DAT_5df205cc;
              if ((fVar7 < fVar6) && (fVar11 = _DAT_5df205c8, fVar6 < fVar8)) {
                fVar11 = (fVar6 - fVar7) / fVar3;
              }
              iVar20 = iVar20 + 1;
              pfVar18 = pfVar18 + 4;
              fVar6 = fVar11 * fVar4 + fVar9;
              pfVar15[-2] = fVar6;
              pfVar15[-1] = fVar6;
              *pfVar15 = fVar6;
              pfVar15[1] = fVar6;
              pfVar15 = pfVar15 + 4;
            } while (iVar20 < local_130);
          }
          local_138 = local_138 + param_3;
          local_134 = local_134 + param_6;
          iVar19 = iVar19 + 1;
        } while (iVar19 < local_12c[0]);
        return 0;
      }
    }
    lVar12 = 0;
  }
  return lVar12;
}


