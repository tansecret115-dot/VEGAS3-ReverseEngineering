/* Module: mp3plug.dll
   Function: FUN_5f6d19c0
   Address: 5f6d19c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6d19c0(float param_1,int param_2,int *param_3,int *param_4,undefined4 *param_5)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint local_9c;
  uint uStack_98;
  uint local_8c;
  uint uStack_88;
  uint local_7c;
  uint uStack_78;
  uint local_6c;
  uint uStack_68;
  int local_60;
  int local_54;
  uint local_38;
  
  if (param_3 == (int *)0x0) {
    param_3 = &DAT_5f73f9e0;
  }
  *param_4 = 0;
  if (param_3[3] == 0) {
    iVar5 = param_2 + -1;
  }
  else {
    iVar5 = 0;
  }
  for (; iVar5 < param_2; iVar5 = iVar5 + 1) {
    iVar10 = 0;
    iVar14 = DAT_5f73fa24;
    while (iVar14 != 0) {
      iVar14 = (&DAT_5f73fa24)[iVar10];
      if (iVar5 == 0) {
        iVar6 = 8000;
      }
      else {
        iVar6 = 20000;
      }
      if (iVar6 <= iVar14) {
        if (iVar5 == 0) {
          iVar6 = 0x1f400;
        }
        else {
          iVar6 = 320000;
        }
        if (iVar14 <= iVar6) {
          iVar6 = iVar5 * 0x16c;
          local_60 = 0;
          if ((int)(&DAT_5f73fa90)[iVar5 * 0x5b] < 0x4e201) {
            iVar7 = 1;
            iVar12 = (&DAT_5f73fa90)[iVar5 * 0x5b];
            iVar8 = 0;
            while (local_60 = iVar8, iVar12 <= iVar14) {
              iVar8 = iVar7 + 1;
              iVar12 = *(int *)(iVar6 + 0x5f73fa74 + iVar8 * 0x1c);
              local_60 = iVar7;
              if ((320000 < iVar12) || (iVar14 < iVar12)) break;
              iVar7 = iVar7 + 2;
              iVar12 = *(int *)(iVar6 + 0x5f73fa74 + iVar7 * 0x1c);
              local_60 = iVar8;
              if (320000 < iVar12) break;
            }
          }
          iVar14 = -0x24;
          do {
            dVar2 = (double)*(float *)((int)&DAT_5f73fa24 + iVar14);
            if (((*(float *)((int)&DAT_5f73fa24 + iVar14) <= param_1) &&
                (iVar12 = local_60 * 0x1c + iVar6,
                (double)*(float *)(&DAT_5f73fa78 + iVar12) <= dVar2)) &&
               (dVar2 <= (double)*(float *)(&DAT_5f73fa80 + iVar12))) {
              if (*param_3 < 7) {
                dVar3 = (double)param_1;
                uStack_78 = (uint)((ulonglong)dVar3 >> 0x20);
                local_7c = SUB84(dVar3,0);
                uVar13 = uStack_78 >> 0x14 & 0x7ff;
                if (uVar13 < 0x3ff) {
                  uVar13 = 0;
                }
                else {
                  uVar13 = (uStack_78 << 0xb | local_7c >> 0x15 | 0x80000000) >>
                           (0x1eU - (char)uVar13 & 0x1f);
                  if ((longlong)dVar3 < 0) {
                    uVar13 = -uVar13;
                  }
                }
                uStack_68 = (uint)((ulonglong)dVar2 >> 0x20);
                local_6c = SUB84(dVar2,0);
                uVar11 = uStack_68 >> 0x14 & 0x7ff;
                if (uVar11 < 0x3ff) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = (uStack_68 << 0xb | local_6c >> 0x15 | 0x80000000) >>
                           (0x1eU - (char)uVar11 & 0x1f);
                  if ((longlong)dVar2 < 0) {
                    uVar11 = -uVar11;
                  }
                }
                if ((int)uVar13 % (int)uVar11 != 0) goto LAB_5f6d1b58;
              }
              *param_4 = *param_4 + 1;
            }
LAB_5f6d1b58:
            iVar14 = iVar14 + 4;
          } while (iVar14 != 0);
        }
      }
      piVar1 = &DAT_5f73fa28 + iVar10;
      iVar10 = iVar10 + 1;
      iVar14 = *piVar1;
    }
  }
  puVar9 = FUN_5f6d9720(*param_4,0x28);
  *param_5 = puVar9;
  *param_4 = 0;
  if (param_3[3] == 0) {
    iVar5 = param_2 + -1;
  }
  else {
    iVar5 = 0;
  }
  do {
    if (param_2 <= iVar5) {
      return 0;
    }
    iVar10 = 0;
    iVar14 = DAT_5f73fa24;
    while (iVar14 != 0) {
      iVar14 = (&DAT_5f73fa24)[iVar10];
      if (iVar5 == 0) {
        iVar6 = 8000;
      }
      else {
        iVar6 = 20000;
      }
      if (iVar6 <= iVar14) {
        if (iVar5 == 0) {
          iVar6 = 0x1f400;
        }
        else {
          iVar6 = 320000;
        }
        if (iVar14 <= iVar6) {
          local_54 = 0;
          if ((int)(&DAT_5f73fa90)[iVar5 * 0x5b] < 0x4e201) {
            iVar6 = (&DAT_5f73fa90)[iVar5 * 0x5b];
            local_54 = 0;
            iVar12 = 1;
            do {
              iVar8 = iVar12;
              if (iVar14 < iVar6) break;
              iVar6 = *(int *)(iVar5 * 0x16c + 0x5f73fa74 + (iVar8 + 1) * 0x1c);
              iVar12 = iVar8 + 1;
              local_54 = iVar8;
            } while (iVar6 < 0x4e201);
          }
          iVar6 = -0x24;
          do {
            uVar4 = *(undefined4 *)((int)&DAT_5f73fa24 + iVar6);
            dVar2 = (double)*(float *)((int)&DAT_5f73fa24 + iVar6);
            if (((*(float *)((int)&DAT_5f73fa24 + iVar6) <= param_1) &&
                (iVar12 = local_54 * 0x1c + iVar5 * 0x16c,
                (double)*(float *)(&DAT_5f73fa78 + iVar12) <= dVar2)) &&
               (dVar2 <= (double)*(float *)(&DAT_5f73fa80 + iVar12))) {
              if (*param_3 < 7) {
                dVar3 = (double)param_1;
                uStack_98 = (uint)((ulonglong)dVar3 >> 0x20);
                local_9c = SUB84(dVar3,0);
                uVar13 = uStack_98 >> 0x14 & 0x7ff;
                if (uVar13 < 0x3ff) {
                  uVar13 = 0;
                }
                else {
                  uVar13 = (uStack_98 << 0xb | local_9c >> 0x15 | 0x80000000) >>
                           (0x1eU - (char)uVar13 & 0x1f);
                  if ((longlong)dVar3 < 0) {
                    uVar13 = -uVar13;
                  }
                }
                uStack_88 = (uint)((ulonglong)dVar2 >> 0x20);
                local_8c = SUB84(dVar2,0);
                uVar11 = uStack_88 >> 0x14 & 0x7ff;
                if (uVar11 < 0x3ff) {
                  local_38 = 0;
                }
                else {
                  local_38 = (uStack_88 << 0xb | local_8c >> 0x15 | 0x80000000) >>
                             (0x1eU - (char)uVar11 & 0x1f);
                  if ((longlong)dVar2 < 0) {
                    local_38 = -local_38;
                  }
                }
                if ((int)uVar13 % (int)local_38 != 0) goto LAB_5f6d1e62;
              }
              if (puVar9 != (undefined4 *)0x0) {
                puVar9[*param_4 * 10] = iVar5 + 1;
                puVar9[*param_4 * 10 + 1] = uVar4;
                puVar9[*param_4 * 10 + 2] = iVar14;
                if (dVar2 == (double)*(float *)(iVar12 + 0x5f73fa7c)) {
                  puVar9[*param_4 * 10 + 3] = 1;
                }
                else {
                  puVar9[*param_4 * 10 + 3] = 0;
                }
                if ((*(int *)(iVar12 + 0x5f73fa84) == 0) || (param_3[1] != 0)) {
                  uVar13 = 0;
                }
                else {
                  uVar13 = 2;
                }
                puVar9[*param_4 * 10 + 4] = uVar13 | *(int *)(iVar12 + 0x5f73fa88) != 0;
                if (*param_3 < 3) {
                  puVar9[*param_4 * 10 + 6] = 0;
                }
                else if (*param_3 < 8) {
                  puVar9[*param_4 * 10 + 6] = *(undefined4 *)(iVar12 + 0x5f73fa8c);
                }
                else {
                  puVar9[*param_4 * 10 + 6] = 1;
                }
              }
              *param_4 = *param_4 + 1;
            }
LAB_5f6d1e62:
            iVar6 = iVar6 + 4;
          } while (iVar6 != 0);
        }
      }
      piVar1 = &DAT_5f73fa28 + iVar10;
      iVar10 = iVar10 + 1;
      iVar14 = *piVar1;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}


