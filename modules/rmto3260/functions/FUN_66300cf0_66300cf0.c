/* Module: rmto3260.dll
   Function: FUN_66300cf0
   Address: 66300cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_66300cf0(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  short sVar2;
  bool bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ushort uVar15;
  ushort uVar16;
  uint uVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  byte *pbVar20;
  ushort uVar21;
  uint uVar22;
  char *pcVar23;
  int local_1c;
  uint local_c;
  uint local_8;
  
  if (DAT_66311e00 != 1) {
    return 0xffffffff;
  }
  uVar21 = 0;
  uVar15 = 0;
  if (DAT_66311d9c != 0) {
    do {
      uVar16 = 0;
      if ((short)DAT_66311dfc != 0) {
        uVar22 = (uint)uVar21;
        do {
          uVar8 = DAT_66311dfc & 0xffff;
          uVar17 = (uint)uVar16;
          if (*(int *)(param_3 + ((int)(uVar17 + uVar22 * uVar8) / (int)(DAT_66311df8 & 0xffff)) * 4
                      ) == 0) {
            uVar15 = uVar15 + 1;
            *(undefined2 *)
             (DAT_66311e1c +
             ((int)(*(ushort *)(DAT_66311e04 + uVar22 * 2) * uVar8 + uVar17) / 0x26) * 2) = 0;
          }
          else {
            puVar19 = (undefined4 *)(param_1 + uVar17 + uVar22 * uVar8);
            puVar18 = (undefined4 *)
                      (*(ushort *)(DAT_66311e04 + uVar22 * 2) * uVar8 + param_2 + uVar17);
            for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar18 = *puVar19;
              puVar19 = puVar19 + 1;
              puVar18 = puVar18 + 1;
            }
            *(undefined2 *)puVar18 = *(undefined2 *)puVar19;
            *(undefined2 *)
             (DAT_66311e1c +
             ((int)((uint)*(ushort *)(DAT_66311e04 + uVar22 * 2) * (DAT_66311dfc & 0xffff) + uVar17)
             / 0x26) * 2) = 1;
          }
          uVar16 = uVar16 + 0x26;
        } while (uVar16 < (ushort)DAT_66311dfc);
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 < DAT_66311d9c);
  }
  iVar9 = (int)((DAT_66311dfc & 0xffff) * (_DAT_66311d9c & 0xffff)) / 0x26;
  if ((float)iVar9 * _DAT_66308430 < (float)uVar15) {
    return 0xffffffff;
  }
  uVar22 = 0;
  if (0 < iVar9) {
    uVar8 = 0;
    do {
      uVar22 = uVar22 + 1;
      *(undefined2 *)(DAT_66311e20 + uVar8 * 2) = *(undefined2 *)(DAT_66311e1c + uVar8 * 2);
      uVar8 = uVar22 & 0xffff;
    } while ((int)uVar8 < (int)((DAT_66311dfc & 0xffff) * (_DAT_66311d9c & 0xffff)) / 0x26);
  }
  if (DAT_66311df0 != 0) {
    uVar22 = DAT_66311dfc & 0xffff;
    local_8 = 0;
    if (0 < (int)((_DAT_66311d9c & 0xffff) * uVar22) / 0x26) {
      uVar8 = 0;
      do {
        iVar9 = uVar8 * 2;
        if (*(short *)(DAT_66311e1c + iVar9) == 0) {
          bVar3 = false;
          local_1c = 0x40;
          uVar17 = (uVar8 * 0x26) / uVar22;
          uVar22 = local_8 - (uVar22 / 0x26) * uVar17;
          pcVar1 = (char *)(param_2 + uVar8 * 0x26);
          puVar19 = &DAT_66311da0;
          pcVar23 = pcVar1;
          for (iVar10 = 9; iVar10 != 0; iVar10 = iVar10 + -1) {
            *(undefined4 *)pcVar23 = *puVar19;
            puVar19 = puVar19 + 1;
            pcVar23 = pcVar23 + 4;
          }
          *(undefined2 *)pcVar23 = *(undefined2 *)puVar19;
          uVar8 = (uint)*(ushort *)(DAT_66311e14 + iVar9);
          do {
            if (*(int *)(param_3 + ((int)uVar8 / (int)(DAT_66311df8 & 0xffff)) * 4) == 0) {
              bVar3 = true;
            }
            uVar8 = uVar8 + 1;
            local_1c = local_1c + -1;
          } while (local_1c != 0);
          if (!bVar3) {
            local_c = 0;
            iVar10 = (_DAT_66311df0 & 0xffff) - 1;
            if (0 < iVar10) {
              uVar8 = 0;
              do {
                if (*(short *)(DAT_66311e1c +
                              ((uint)*(ushort *)
                                      (*(int *)(DAT_66311e18 + (uVar17 & 0xffff) * 4) + uVar8 * 2) *
                               ((DAT_66311dfc & 0xffff) / 0x26) + (uVar22 & 0xffff)) * 2) == 0) {
                  bVar3 = true;
                }
                local_c = local_c + 1;
                uVar8 = local_c & 0xffff;
              } while ((int)uVar8 < iVar10);
            }
            if (!bVar3) {
              local_c = 0;
              puVar19 = (undefined4 *)(param_1 + (uint)*(ushort *)(DAT_66311e14 + iVar9));
              puVar18 = DAT_66311e0c;
              for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
                *puVar18 = *puVar19;
                puVar19 = puVar19 + 1;
                puVar18 = puVar18 + 1;
              }
              if ((_DAT_66311df0 & 0xffff) != 1 && -1 < (int)((_DAT_66311df0 & 0xffff) - 1)) {
                uVar8 = 0;
                do {
                  FUN_66301730(DAT_66311e08,
                               (byte *)((uint)*(ushort *)
                                               (*(int *)(DAT_66311e18 + (uVar17 & 0xffff) * 4) +
                                               uVar8 * 2) * (DAT_66311dfc & 0xffff) + param_2 +
                                       (uVar22 & 0xffff) * 0x26),0x20);
                  iVar10 = 0;
                  iVar11 = 0x20;
                  do {
                    *(short *)(iVar10 + (int)DAT_66311e0c) =
                         *(short *)(iVar10 + (int)DAT_66311e0c) -
                         *(short *)(iVar10 + (int)DAT_66311e08);
                    iVar10 = iVar10 + 2;
                    iVar11 = iVar11 + -1;
                  } while (iVar11 != 0);
                  local_c = local_c + 1;
                  uVar8 = local_c & 0xffff;
                } while ((int)uVar8 < (int)((_DAT_66311df0 & 0xffff) - 1));
              }
              *(undefined2 *)(DAT_66311e20 + iVar9) = 1;
              FUN_66301650(pcVar1,(int)DAT_66311e0c,0x20);
            }
          }
        }
        uVar22 = DAT_66311dfc & 0xffff;
        local_8 = local_8 + 1;
        uVar8 = local_8 & 0xffff;
      } while ((int)uVar8 < (int)((_DAT_66311d9c & 0xffff) * uVar22) / 0x26);
    }
  }
  uVar22 = (int)((DAT_66311dfc & 0xffff) * (_DAT_66311d9c & 0xffff)) / 0x26;
  uVar15 = 0;
  iVar9 = DAT_66311e20;
  if (0 < (int)uVar22) {
    do {
      uVar8 = (uint)uVar15;
      sVar2 = *(short *)(iVar9 + uVar8 * 2);
      uVar21 = uVar15;
      while (sVar2 == 0) {
        uVar21 = uVar21 + 1;
        if (uVar21 == uVar22) break;
        sVar2 = *(short *)(iVar9 + (uint)uVar21 * 2);
      }
      uVar16 = uVar21 - uVar15;
      if (uVar16 != 0) {
        uVar6 = uVar15;
        uVar4 = uVar15 - 1;
        if (uVar15 != 0) {
          while( true ) {
            uVar17 = (uint)uVar15;
            sVar2 = *(short *)(iVar9 + -2 + uVar17 * 2);
            uVar6 = uVar15;
            while ((sVar2 == 0 && (uVar17 != 1))) {
              uVar6 = uVar6 - 1;
              uVar17 = (uint)uVar6;
              sVar2 = *(short *)(iVar9 + -2 + uVar17 * 2);
            }
            if (*(short *)(iVar9 + -2 + (uint)uVar6 * 2) == 0) break;
            uVar15 = uVar6 - 1;
            sVar2 = *(short *)(iVar9 + (uint)uVar15 * 2);
            while ((sVar2 == 1 && (uVar15 = uVar15 - 1, uVar15 != 0xffff))) {
              sVar2 = *(short *)(iVar9 + (uint)uVar15 * 2);
            }
            uVar15 = uVar15 + 1;
            uVar4 = uVar15;
            if (((int)(uint)uVar16 <= (int)((uint)uVar6 - (uint)uVar15)) ||
               (uVar6 = uVar15, uVar15 == 0)) goto LAB_663012ca;
          }
          uVar6 = 0;
          uVar4 = 0;
        }
LAB_663012ca:
        uVar15 = uVar21;
        uVar7 = uVar21;
        uVar5 = uVar21;
        if ((int)(uint)uVar21 < (int)uVar22) {
          while (uVar7 = uVar15, uVar5 = uVar21, (int)(uint)uVar15 <= (int)uVar22) {
            uVar17 = (uint)uVar15;
            sVar2 = *(short *)(iVar9 + uVar17 * 2);
            while ((sVar2 == 0 && (uVar17 + 1 != uVar22))) {
              uVar7 = uVar7 + 1;
              uVar17 = (uint)uVar7;
              sVar2 = *(short *)(iVar9 + uVar17 * 2);
            }
            if (*(short *)(iVar9 + (uint)uVar7 * 2) == 0) {
              uVar15 = 0;
              uVar7 = 0;
              uVar5 = 0;
              break;
            }
            uVar15 = uVar7 + 1;
            sVar2 = *(short *)(iVar9 + -2 + (uint)uVar15 * 2);
            while (sVar2 != 0) {
              uVar15 = uVar15 + 1;
              if (uVar15 - 1 == uVar22) break;
              sVar2 = *(short *)(iVar9 + -2 + (uint)uVar15 * 2);
            }
            uVar15 = uVar15 - 1;
            uVar5 = uVar7;
            if (((int)(uint)uVar16 <= (int)((uint)uVar15 - (uint)uVar7)) ||
               (uVar7 = uVar15, uVar5 = uVar15, (int)uVar22 <= (int)(uint)uVar15)) break;
          }
        }
        uVar17 = (uint)uVar6;
        iVar10 = uVar17 - uVar4;
        uVar22 = (uint)uVar16;
        if ((iVar10 < (int)uVar22) ||
           (uVar12 = (uint)uVar7, uVar7 = uVar5, (int)(uVar15 - uVar12) < (int)uVar22)) {
          iVar11 = (uint)uVar15 - (uint)uVar7;
          if (iVar11 < (int)uVar22) {
            if (iVar10 < (int)uVar22) {
              if ((int)uVar22 <= iVar11) goto LAB_663014a2;
              goto LAB_663014e0;
            }
            puVar19 = (undefined4 *)(param_2 + (uVar17 - uVar22) * 0x26);
            puVar18 = (undefined4 *)(param_2 + uVar8 * 0x26);
            for (uVar12 = uVar22 * 0x13 >> 1; uVar12 != 0; uVar12 = uVar12 - 1) {
              *puVar18 = *puVar19;
              puVar19 = puVar19 + 1;
              puVar18 = puVar18 + 1;
            }
            for (uVar17 = uVar22 * 0x26 & 3; iVar9 = DAT_66311e20, uVar17 != 0; uVar17 = uVar17 - 1)
            {
              *(undefined1 *)puVar18 = *(undefined1 *)puVar19;
              puVar19 = (undefined4 *)((int)puVar19 + 1);
              puVar18 = (undefined4 *)((int)puVar18 + 1);
            }
          }
          else {
LAB_663014a2:
            if (iVar10 < (int)uVar22) {
              puVar19 = (undefined4 *)(param_2 + (uint)uVar7 * 0x26);
              puVar18 = (undefined4 *)(param_2 + uVar8 * 0x26);
              for (uVar17 = uVar22 * 0x13 >> 1; uVar17 != 0; uVar17 = uVar17 - 1) {
                *puVar18 = *puVar19;
                puVar19 = puVar19 + 1;
                puVar18 = puVar18 + 1;
              }
              for (uVar17 = uVar22 * 0x26 & 3; iVar9 = DAT_66311e20, uVar17 != 0;
                  uVar17 = uVar17 - 1) {
                *(undefined1 *)puVar18 = *(undefined1 *)puVar19;
                puVar19 = (undefined4 *)((int)puVar19 + 1);
                puVar18 = (undefined4 *)((int)puVar18 + 1);
              }
            }
            else {
LAB_663014e0:
              uVar6 = 0;
              uVar15 = uVar21 - 1;
              if (uVar16 == 0) goto LAB_663015ff;
              do {
                if (*(short *)(iVar9 + (uint)uVar15 * 2) == 1) {
                  uVar17 = (uint)uVar6;
                  uVar6 = uVar6 + 1;
                  puVar19 = (undefined4 *)(param_2 + (uint)uVar15 * 0x26);
                  puVar18 = (undefined4 *)(param_2 + (uVar8 + uVar17) * 0x26);
                  for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
                    *puVar18 = *puVar19;
                    puVar19 = puVar19 + 1;
                    puVar18 = puVar18 + 1;
                  }
                  *(undefined2 *)puVar18 = *(undefined2 *)puVar19;
                  iVar9 = DAT_66311e20;
                }
                uVar15 = uVar15 + 1;
                if ((uint)uVar15 == (int)((DAT_66311dfc & 0xffff) * (_DAT_66311d9c & 0xffff)) / 0x26
                   ) {
                  uVar15 = 0;
                }
              } while (uVar6 < uVar16);
            }
          }
        }
        else {
          uVar13 = uVar22 * 0x26;
          puVar19 = (undefined4 *)(param_2 + uVar8 * 0x26);
          puVar18 = puVar19;
          for (uVar14 = uVar22 * 0x13 >> 1; uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
          }
          for (uVar14 = uVar13 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined1 *)puVar18 = 0;
            puVar18 = (undefined4 *)((int)puVar18 + 1);
          }
          if ((int)(uVar21 - uVar17) <= (int)(uVar12 - uVar8)) {
            uVar12 = uVar17 - uVar22;
          }
          puVar18 = (undefined4 *)(param_2 + uVar12 * 0x26);
          for (uVar17 = uVar13 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *puVar19 = *puVar18;
            puVar18 = puVar18 + 1;
            puVar19 = puVar19 + 1;
          }
          for (uVar13 = uVar13 & 3; iVar9 = DAT_66311e20, uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined1 *)puVar19 = *(undefined1 *)puVar18;
            puVar18 = (undefined4 *)((int)puVar18 + 1);
            puVar19 = (undefined4 *)((int)puVar19 + 1);
          }
        }
        if (uVar16 != 0) {
          pbVar20 = (byte *)(param_2 + uVar8 * 0x26);
          do {
            FUN_66301730(DAT_66311e08,pbVar20,0x20);
            iVar10 = 0x20;
            iVar9 = 0;
            do {
              iVar10 = iVar10 + -1;
              *(ushort *)(iVar9 + (int)DAT_66311e0c) =
                   *(ushort *)(iVar9 + (int)DAT_66311e08) & 0xfffe;
              iVar9 = iVar9 + 2;
            } while (iVar10 != 0);
            FUN_66301650((char *)pbVar20,(int)DAT_66311e0c,0x20);
            pbVar20 = pbVar20 + 0x26;
            uVar22 = uVar22 - 1;
            iVar9 = DAT_66311e20;
          } while (uVar22 != 0);
        }
      }
LAB_663015ff:
      uVar22 = (int)((DAT_66311dfc & 0xffff) * (_DAT_66311d9c & 0xffff)) / 0x26;
      uVar15 = uVar21 + 1;
    } while ((int)(uint)uVar15 < (int)uVar22);
  }
  return 0;
}


