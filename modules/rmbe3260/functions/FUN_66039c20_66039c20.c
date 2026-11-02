/* Module: rmbe3260.dll
   Function: FUN_66039c20
   Address: 66039c20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x6603abf2) */
/* WARNING: Removing unreachable block (ram,0x66039c7a) */
/* WARNING: Removing unreachable block (ram,0x66039fc5) */
/* WARNING: Removing unreachable block (ram,0x6603ae5d) */

int __fastcall FUN_66039c20(int *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int *piVar9;
  int iVar10;
  undefined1 *puVar11;
  void *pvVar12;
  byte *pbVar13;
  int iVar14;
  undefined1 *puVar15;
  undefined4 *puVar16;
  uint *puVar17;
  byte *pbVar18;
  short *psVar19;
  byte *pbVar20;
  ushort uVar21;
  uint uVar22;
  int iVar23;
  short sVar24;
  int iVar25;
  uint *local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_14;
  byte *local_10;
  byte *local_c;
  int local_8;
  
  local_10 = (byte *)0x0;
  local_14 = 0;
  local_28 = (uint *)0x0;
  local_1c = 0;
  (**(code **)(*(int *)param_1[1] + 8))(0,0);
  piVar9 = (int *)param_1[1];
  iVar25 = piVar9[5];
  iVar14 = *(int *)(piVar9[8] + 4);
  iVar23 = *(int *)(piVar9[8] + 0xc);
  local_14 = 4;
  iVar10 = piVar9[5];
  if ((uint)piVar9[6] < iVar10 + 4U) {
    puVar15 = (undefined1 *)(**(code **)(*piVar9 + 0x24))(&local_14);
  }
  else {
    *(int *)(piVar9[8] + 0x14) = *(int *)(piVar9[8] + 0x14) + 1;
    puVar15 = (undefined1 *)piVar9[5];
    piVar9[5] = iVar10 + 4U;
  }
  local_8 = FUN_66031360(param_1,(int)puVar15,4,local_14);
  if (local_8 != 0) {
    if (local_8 != 0x40040) {
      return local_8;
    }
    param_1[0x22] = 0;
    return 0;
  }
  uVar1 = puVar15[1];
  uVar2 = puVar15[3];
  uVar3 = *puVar15;
  uVar4 = puVar15[2];
  piVar9 = (int *)param_1[1];
  if (puVar15 != (undefined1 *)0x0) {
    puVar11 = *(undefined1 **)(piVar9[8] + 0xc);
    if ((puVar11 == puVar15) || ((puVar11 < puVar15 && (puVar15 < (undefined1 *)piVar9[6])))) {
      piVar9 = (int *)(piVar9[8] + 0x14);
      *piVar9 = *piVar9 + -1;
    }
    else {
      (**(code **)(*piVar9 + 0x28))(puVar15);
    }
  }
  if (CONCAT22(CONCAT11(uVar3,uVar1),CONCAT11(uVar4,uVar2)) != 0x2e524d46) {
    local_8 = -1;
  }
  if (local_8 == 0) {
    local_8 = FUN_6603b5a0(param_1,(int *)&local_10,(int *)&local_c,(iVar25 + iVar14) - iVar23);
  }
  if (local_8 != 0) {
    if (local_8 != 0x40040) {
      return local_8;
    }
    param_1[0x22] = 0;
    return 0;
  }
  param_1[0x24] = 0;
  param_1[0x44] = (int)local_c;
  if ((void *)param_1[0x37] != (void *)0x0) {
    operator_delete((void *)param_1[0x37]);
  }
  if ((void *)param_1[0x36] != (void *)0x0) {
    operator_delete((void *)param_1[0x36]);
  }
  pvVar12 = operator_new((uint)local_c);
  param_1[0x37] = (int)pvVar12;
  pvVar12 = operator_new(0x12);
  param_1[0x36] = (int)pvVar12;
  if ((pvVar12 == (void *)0x0) || (param_1[0x37] == 0)) {
    local_8 = -0x7ff8fff2;
  }
  iVar25 = local_8;
  if (local_8 == 0) {
    pbVar18 = local_10;
    pbVar13 = (byte *)param_1[0x37];
    for (uVar22 = (uint)local_c >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
      *(undefined4 *)pbVar13 = *(undefined4 *)pbVar18;
      pbVar18 = pbVar18 + 4;
      pbVar13 = pbVar13 + 4;
    }
    for (uVar22 = (uint)local_c & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
      *pbVar13 = *pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar13 = pbVar13 + 1;
    }
    piVar9 = (int *)param_1[1];
    if (local_10 != (byte *)0x0) {
      pbVar18 = *(byte **)(piVar9[8] + 0xc);
      if ((pbVar18 == local_10) || ((pbVar18 < local_10 && (local_10 < (byte *)piVar9[6])))) {
        piVar9 = (int *)(piVar9[8] + 0x14);
        *piVar9 = *piVar9 + -1;
      }
      else {
        (**(code **)(*piVar9 + 0x28))(local_10);
      }
    }
    pbVar18 = (byte *)param_1[0x37];
    puVar17 = (uint *)param_1[0x36];
    if ((pbVar18 == (byte *)0x0) || (local_c == (byte *)0x0)) {
      pbVar13 = (byte *)0x0;
    }
    else {
      bVar5 = *pbVar18;
      *puVar17 = (uint)bVar5 << 0x18;
      uVar22 = (uint)pbVar18[1] << 0x10 | (uint)bVar5 << 0x18;
      *puVar17 = uVar22;
      *puVar17 = uVar22 | (uint)pbVar18[2] << 8;
      *puVar17 = *puVar17 | (uint)pbVar18[3];
      bVar5 = pbVar18[4];
      puVar17[1] = (uint)bVar5 << 0x18;
      uVar22 = (uint)bVar5 << 0x18 | (uint)pbVar18[5] << 0x10;
      puVar17[1] = uVar22;
      uVar22 = uVar22 | (uint)pbVar18[6] << 8;
      puVar17[1] = uVar22;
      puVar17[1] = uVar22 | pbVar18[7];
      *(ushort *)(puVar17 + 2) = (ushort)pbVar18[8] << 8;
      *(ushort *)(puVar17 + 2) = (ushort)puVar17[2] | (ushort)pbVar18[9];
      pbVar13 = pbVar18 + 10;
      if (((short)puVar17[2] == 0) || ((short)puVar17[2] == 1)) {
        bVar5 = *pbVar13;
        *(uint *)((int)puVar17 + 10) = (uint)bVar5 << 0x18;
        uVar22 = (uint)bVar5 << 0x18 | (uint)pbVar18[0xb] << 0x10;
        *(uint *)((int)puVar17 + 10) = uVar22;
        uVar22 = uVar22 | (uint)pbVar18[0xc] << 8;
        *(uint *)((int)puVar17 + 10) = uVar22;
        *(uint *)((int)puVar17 + 10) = uVar22 | pbVar18[0xd];
        bVar5 = pbVar18[0xe];
        *(uint *)((int)puVar17 + 0xe) = (uint)bVar5 << 0x18;
        *(uint *)((int)puVar17 + 0xe) = (uint)bVar5 << 0x18 | (uint)pbVar18[0xf] << 0x10;
        *(uint *)((int)puVar17 + 0xe) = *(uint *)((int)puVar17 + 0xe) | (uint)pbVar18[0x10] << 8;
        pbVar13 = pbVar18 + 0x12;
        *(uint *)((int)puVar17 + 0xe) = *(uint *)((int)puVar17 + 0xe) | (uint)pbVar18[0x11];
      }
    }
    iVar25 = local_8;
    if (pbVar13 == (byte *)0x0) {
      iVar25 = -1;
    }
    if (iVar25 != 0) goto LAB_6603aa2f;
    if ((*(short *)(param_1[0x36] + 8) != 0) && (*(short *)(param_1[0x36] + 8) != 1)) {
      iVar25 = -0x7ffbfffb;
    }
    if (iVar25 != 0) goto LAB_6603aa2f;
    local_28 = *(uint **)(param_1[0x36] + 0xe);
  }
  if (iVar25 == 0) {
    iVar25 = (**(code **)(*param_1 + 0x1c))(param_1[0x44],param_1[0x37]);
    local_24 = 1;
    if (iVar25 == 0) {
      do {
        if (local_28 <= (local_24 & 0xffff)) break;
        piVar9 = (int *)param_1[1];
        local_14 = 4;
        iVar14 = (piVar9[5] - *(int *)(piVar9[8] + 0xc)) + *(int *)(piVar9[8] + 4);
        iVar25 = piVar9[5];
        if ((uint)piVar9[6] < iVar25 + 4U) {
          puVar15 = (undefined1 *)(**(code **)(*piVar9 + 0x24))(&local_14);
        }
        else {
          *(int *)(piVar9[8] + 0x14) = *(int *)(piVar9[8] + 0x14) + 1;
          puVar15 = (undefined1 *)piVar9[5];
          piVar9[5] = iVar25 + 4U;
        }
        local_8 = FUN_66031360(param_1,(int)puVar15,4,local_14);
        if (local_8 != 0) {
          if (local_8 != 0x40040) {
            return local_8;
          }
          param_1[0x22] = 0;
          return 0;
        }
        piVar9 = (int *)param_1[1];
        uVar22 = CONCAT22(CONCAT11(*puVar15,puVar15[1]),CONCAT11(puVar15[2],puVar15[3]));
        if (puVar15 != (undefined1 *)0x0) {
          puVar11 = *(undefined1 **)(piVar9[8] + 0xc);
          if ((puVar11 == puVar15) || ((puVar11 < puVar15 && (puVar15 < (undefined1 *)piVar9[6]))))
          {
            piVar9 = (int *)(piVar9[8] + 0x14);
            *piVar9 = *piVar9 + -1;
          }
          else {
            (**(code **)(*piVar9 + 0x28))(puVar15);
          }
        }
        if (uVar22 < 0x44415442) {
          if (uVar22 == 0x44415441) {
            iVar25 = 0;
            if (param_1[0x43] != 0) {
              iVar25 = -1;
              local_8 = -1;
            }
            if ((iVar25 != 0) ||
               (iVar25 = FUN_6603b500(param_1,(int *)&local_10,(int *)&local_c,iVar14), iVar25 != 0)
               ) {
LAB_6603a94b:
              if (iVar25 != 0x40040) {
                return iVar25;
              }
              param_1[0x22] = 0;
              return 0;
            }
            local_8 = iVar25;
            pvVar12 = operator_new((uint)local_c);
            param_1[0x3b] = (int)pvVar12;
            pvVar12 = operator_new(0x12);
            param_1[0x3a] = (int)pvVar12;
            if ((pvVar12 == (void *)0x0) || (iVar25 = 0, param_1[0x3b] == 0)) {
              iVar25 = -0x7ff8fff2;
              local_8 = -0x7ff8fff2;
            }
            if (iVar25 == 0) {
              pbVar18 = local_10;
              pbVar13 = (byte *)param_1[0x3b];
              for (uVar22 = (uint)local_c >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
                *(undefined4 *)pbVar13 = *(undefined4 *)pbVar18;
                pbVar18 = pbVar18 + 4;
                pbVar13 = pbVar13 + 4;
              }
              for (uVar22 = (uint)local_c & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
                *pbVar13 = *pbVar18;
                pbVar18 = pbVar18 + 1;
                pbVar13 = pbVar13 + 1;
              }
              pbVar18 = (byte *)param_1[0x3b];
              puVar17 = (uint *)param_1[0x3a];
              if ((pbVar18 == (byte *)0x0) || (local_c == (byte *)0x0)) {
                pbVar13 = (byte *)0x0;
              }
              else {
                bVar5 = *pbVar18;
                *puVar17 = (uint)bVar5 << 0x18;
                uVar22 = (uint)pbVar18[1] << 0x10 | (uint)bVar5 << 0x18;
                *puVar17 = uVar22;
                uVar22 = uVar22 | (uint)pbVar18[2] << 8;
                *puVar17 = uVar22;
                *puVar17 = uVar22 | pbVar18[3];
                bVar5 = pbVar18[4];
                puVar17[1] = (uint)bVar5 << 0x18;
                puVar17[1] = (uint)bVar5 << 0x18 | (uint)pbVar18[5] << 0x10;
                puVar17[1] = puVar17[1] | (uint)pbVar18[6] << 8;
                puVar17[1] = puVar17[1] | (uint)pbVar18[7];
                *(ushort *)(puVar17 + 2) = (ushort)pbVar18[8] << 8;
                *(ushort *)(puVar17 + 2) = (ushort)puVar17[2] | (ushort)pbVar18[9];
                pbVar13 = pbVar18 + 10;
                if ((short)puVar17[2] == 0) {
                  bVar5 = *pbVar13;
                  *(uint *)((int)puVar17 + 10) = (uint)bVar5 << 0x18;
                  uVar22 = (uint)bVar5 << 0x18 | (uint)pbVar18[0xb] << 0x10;
                  *(uint *)((int)puVar17 + 10) = uVar22;
                  uVar22 = uVar22 | (uint)pbVar18[0xc] << 8;
                  *(uint *)((int)puVar17 + 10) = uVar22;
                  *(uint *)((int)puVar17 + 10) = uVar22 | pbVar18[0xd];
                  bVar5 = pbVar18[0xe];
                  *(uint *)((int)puVar17 + 0xe) = (uint)bVar5 << 0x18;
                  *(uint *)((int)puVar17 + 0xe) = (uint)bVar5 << 0x18 | (uint)pbVar18[0xf] << 0x10;
                  *(uint *)((int)puVar17 + 0xe) =
                       *(uint *)((int)puVar17 + 0xe) | (uint)pbVar18[0x10] << 8;
                  pbVar13 = pbVar18 + 0x12;
                  *(uint *)((int)puVar17 + 0xe) =
                       *(uint *)((int)puVar17 + 0xe) | (uint)pbVar18[0x11];
                }
              }
              if (pbVar13 == (byte *)0x0) {
                local_8 = -1;
              }
              if ((local_8 == 0) && (*(short *)(param_1[0x3a] + 8) != 0)) {
                local_8 = -0x7ffbfffb;
              }
            }
            iVar25 = local_8;
            if (local_8 != 0) goto LAB_6603aa2f;
            local_1c = param_1[0x3b];
            iVar14 = *(int *)(param_1[0x3a] + 10);
            param_1[0x43] = 1;
            param_1[0x47] = iVar14;
            iVar14 = *(int *)(param_1[1] + 0x20);
            *(int *)((int)param_1 + 299) =
                 (*(int *)(param_1[1] + 0x14) + *(int *)(iVar14 + 4)) - *(int *)(iVar14 + 0xc);
          }
          else if (uVar22 == 0x434f4e54) {
            iVar25 = 0;
            if (param_1[0x42] != 0) {
              iVar25 = -1;
              local_8 = -1;
            }
            if ((iVar25 != 0) ||
               (iVar25 = FUN_6603b5a0(param_1,(int *)&local_10,(int *)&local_c,iVar14), iVar25 != 0)
               ) goto LAB_6603a94b;
            local_8 = iVar25;
            pvVar12 = operator_new((uint)local_c);
            param_1[0x3f] = (int)pvVar12;
            puVar16 = operator_new(0x22);
            if (puVar16 == (undefined4 *)0x0) {
              puVar16 = (undefined4 *)0x0;
            }
            else {
              *puVar16 = 0;
              puVar16[1] = 0;
              *(undefined2 *)(puVar16 + 2) = 0;
              *(undefined2 *)((int)puVar16 + 10) = 0;
              puVar16[3] = 0;
              *(undefined2 *)(puVar16 + 4) = 0;
              *(undefined4 *)((int)puVar16 + 0x12) = 0;
              *(undefined2 *)((int)puVar16 + 0x16) = 0;
              puVar16[6] = 0;
              *(undefined2 *)(puVar16 + 7) = 0;
              *(undefined4 *)((int)puVar16 + 0x1e) = 0;
            }
            param_1[0x3e] = (int)puVar16;
            if ((puVar16 == (undefined4 *)0x0) || (iVar25 = 0, param_1[0x3f] == 0)) {
              iVar25 = -0x7ff8fff2;
              local_8 = -0x7ff8fff2;
            }
            if (iVar25 == 0) {
              pbVar18 = local_10;
              pbVar13 = (byte *)param_1[0x3f];
              for (uVar22 = (uint)local_c >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
                *(undefined4 *)pbVar13 = *(undefined4 *)pbVar18;
                pbVar18 = pbVar18 + 4;
                pbVar13 = pbVar13 + 4;
              }
              for (uVar22 = (uint)local_c & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
                *pbVar13 = *pbVar18;
                pbVar18 = pbVar18 + 1;
                pbVar13 = pbVar13 + 1;
              }
              pbVar18 = (byte *)param_1[0x3f];
              puVar17 = (uint *)param_1[0x3e];
              if ((pbVar18 == (byte *)0x0) || (local_c == (byte *)0x0)) {
LAB_6603a26e:
                pbVar13 = (byte *)0x0;
              }
              else {
                bVar5 = *pbVar18;
                *puVar17 = (uint)bVar5 << 0x18;
                uVar22 = (uint)pbVar18[1] << 0x10 | (uint)bVar5 << 0x18;
                *puVar17 = uVar22;
                *puVar17 = uVar22 | (uint)pbVar18[2] << 8;
                *puVar17 = *puVar17 | (uint)pbVar18[3];
                bVar5 = pbVar18[4];
                puVar17[1] = (uint)bVar5 << 0x18;
                puVar17[1] = (uint)bVar5 << 0x18 | (uint)pbVar18[5] << 0x10;
                puVar17[1] = puVar17[1] | (uint)pbVar18[6] << 8;
                puVar17[1] = puVar17[1] | (uint)pbVar18[7];
                *(ushort *)(puVar17 + 2) = (ushort)pbVar18[8] << 8;
                *(ushort *)(puVar17 + 2) = (ushort)puVar17[2] | (ushort)pbVar18[9];
                pbVar13 = pbVar18 + 10;
                if ((short)puVar17[2] == 0) {
                  *(ushort *)((int)puVar17 + 10) = (ushort)*pbVar13 << 8;
                  *(ushort *)((int)puVar17 + 10) =
                       *(ushort *)((int)puVar17 + 10) | (ushort)pbVar18[0xb];
                  pbVar13 = pbVar18 + 0xc;
                  if ((int)(pbVar13 + ((uint)*(ushort *)((int)puVar17 + 10) - (int)pbVar18)) <=
                      (int)local_c) {
                    puVar17[3] = (uint)pbVar13;
                    pbVar13 = pbVar13 + *(ushort *)((int)puVar17 + 10);
                    *(ushort *)(puVar17 + 4) = (ushort)*pbVar13 << 8;
                    *(ushort *)(puVar17 + 4) = (ushort)puVar17[4] | (ushort)pbVar13[1];
                    pbVar13 = pbVar13 + 2;
                    if ((int)(pbVar13 + ((uint)(ushort)puVar17[4] - (int)pbVar18)) <= (int)local_c)
                    {
                      *(byte **)((int)puVar17 + 0x12) = pbVar13;
                      pbVar13 = pbVar13 + (ushort)puVar17[4];
                      *(ushort *)((int)puVar17 + 0x16) = (ushort)*pbVar13 << 8;
                      *(ushort *)((int)puVar17 + 0x16) =
                           *(ushort *)((int)puVar17 + 0x16) | (ushort)pbVar13[1];
                      pbVar13 = pbVar13 + 2;
                      if ((int)(pbVar13 + ((uint)*(ushort *)((int)puVar17 + 0x16) - (int)pbVar18))
                          <= (int)local_c) {
                        puVar17[6] = (uint)pbVar13;
                        pbVar13 = pbVar13 + *(ushort *)((int)puVar17 + 0x16);
                        *(ushort *)(puVar17 + 7) = (ushort)*pbVar13 << 8;
                        *(ushort *)(puVar17 + 7) = (ushort)puVar17[7] | (ushort)pbVar13[1];
                        pbVar13 = pbVar13 + 2;
                        if ((int)(pbVar13 + ((uint)(ushort)puVar17[7] - (int)pbVar18)) <=
                            (int)local_c) {
                          *(byte **)((int)puVar17 + 0x1e) = pbVar13;
                          pbVar13 = pbVar13 + (ushort)puVar17[7];
                          goto LAB_6603a270;
                        }
                      }
                    }
                  }
                  goto LAB_6603a26e;
                }
              }
LAB_6603a270:
              if (pbVar13 == (byte *)0x0) {
                local_8 = -1;
              }
              if ((local_8 == 0) && (*(short *)(param_1[0x3e] + 8) != 0)) {
                local_8 = -0x7ffbfffb;
              }
            }
            iVar25 = local_8;
            if (local_8 != 0) goto LAB_6603aa2f;
            local_1c = param_1[0x3f];
            param_1[0x42] = 1;
          }
          else {
LAB_6603a4cc:
            iVar25 = -1;
          }
        }
        else {
          if (uVar22 != 0x4d445052) {
            if (uVar22 != 0x50524f50) goto LAB_6603a4cc;
            iVar25 = 0;
            if (param_1[0x41] != 0) {
              iVar25 = -1;
              local_8 = -1;
            }
            if ((iVar25 != 0) ||
               (iVar25 = FUN_6603b5a0(param_1,(int *)&local_10,(int *)&local_c,iVar14), iVar25 != 0)
               ) goto LAB_6603a94b;
            local_8 = iVar25;
            pvVar12 = operator_new((uint)local_c);
            param_1[0x39] = (int)pvVar12;
            pvVar12 = operator_new(0x32);
            param_1[0x38] = (int)pvVar12;
            if ((pvVar12 == (void *)0x0) || (param_1[0x39] == 0)) {
              iVar25 = -0x7ff8fff2;
              local_8 = -0x7ff8fff2;
            }
            if (iVar25 == 0) {
              pbVar18 = local_10;
              pbVar13 = (byte *)param_1[0x39];
              for (uVar22 = (uint)local_c >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
                *(undefined4 *)pbVar13 = *(undefined4 *)pbVar18;
                pbVar18 = pbVar18 + 4;
                pbVar13 = pbVar13 + 4;
              }
              for (uVar22 = (uint)local_c & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
                *pbVar13 = *pbVar18;
                pbVar18 = pbVar18 + 1;
                pbVar13 = pbVar13 + 1;
              }
              pbVar18 = (byte *)param_1[0x39];
              puVar17 = (uint *)param_1[0x38];
              param_1[0x45] = (int)local_c;
              if ((pbVar18 == (byte *)0x0) || (local_c == (byte *)0x0)) {
                pbVar13 = (byte *)0x0;
              }
              else {
                bVar5 = *pbVar18;
                *puVar17 = (uint)bVar5 << 0x18;
                uVar22 = (uint)pbVar18[1] << 0x10 | (uint)bVar5 << 0x18;
                *puVar17 = uVar22;
                uVar22 = uVar22 | (uint)pbVar18[2] << 8;
                *puVar17 = uVar22;
                *puVar17 = uVar22 | pbVar18[3];
                bVar5 = pbVar18[4];
                puVar17[1] = (uint)bVar5 << 0x18;
                puVar17[1] = (uint)bVar5 << 0x18 | (uint)pbVar18[5] << 0x10;
                puVar17[1] = puVar17[1] | (uint)pbVar18[6] << 8;
                puVar17[1] = puVar17[1] | (uint)pbVar18[7];
                *(ushort *)(puVar17 + 2) = (ushort)pbVar18[8] << 8;
                *(ushort *)(puVar17 + 2) = (ushort)puVar17[2] | (ushort)pbVar18[9];
                pbVar13 = pbVar18 + 10;
                if ((short)puVar17[2] == 0) {
                  bVar5 = *pbVar13;
                  *(uint *)((int)puVar17 + 10) = (uint)bVar5 << 0x18;
                  *(uint *)((int)puVar17 + 10) = (uint)bVar5 << 0x18 | (uint)pbVar18[0xb] << 0x10;
                  *(uint *)((int)puVar17 + 10) =
                       *(uint *)((int)puVar17 + 10) | (uint)pbVar18[0xc] << 8;
                  *(uint *)((int)puVar17 + 10) = *(uint *)((int)puVar17 + 10) | (uint)pbVar18[0xd];
                  bVar5 = pbVar18[0xe];
                  *(uint *)((int)puVar17 + 0xe) = (uint)bVar5 << 0x18;
                  uVar22 = (uint)bVar5 << 0x18 | (uint)pbVar18[0xf] << 0x10;
                  *(uint *)((int)puVar17 + 0xe) = uVar22;
                  uVar22 = uVar22 | (uint)pbVar18[0x10] << 8;
                  *(uint *)((int)puVar17 + 0xe) = uVar22;
                  *(uint *)((int)puVar17 + 0xe) = uVar22 | pbVar18[0x11];
                  bVar5 = pbVar18[0x12];
                  *(uint *)((int)puVar17 + 0x12) = (uint)bVar5 << 0x18;
                  *(uint *)((int)puVar17 + 0x12) = (uint)bVar5 << 0x18 | (uint)pbVar18[0x13] << 0x10
                  ;
                  *(uint *)((int)puVar17 + 0x12) =
                       *(uint *)((int)puVar17 + 0x12) | (uint)pbVar18[0x14] << 8;
                  *(uint *)((int)puVar17 + 0x12) =
                       *(uint *)((int)puVar17 + 0x12) | (uint)pbVar18[0x15];
                  bVar5 = pbVar18[0x16];
                  *(uint *)((int)puVar17 + 0x16) = (uint)bVar5 << 0x18;
                  uVar22 = (uint)bVar5 << 0x18 | (uint)pbVar18[0x17] << 0x10;
                  *(uint *)((int)puVar17 + 0x16) = uVar22;
                  uVar22 = uVar22 | (uint)pbVar18[0x18] << 8;
                  *(uint *)((int)puVar17 + 0x16) = uVar22;
                  *(uint *)((int)puVar17 + 0x16) = uVar22 | pbVar18[0x19];
                  bVar5 = pbVar18[0x1a];
                  *(uint *)((int)puVar17 + 0x1a) = (uint)bVar5 << 0x18;
                  *(uint *)((int)puVar17 + 0x1a) = (uint)bVar5 << 0x18 | (uint)pbVar18[0x1b] << 0x10
                  ;
                  *(uint *)((int)puVar17 + 0x1a) =
                       *(uint *)((int)puVar17 + 0x1a) | (uint)pbVar18[0x1c] << 8;
                  *(uint *)((int)puVar17 + 0x1a) =
                       *(uint *)((int)puVar17 + 0x1a) | (uint)pbVar18[0x1d];
                  bVar5 = pbVar18[0x1e];
                  *(uint *)((int)puVar17 + 0x1e) = (uint)bVar5 << 0x18;
                  uVar22 = (uint)bVar5 << 0x18 | (uint)pbVar18[0x1f] << 0x10;
                  *(uint *)((int)puVar17 + 0x1e) = uVar22;
                  uVar22 = uVar22 | (uint)pbVar18[0x20] << 8;
                  *(uint *)((int)puVar17 + 0x1e) = uVar22;
                  *(uint *)((int)puVar17 + 0x1e) = uVar22 | pbVar18[0x21];
                  bVar5 = pbVar18[0x22];
                  *(uint *)((int)puVar17 + 0x22) = (uint)bVar5 << 0x18;
                  *(uint *)((int)puVar17 + 0x22) = (uint)bVar5 << 0x18 | (uint)pbVar18[0x23] << 0x10
                  ;
                  *(uint *)((int)puVar17 + 0x22) =
                       *(uint *)((int)puVar17 + 0x22) | (uint)pbVar18[0x24] << 8;
                  *(uint *)((int)puVar17 + 0x22) =
                       *(uint *)((int)puVar17 + 0x22) | (uint)pbVar18[0x25];
                  bVar5 = pbVar18[0x26];
                  *(uint *)((int)puVar17 + 0x26) = (uint)bVar5 << 0x18;
                  uVar22 = (uint)bVar5 << 0x18 | (uint)pbVar18[0x27] << 0x10;
                  *(uint *)((int)puVar17 + 0x26) = uVar22;
                  uVar22 = uVar22 | (uint)pbVar18[0x28] << 8;
                  *(uint *)((int)puVar17 + 0x26) = uVar22;
                  *(uint *)((int)puVar17 + 0x26) = uVar22 | pbVar18[0x29];
                  bVar5 = pbVar18[0x2a];
                  *(uint *)((int)puVar17 + 0x2a) = (uint)bVar5 << 0x18;
                  *(uint *)((int)puVar17 + 0x2a) = (uint)bVar5 << 0x18 | (uint)pbVar18[0x2b] << 0x10
                  ;
                  *(uint *)((int)puVar17 + 0x2a) =
                       *(uint *)((int)puVar17 + 0x2a) | (uint)pbVar18[0x2c] << 8;
                  *(uint *)((int)puVar17 + 0x2a) =
                       *(uint *)((int)puVar17 + 0x2a) | (uint)pbVar18[0x2d];
                  *(ushort *)((int)puVar17 + 0x2e) = (ushort)pbVar18[0x2e] << 8;
                  *(ushort *)((int)puVar17 + 0x2e) =
                       *(ushort *)((int)puVar17 + 0x2e) | (ushort)pbVar18[0x2f];
                  *(ushort *)(puVar17 + 0xc) = (ushort)pbVar18[0x30] << 8;
                  *(ushort *)(puVar17 + 0xc) = (ushort)puVar17[0xc] | (ushort)pbVar18[0x31];
                  pbVar13 = pbVar18 + 0x32;
                }
              }
              if (pbVar13 == (byte *)0x0) {
                local_8 = -1;
              }
              iVar25 = local_8;
              if (local_8 == 0) {
                if (*(short *)(param_1[0x38] + 8) != 0) {
                  local_8 = -0x7ffbfffb;
                }
                iVar25 = local_8;
                if (local_8 == 0) {
                  uVar21 = *(ushort *)(param_1[0x38] + 0x30);
                  *(ushort *)(param_1 + 0x48) = uVar21;
                  FUN_6602f7b0(param_1,uVar21);
                  uVar21 = *(ushort *)(param_1[0x38] + 0x2e);
                  *(ushort *)(param_1 + 0x40) = uVar21;
                  pvVar12 = operator_new((uint)uVar21 << 2);
                  param_1[0x3d] = (int)pvVar12;
                  pvVar12 = operator_new((uint)*(ushort *)(param_1 + 0x40) << 2);
                  param_1[0x3c] = (int)pvVar12;
                  if ((pvVar12 == (void *)0x0) || (param_1[0x3d] == 0)) {
                    local_8 = -0x7ff8fff2;
                  }
                  uVar21 = 0;
                  if (local_8 == 0) {
                    for (; uVar21 < *(ushort *)(param_1 + 0x40); uVar21 = uVar21 + 1) {
                      *(undefined4 *)((uint)uVar21 * 4 + param_1[0x3d]) = 0;
                      *(undefined4 *)((uint)uVar21 * 4 + param_1[0x3c]) = 0;
                    }
                  }
                  local_1c = param_1[0x39];
                  param_1[0x41] = 1;
                  iVar25 = local_8;
                }
              }
              goto LAB_6603a8de;
            }
            goto LAB_6603aa2f;
          }
          iVar25 = 0;
          if (*(ushort *)(param_1 + 0x40) <= *(ushort *)((int)param_1 + 0x102)) {
            iVar25 = -0x7ffbff7e;
            local_8 = -0x7ffbff7e;
          }
          if ((iVar25 != 0) ||
             (iVar25 = FUN_6603b5a0(param_1,(int *)&local_10,(int *)&local_c,iVar14), iVar25 != 0))
          goto LAB_6603a94b;
          local_8 = iVar25;
          pvVar12 = operator_new((uint)local_c);
          *(void **)(param_1[0x3d] + (uint)*(ushort *)((int)param_1 + 0x102) * 4) = pvVar12;
          pvVar12 = operator_new(0x3a);
          *(void **)(param_1[0x3c] + (uint)*(ushort *)((int)param_1 + 0x102) * 4) = pvVar12;
          iVar25 = (uint)*(ushort *)((int)param_1 + 0x102) * 4;
          if ((*(int *)(iVar25 + param_1[0x3c]) == 0) ||
             (iVar14 = 0, *(int *)(iVar25 + param_1[0x3d]) == 0)) {
            iVar14 = -0x7ff8fff2;
            local_8 = -0x7ff8fff2;
          }
          if (iVar14 == 0) {
            pbVar18 = local_10;
            pbVar13 = *(byte **)(iVar25 + param_1[0x3d]);
            for (uVar22 = (uint)local_c >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
              *(undefined4 *)pbVar13 = *(undefined4 *)pbVar18;
              pbVar18 = pbVar18 + 4;
              pbVar13 = pbVar13 + 4;
            }
            for (uVar22 = (uint)local_c & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
              *pbVar13 = *pbVar18;
              pbVar18 = pbVar18 + 1;
              pbVar13 = pbVar13 + 1;
            }
            iVar25 = (uint)*(ushort *)((int)param_1 + 0x102) * 4;
            pbVar18 = *(byte **)(iVar25 + param_1[0x3d]);
            puVar17 = *(uint **)(iVar25 + param_1[0x3c]);
            if ((pbVar18 == (byte *)0x0) || (local_c == (byte *)0x0)) {
LAB_6603b3eb:
              pbVar13 = (byte *)0x0;
            }
            else {
              bVar5 = *pbVar18;
              *puVar17 = (uint)bVar5 << 0x18;
              *puVar17 = (uint)pbVar18[1] << 0x10 | (uint)bVar5 << 0x18;
              uVar22 = *puVar17 | (uint)pbVar18[2] << 8;
              *puVar17 = uVar22;
              *puVar17 = uVar22 | pbVar18[3];
              puVar17[1] = (uint)pbVar18[4] << 0x18;
              uVar22 = puVar17[1] | (uint)pbVar18[5] << 0x10;
              puVar17[1] = uVar22;
              uVar22 = uVar22 | (uint)pbVar18[6] << 8;
              puVar17[1] = uVar22;
              puVar17[1] = uVar22 | pbVar18[7];
              *(ushort *)(puVar17 + 2) = (ushort)pbVar18[8] << 8;
              *(ushort *)(puVar17 + 2) = (ushort)puVar17[2] | (ushort)pbVar18[9];
              pbVar13 = pbVar18 + 10;
              if ((short)puVar17[2] == 0) {
                *(ushort *)((int)puVar17 + 10) = (ushort)*pbVar13 << 8;
                *(ushort *)((int)puVar17 + 10) =
                     *(ushort *)((int)puVar17 + 10) | (ushort)pbVar18[0xb];
                puVar17[3] = (uint)pbVar18[0xc] << 0x18;
                uVar22 = puVar17[3] | (uint)pbVar18[0xd] << 0x10;
                puVar17[3] = uVar22;
                uVar22 = uVar22 | (uint)pbVar18[0xe] << 8;
                puVar17[3] = uVar22;
                puVar17[3] = uVar22 | pbVar18[0xf];
                puVar17[4] = (uint)pbVar18[0x10] << 0x18;
                uVar22 = puVar17[4] | (uint)pbVar18[0x11] << 0x10;
                puVar17[4] = uVar22;
                uVar22 = uVar22 | (uint)pbVar18[0x12] << 8;
                puVar17[4] = uVar22;
                puVar17[4] = uVar22 | pbVar18[0x13];
                puVar17[5] = (uint)pbVar18[0x14] << 0x18;
                uVar22 = puVar17[5] | (uint)pbVar18[0x15] << 0x10;
                puVar17[5] = uVar22;
                uVar22 = uVar22 | (uint)pbVar18[0x16] << 8;
                puVar17[5] = uVar22;
                puVar17[5] = uVar22 | pbVar18[0x17];
                puVar17[6] = (uint)pbVar18[0x18] << 0x18;
                uVar22 = puVar17[6] | (uint)pbVar18[0x19] << 0x10;
                puVar17[6] = uVar22;
                uVar22 = uVar22 | (uint)pbVar18[0x1a] << 8;
                puVar17[6] = uVar22;
                puVar17[6] = uVar22 | pbVar18[0x1b];
                puVar17[7] = (uint)pbVar18[0x1c] << 0x18;
                uVar22 = puVar17[7] | (uint)pbVar18[0x1d] << 0x10;
                puVar17[7] = uVar22;
                uVar22 = uVar22 | (uint)pbVar18[0x1e] << 8;
                puVar17[7] = uVar22;
                puVar17[7] = uVar22 | pbVar18[0x1f];
                puVar17[8] = (uint)pbVar18[0x20] << 0x18;
                uVar22 = puVar17[8] | (uint)pbVar18[0x21] << 0x10;
                puVar17[8] = uVar22;
                uVar22 = uVar22 | (uint)pbVar18[0x22] << 8;
                puVar17[8] = uVar22;
                puVar17[8] = uVar22 | pbVar18[0x23];
                puVar17[9] = (uint)pbVar18[0x24] << 0x18;
                uVar22 = puVar17[9] | (uint)pbVar18[0x25] << 0x10;
                puVar17[9] = uVar22;
                uVar22 = uVar22 | (uint)pbVar18[0x26] << 8;
                puVar17[9] = uVar22;
                puVar17[9] = uVar22 | pbVar18[0x27];
                pbVar20 = pbVar18 + 0x29;
                *(byte *)(puVar17 + 10) = pbVar18[0x28];
                if ((int)(pbVar20 + ((uint)(byte)puVar17[10] - (int)pbVar18)) <= (int)local_c) {
                  *(byte **)((int)puVar17 + 0x29) = pbVar20;
                  pbVar13 = pbVar20 + (byte)puVar17[10] + 1;
                  *(byte *)((int)puVar17 + 0x2d) = pbVar20[(byte)puVar17[10]];
                  if ((int)(pbVar13 + ((uint)*(byte *)((int)puVar17 + 0x2d) - (int)pbVar18)) <=
                      (int)local_c) {
                    *(byte **)((int)puVar17 + 0x2e) = pbVar13;
                    pbVar13 = pbVar13 + *(byte *)((int)puVar17 + 0x2d);
                    *(uint *)((int)puVar17 + 0x32) = (uint)*pbVar13 << 0x18;
                    uVar22 = *(uint *)((int)puVar17 + 0x32) | (uint)pbVar13[1] << 0x10;
                    *(uint *)((int)puVar17 + 0x32) = uVar22;
                    uVar22 = uVar22 | (uint)pbVar13[2] << 8;
                    *(uint *)((int)puVar17 + 0x32) = uVar22;
                    uVar22 = uVar22 | pbVar13[3];
                    pbVar13 = pbVar13 + 4;
                    *(uint *)((int)puVar17 + 0x32) = uVar22;
                    if (pbVar13 + (uVar22 - (int)pbVar18) <= local_c) {
                      *(byte **)((int)puVar17 + 0x36) = pbVar13;
                      pbVar13 = pbVar13 + uVar22;
                      goto LAB_6603b3ed;
                    }
                  }
                }
                goto LAB_6603b3eb;
              }
            }
LAB_6603b3ed:
            if (pbVar13 == (byte *)0x0) {
              local_8 = -1;
            }
            if ((local_8 == 0) &&
               (*(short *)(*(int *)(param_1[0x3c] + (uint)*(ushort *)((int)param_1 + 0x102) * 4) + 8
                          ) != 0)) {
              local_8 = -0x7ffbfffb;
            }
          }
          iVar25 = local_8;
          if (local_8 != 0) goto LAB_6603aa2f;
          local_1c = *(int *)(param_1[0x3d] + (uint)*(ushort *)((int)param_1 + 0x102) * 4);
          *(ushort *)((int)param_1 + 0x102) = *(ushort *)((int)param_1 + 0x102) + 1;
        }
LAB_6603a8de:
        if (iVar25 != 0) goto LAB_6603aa2f;
        iVar25 = (**(code **)(*param_1 + 0x1c))(local_c,local_1c);
        piVar9 = (int *)param_1[1];
        local_24 = local_24 + 1;
        if (local_10 != (byte *)0x0) {
          pbVar18 = *(byte **)(piVar9[8] + 0xc);
          if ((pbVar18 == local_10) || ((pbVar18 < local_10 && (local_10 < (byte *)piVar9[6])))) {
            piVar9 = (int *)(piVar9[8] + 0x14);
            *piVar9 = *piVar9 + -1;
          }
          else {
            (**(code **)(*piVar9 + 0x28))(local_10);
          }
        }
      } while (iVar25 == 0);
      if (iVar25 == 0) {
        param_1[0x22] = 1;
        pvVar12 = operator_new((uint)*(ushort *)((int)param_1 + 0x6e) * 0x3d);
        *(void **)((int)param_1 + 0x122) = pvVar12;
        pvVar12 = operator_new((uint)*(ushort *)((int)param_1 + 0x6e) * 0x14);
        local_24 = (uint)*(ushort *)((int)param_1 + 0x6e);
        param_1[0x1d] = (int)pvVar12;
        puVar17 = operator_new(local_24 * 0x10 + 4);
        if (puVar17 == (uint *)0x0) {
          puVar17 = (uint *)0x0;
        }
        else {
          *puVar17 = local_24;
          puVar17 = puVar17 + 1;
          local_28 = puVar17;
          if (-1 < (int)(local_24 - 1)) {
            do {
              FUN_6605cda0(local_28);
              local_24 = local_24 - 1;
              local_28 = local_28 + 4;
            } while (local_24 != 0);
          }
        }
        param_1[0x1c] = (int)puVar17;
        if (((*(int *)((int)param_1 + 0x122) == 0) || (param_1[0x1d] == 0)) || (param_1[0x1c] == 0))
        {
          iVar25 = -0x7ff8fff2;
        }
      }
    }
  }
LAB_6603aa2f:
  local_1c = 0;
  if (iVar25 == 0) {
    iVar23 = 0;
    iVar14 = 0;
    for (; local_1c < (int)(uint)*(ushort *)((int)param_1 + 0x6e); local_1c = local_1c + 1) {
      *(undefined2 *)(iVar14 + *(int *)((int)param_1 + 0x122)) =
           *(undefined2 *)(*(int *)(**(int **)((int)param_1 + 0x6a) + local_1c * 4) + 0x1a);
      *(undefined4 *)(iVar14 + 2 + *(int *)((int)param_1 + 0x122)) = 0xffffffff;
      *(undefined2 *)(iVar14 + 0x12 + *(int *)((int)param_1 + 0x122)) = 0;
      *(undefined1 *)(iVar14 + 0x14 + *(int *)((int)param_1 + 0x122)) = 0;
      *(undefined4 *)(iVar14 + 0x15 + *(int *)((int)param_1 + 0x122)) = 0;
      *(undefined4 *)(iVar23 + param_1[0x1d]) = 0x494e4458;
      *(undefined4 *)(iVar23 + 4 + param_1[0x1d]) = 0x14;
      *(undefined2 *)(iVar23 + 8 + param_1[0x1d]) = 0;
      *(undefined2 *)(iVar23 + 0xe + param_1[0x1d]) =
           *(undefined2 *)(iVar14 + *(int *)((int)param_1 + 0x122));
      *(undefined4 *)(iVar23 + 10 + param_1[0x1d]) = 0;
      *(undefined4 *)(iVar23 + 0x10 + param_1[0x1d]) = 0;
      iVar23 = iVar23 + 0x14;
      iVar14 = iVar14 + 0x3d;
    }
  }
  if (iVar25 == 0) {
    if (*(short *)(param_1[0x38] + 8) == 0) {
      iVar14 = *(int *)(param_1[0x38] + 0x26);
      *(int *)((int)param_1 + 0x46) = iVar14;
      if (iVar14 == 0) {
        *(undefined1 *)((int)param_1 + 0x12a) = 0;
      }
      else {
        *(undefined1 *)((int)param_1 + 0x12a) = 1;
        iVar14 = (**(code **)(*(int *)param_1[1] + 8))(*(undefined4 *)((int)param_1 + 0x46),0);
        if (iVar14 == 0) {
          if (*(int *)(param_1[1] + 0x40) == 0x40040) {
            param_1[0x21] = 0;
          }
          else {
            iVar25 = -1;
          }
        }
      }
    }
    if (((iVar25 == 0) && (*(char *)((int)param_1 + 0x12a) != '\0')) &&
       ((param_1[0x21] != 0 && (local_1c = 0, *(short *)((int)param_1 + 0x6e) != 0)))) {
      local_8 = 0;
      local_20 = 0;
      local_24 = 0;
      do {
        if ((iVar25 != 0) || (param_1[0x21] == 0)) break;
        if (0 < (int)local_24) {
          iVar14 = *(int *)(param_1[0x1d] + -4 + local_8);
          if (iVar14 == 0) break;
          iVar14 = (**(code **)(*(int *)param_1[1] + 8))(iVar14,0);
          if (iVar14 == 0) {
            if (*(int *)(param_1[1] + 0x40) == 0x40040) {
              param_1[0x21] = 0;
            }
            else {
              iVar25 = -1;
            }
            break;
          }
        }
        piVar9 = (int *)param_1[1];
        iVar14 = piVar9[5];
        iVar23 = *(int *)(piVar9[8] + 4);
        iVar10 = *(int *)(piVar9[8] + 0xc);
        local_14 = 4;
        iVar25 = piVar9[5];
        if ((uint)piVar9[6] < iVar25 + 4U) {
          local_10 = (byte *)(**(code **)(*piVar9 + 0x24))(&local_14);
        }
        else {
          *(int *)(piVar9[8] + 0x14) = *(int *)(piVar9[8] + 0x14) + 1;
          local_10 = (byte *)piVar9[5];
          piVar9[5] = iVar25 + 4U;
        }
        iVar25 = FUN_66031360(param_1,(int)local_10,4,local_14);
        if (iVar25 != 0) {
          if (iVar25 == 0x40040) {
            iVar25 = 0;
          }
          break;
        }
        piVar9 = (int *)param_1[1];
        bVar5 = local_10[1];
        bVar6 = local_10[2];
        bVar7 = *local_10;
        bVar8 = local_10[3];
        if (local_10 != (byte *)0x0) {
          pbVar18 = *(byte **)(piVar9[8] + 0xc);
          if ((pbVar18 == local_10) || ((pbVar18 < local_10 && (local_10 < (byte *)piVar9[6])))) {
            piVar9 = (int *)(piVar9[8] + 0x14);
            *piVar9 = *piVar9 + -1;
          }
          else {
            (**(code **)(*piVar9 + 0x28))(local_10);
          }
        }
        if (CONCAT22(CONCAT11(bVar7,bVar5),CONCAT11(bVar6,bVar8)) != 0x494e4458) {
          param_1[9] = -1;
          return -1;
        }
        iVar25 = FUN_6603b460(param_1,(int *)&local_10,(int *)&local_c,(iVar14 + iVar23) - iVar10);
        if (iVar25 == 0x40040) {
          iVar25 = 0;
          param_1[0x21] = 0;
          break;
        }
        if (iVar25 == 0) {
          puVar17 = (uint *)(param_1[0x1d] + local_8);
          if ((local_10 == (byte *)0x0) || (local_c == (byte *)0x0)) {
            pbVar18 = (byte *)0x0;
          }
          else {
            bVar5 = *local_10;
            *puVar17 = (uint)bVar5 << 0x18;
            uVar22 = (uint)local_10[1] << 0x10 | (uint)bVar5 << 0x18;
            *puVar17 = uVar22;
            *puVar17 = uVar22 | (uint)local_10[2] << 8;
            *puVar17 = *puVar17 | (uint)local_10[3];
            bVar5 = local_10[4];
            puVar17[1] = (uint)bVar5 << 0x18;
            puVar17[1] = (uint)bVar5 << 0x18 | (uint)local_10[5] << 0x10;
            puVar17[1] = puVar17[1] | (uint)local_10[6] << 8;
            puVar17[1] = puVar17[1] | (uint)local_10[7];
            *(ushort *)(puVar17 + 2) = (ushort)local_10[8] << 8;
            *(ushort *)(puVar17 + 2) = (ushort)puVar17[2] | (ushort)local_10[9];
            pbVar18 = local_10 + 10;
            if ((short)puVar17[2] == 0) {
              bVar5 = *pbVar18;
              *(uint *)((int)puVar17 + 10) = (uint)bVar5 << 0x18;
              *(uint *)((int)puVar17 + 10) = (uint)bVar5 << 0x18 | (uint)local_10[0xb] << 0x10;
              *(uint *)((int)puVar17 + 10) = *(uint *)((int)puVar17 + 10) | (uint)local_10[0xc] << 8
              ;
              *(uint *)((int)puVar17 + 10) = *(uint *)((int)puVar17 + 10) | (uint)local_10[0xd];
              *(ushort *)((int)puVar17 + 0xe) = (ushort)local_10[0xe] << 8;
              *(ushort *)((int)puVar17 + 0xe) =
                   *(ushort *)((int)puVar17 + 0xe) | (ushort)local_10[0xf];
              bVar5 = local_10[0x10];
              puVar17[4] = (uint)bVar5 << 0x18;
              puVar17[4] = (uint)bVar5 << 0x18 | (uint)local_10[0x11] << 0x10;
              puVar17[4] = puVar17[4] | (uint)local_10[0x12] << 8;
              pbVar18 = local_10 + 0x14;
              puVar17[4] = puVar17[4] | (uint)local_10[0x13];
            }
          }
          if (pbVar18 == (byte *)0x0) {
            iVar25 = -1;
          }
          piVar9 = (int *)param_1[1];
          if (local_10 != (byte *)0x0) {
            pbVar18 = *(byte **)(piVar9[8] + 0xc);
            if ((pbVar18 == local_10) || ((pbVar18 < local_10 && (local_10 < (byte *)piVar9[6])))) {
              piVar9 = (int *)(piVar9[8] + 0x14);
              *piVar9 = *piVar9 + -1;
            }
            else {
              (**(code **)(*piVar9 + 0x28))(local_10);
            }
          }
          if ((iVar25 == 0) && (*(short *)(param_1[0x1d] + 8 + local_8) != 0)) {
            iVar25 = -0x7ffbfffb;
          }
        }
        local_28 = (uint *)0x0;
        if (0 < *(int *)(local_8 + 10 + param_1[0x1d])) {
          do {
            if ((iVar25 != 0) || (param_1[0x21] == 0)) break;
            psVar19 = operator_new(0xe);
            if (psVar19 == (short *)0x0) {
              iVar25 = -0x7ff8fff2;
            }
            if (iVar25 == 0) {
              piVar9 = (int *)param_1[1];
              local_14 = 0xe;
              iVar25 = piVar9[5];
              if ((uint)piVar9[6] < iVar25 + 0xeU) {
                local_10 = (byte *)(**(code **)(*piVar9 + 0x24))(&local_14);
              }
              else {
                *(int *)(piVar9[8] + 0x14) = *(int *)(piVar9[8] + 0x14) + 1;
                local_10 = (byte *)piVar9[5];
                piVar9[5] = iVar25 + 0xeU;
              }
              iVar25 = FUN_66031360(param_1,(int)local_10,0xe,local_14);
              if (iVar25 != 0) {
                if (iVar25 == 0x40040) {
                  iVar25 = 0;
                }
                break;
              }
              if ((local_10 == (byte *)0x0) || (local_14 == 0)) {
                pbVar18 = (byte *)0x0;
              }
              else {
                bVar5 = *local_10;
                *psVar19 = (ushort)bVar5 << 8;
                sVar24 = CONCAT11(bVar5,local_10[1]);
                pbVar18 = local_10 + 2;
                *psVar19 = sVar24;
                if (sVar24 == 0) {
                  bVar5 = *pbVar18;
                  *(uint *)(psVar19 + 1) = (uint)bVar5 << 0x18;
                  *(uint *)(psVar19 + 1) = (uint)bVar5 << 0x18 | (uint)local_10[3] << 0x10;
                  *(uint *)(psVar19 + 1) = *(uint *)(psVar19 + 1) | (uint)local_10[4] << 8;
                  *(uint *)(psVar19 + 1) = *(uint *)(psVar19 + 1) | (uint)local_10[5];
                  bVar5 = local_10[6];
                  *(uint *)(psVar19 + 3) = (uint)bVar5 << 0x18;
                  *(uint *)(psVar19 + 3) = (uint)bVar5 << 0x18 | (uint)local_10[7] << 0x10;
                  *(uint *)(psVar19 + 3) = *(uint *)(psVar19 + 3) | (uint)local_10[8] << 8;
                  *(uint *)(psVar19 + 3) = *(uint *)(psVar19 + 3) | (uint)local_10[9];
                  bVar5 = local_10[10];
                  *(uint *)(psVar19 + 5) = (uint)bVar5 << 0x18;
                  *(uint *)(psVar19 + 5) = (uint)bVar5 << 0x18 | (uint)local_10[0xb] << 0x10;
                  *(uint *)(psVar19 + 5) = *(uint *)(psVar19 + 5) | (uint)local_10[0xc] << 8;
                  pbVar18 = local_10 + 0xe;
                  *(uint *)(psVar19 + 5) = *(uint *)(psVar19 + 5) | (uint)local_10[0xd];
                }
              }
              if (pbVar18 == (byte *)0x0) {
                iVar25 = -1;
              }
              piVar9 = (int *)param_1[1];
              if (local_10 != (byte *)0x0) {
                pbVar18 = *(byte **)(piVar9[8] + 0xc);
                if ((pbVar18 == local_10) ||
                   ((pbVar18 < local_10 && (local_10 < (byte *)piVar9[6])))) {
                  piVar9 = (int *)(piVar9[8] + 0x14);
                  *piVar9 = *piVar9 + -1;
                }
                else {
                  (**(code **)(*piVar9 + 0x28))(local_10);
                }
              }
              if (iVar25 == 0) {
                if (*psVar19 != 0) {
                  iVar25 = -0x7ffbfffb;
                }
                if (iVar25 == 0) {
                  FUN_6605cf30((void *)(param_1[0x1c] + local_24),
                               *(int *)((int)(param_1[0x1c] + local_24) + 4),psVar19);
                  if (*(uint *)(*(int *)((int)param_1 + 0x122) + 0x15 + local_20) <
                      *(uint *)(psVar19 + 1)) {
                    *(uint *)(*(int *)((int)param_1 + 0x122) + 0x15 + local_20) =
                         *(uint *)(psVar19 + 1);
                  }
                }
              }
            }
            local_28 = (uint *)((int)local_28 + 1);
          } while ((int)local_28 < *(int *)(local_8 + 10 + param_1[0x1d]));
        }
        local_20 = local_20 + 0x3d;
        local_1c = local_1c + 1;
        local_24 = local_24 + 0x10;
        local_8 = local_8 + 0x14;
        if ((int)(uint)*(ushort *)((int)param_1 + 0x6e) <= local_1c) break;
      } while( true );
    }
  }
  (**(code **)(*(int *)param_1[1] + 8))(*(undefined4 *)((int)param_1 + 299),0);
  param_1[0x46] = 0;
  param_1[9] = iVar25;
  return iVar25;
}


