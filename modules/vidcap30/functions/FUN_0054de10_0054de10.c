/* Module: vidcap30.exe
   Function: FUN_0054de10
   Address: 0054de10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054de10(uint param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  undefined1 *puVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  char *pcVar19;
  uint uVar20;
  byte *pbVar21;
  int iVar22;
  uint uVar23;
  byte *pbVar24;
  byte *pbVar25;
  uint local_28;
  undefined1 *local_20;
  int local_14;
  byte *local_10;
  uint local_c;
  uint local_8;
  
  iVar4 = param_1;
  uVar16 = *(uint *)((int)param_2 + 4);
  uVar14 = (uint)*(byte *)(param_1 + 0x1e6);
  bVar1 = *(byte *)(param_1 + 0x11d);
  puVar13 = *(undefined1 **)(param_1 + 0xe4);
  iVar22 = *(int *)(param_1 + 0xe0);
  uVar23 = (int)(*(byte *)((int)param_2 + 0xb) + 7) >> 3;
  local_28 = 0x7fffffff;
  if (((bVar1 & 8) != 0) && (bVar1 != 8)) {
    local_28 = 0;
    uVar18 = 0;
    if (uVar16 != 0) {
      do {
        uVar7 = (uint)(byte)puVar13[uVar18 + 1];
        if (0x7f < uVar7) {
          uVar7 = 0x100 - uVar7;
        }
        local_28 = local_28 + uVar7;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar16);
    }
    if (*(char *)(param_1 + 0x1e5) == '\x02') {
      iVar10 = 0;
      uVar18 = local_28 >> 10 & 0x3fffc0;
      local_28 = local_28 & 0xffff;
      if (uVar14 != 0) {
        do {
          if (*(char *)(*(int *)(param_1 + 0x1e7) + iVar10) == '\0') {
            uVar7 = (uint)*(ushort *)(*(int *)(param_1 + 0x1eb) + iVar10 * 2);
            local_28 = uVar7 * local_28 >> 8;
            uVar18 = uVar7 * uVar18 >> 8;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)uVar14);
      }
      uVar18 = **(ushort **)(param_1 + 499) * uVar18 >> 3;
      if (uVar18 < 0x3fffc1) {
        local_28 = (**(ushort **)(param_1 + 499) * local_28 >> 3) + uVar18 * 0x400;
      }
      else {
        local_28 = 0x7fffffff;
      }
    }
  }
  if (bVar1 == 0x10) {
    pcVar19 = puVar13 + 1;
    pcVar6 = (char *)(*(int *)(param_1 + 0xe8) + 1);
    uVar7 = 0;
    pcVar11 = pcVar19;
    for (uVar18 = uVar23; uVar18 != 0; uVar18 = uVar18 - 1) {
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar6 = cVar2;
      pcVar6 = pcVar6 + 1;
      uVar7 = uVar23;
    }
    if (uVar7 < uVar16) {
      iVar10 = uVar16 - uVar7;
      do {
        cVar2 = *pcVar11;
        cVar3 = *pcVar19;
        pcVar11 = pcVar11 + 1;
        pcVar19 = pcVar19 + 1;
        *pcVar6 = cVar2 - cVar3;
        pcVar6 = pcVar6 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    local_20 = *(undefined1 **)(param_1 + 0xe8);
LAB_0054df89:
    if ((bVar1 & 0x20) != 0) {
      uVar18 = 0;
      param_2 = (byte *)local_28;
      if (*(char *)(param_1 + 0x1e5) == '\x02') {
        uVar20 = local_28 & 0xffff;
        uVar7 = local_28 >> 10 & 0x3fffc0;
        iVar10 = 0;
        if (uVar14 != 0) {
          do {
            if (*(char *)(iVar10 + *(int *)(param_1 + 0x1e7)) == '\x02') {
              uVar8 = (uint)*(ushort *)(*(int *)(param_1 + 0x1ef) + iVar10 * 2);
              uVar20 = uVar20 * uVar8 >> 8;
              uVar7 = uVar7 * uVar8 >> 8;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)uVar14);
        }
        uVar8 = (uint)*(ushort *)(*(int *)(param_1 + 0x1f7) + 4);
        uVar7 = uVar8 * uVar7 >> 3;
        if (uVar7 < 0x3fffc1) {
          param_2 = (byte *)((uVar8 * uVar20 >> 3) + uVar7 * 0x400);
        }
        else {
          param_2 = (byte *)0x7fffffff;
        }
      }
      local_8 = 0;
      pcVar11 = puVar13 + 1;
      pbVar15 = *(byte **)(param_1 + 0xec);
      if (uVar16 != 0) {
        iVar10 = (iVar22 + 1) - (int)pcVar11;
        do {
          pbVar15 = pbVar15 + 1;
          cVar2 = *pcVar11;
          cVar3 = pcVar11[iVar10];
          *pbVar15 = cVar2 - cVar3;
          uVar7 = (uint)(byte)(cVar2 - cVar3);
          pcVar11 = pcVar11 + 1;
          if (0x7f < uVar7) {
            uVar7 = 0x100 - uVar7;
          }
          uVar18 = uVar18 + uVar7;
        } while ((uVar18 <= param_2) && (local_8 = local_8 + 1, local_8 < uVar16));
      }
      if (*(char *)(param_1 + 0x1e5) == '\x02') {
        uVar7 = uVar18 & 0xffff;
        uVar18 = uVar18 >> 10 & 0x3fffc0;
        iVar10 = 0;
        if (uVar14 != 0) {
          do {
            if (*(char *)(iVar10 + *(int *)(param_1 + 0x1e7)) == '\x02') {
              uVar20 = (uint)*(ushort *)(*(int *)(param_1 + 0x1eb) + iVar10 * 2);
              uVar7 = uVar7 * uVar20 >> 8;
              uVar18 = uVar18 * uVar20 >> 8;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)uVar14);
        }
        uVar20 = (uint)*(ushort *)(*(int *)(param_1 + 499) + 4);
        uVar18 = uVar20 * uVar18 >> 3;
        if (uVar18 < 0x3fffc1) {
          uVar18 = (uVar20 * uVar7 >> 3) + uVar18 * 0x400;
        }
        else {
          uVar18 = 0x7fffffff;
        }
      }
      if (uVar18 < local_28) {
        local_20 = *(undefined1 **)(param_1 + 0xec);
        local_28 = uVar18;
      }
    }
    if (bVar1 != 0x40) goto LAB_0054e240;
    pcVar11 = (char *)(*(int *)(param_1 + 0xf0) + 1);
    pbVar15 = puVar13 + 1;
    pbVar21 = (byte *)(iVar22 + 1);
    param_1 = 0;
    pbVar24 = pbVar15;
    for (uVar18 = uVar23; uVar18 != 0; uVar18 = uVar18 - 1) {
      *pcVar11 = *pbVar24 - (*pbVar21 >> 1);
      pcVar11 = pcVar11 + 1;
      pbVar21 = pbVar21 + 1;
      pbVar24 = pbVar24 + 1;
      param_1 = uVar23;
    }
    if (param_1 < uVar16) {
      param_1 = uVar16 - param_1;
      do {
        *pcVar11 = *pbVar24 - (char)(((uint)*pbVar21 + (uint)*pbVar15) / 2);
        pcVar11 = pcVar11 + 1;
        pbVar15 = pbVar15 + 1;
        pbVar21 = pbVar21 + 1;
        pbVar24 = pbVar24 + 1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    local_20 = *(undefined1 **)(iVar4 + 0xf0);
  }
  else {
    local_20 = puVar13;
    if ((bVar1 & 0x10) != 0) {
      uVar18 = 0;
      local_c = local_28;
      if (*(char *)(param_1 + 0x1e5) == '\x02') {
        uVar20 = local_28 & 0xffff;
        uVar7 = local_28 >> 10 & 0x3fffc0;
        iVar10 = 0;
        if (uVar14 != 0) {
          do {
            if (*(char *)(*(int *)(param_1 + 0x1e7) + iVar10) == '\x01') {
              uVar8 = (uint)*(ushort *)(*(int *)(param_1 + 0x1ef) + iVar10 * 2);
              uVar20 = uVar8 * uVar20 >> 8;
              uVar7 = uVar8 * uVar7 >> 8;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)uVar14);
        }
        uVar8 = (uint)*(ushort *)(*(int *)(param_1 + 0x1f7) + 2);
        uVar7 = uVar8 * uVar7 >> 3;
        if (uVar7 < 0x3fffc1) {
          local_c = (uVar8 * uVar20 >> 3) + uVar7 * 0x400;
        }
        else {
          local_c = 0x7fffffff;
        }
      }
      local_10 = (byte *)0x0;
      pbVar15 = puVar13 + 1;
      pbVar24 = (byte *)(*(int *)(param_1 + 0xe8) + 1);
      pbVar21 = pbVar15;
      for (uVar7 = uVar23; uVar7 != 0; uVar7 = uVar7 - 1) {
        bVar5 = *pbVar21;
        *pbVar24 = bVar5;
        uVar20 = (uint)bVar5;
        if (0x7f < uVar20) {
          uVar20 = 0x100 - uVar20;
        }
        uVar18 = uVar18 + uVar20;
        pbVar21 = pbVar21 + 1;
        pbVar24 = pbVar24 + 1;
        local_10 = (byte *)uVar23;
      }
      if (local_10 < *(uint *)((int)param_2 + 4)) {
        do {
          bVar5 = *pbVar21;
          bVar9 = *pbVar15;
          *pbVar24 = bVar5 - bVar9;
          uVar7 = (uint)(byte)(bVar5 - bVar9);
          if (0x7f < uVar7) {
            uVar7 = 0x100 - uVar7;
          }
          uVar18 = uVar18 + uVar7;
          if (local_c < uVar18) break;
          local_10 = (byte *)((int)local_10 + 1);
          pbVar21 = pbVar21 + 1;
          pbVar15 = pbVar15 + 1;
          pbVar24 = pbVar24 + 1;
        } while (local_10 < *(uint *)((int)param_2 + 4));
      }
      if (*(char *)(param_1 + 0x1e5) == '\x02') {
        uVar7 = uVar18 & 0xffff;
        uVar18 = uVar18 >> 10 & 0x3fffc0;
        iVar10 = 0;
        if (uVar14 != 0) {
          do {
            if (*(char *)(iVar10 + *(int *)(param_1 + 0x1e7)) == '\x01') {
              uVar20 = (uint)*(ushort *)(*(int *)(param_1 + 0x1ef) + iVar10 * 2);
              uVar7 = uVar7 * uVar20 >> 8;
              uVar18 = uVar18 * uVar20 >> 8;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)uVar14);
        }
        uVar20 = (uint)*(ushort *)(*(int *)(param_1 + 0x1f7) + 2);
        uVar18 = uVar20 * uVar18 >> 3;
        if (uVar18 < 0x3fffc1) {
          uVar18 = (uVar20 * uVar7 >> 3) + uVar18 * 0x400;
        }
        else {
          uVar18 = 0x7fffffff;
        }
      }
      if (uVar18 < local_28) {
        local_20 = *(undefined1 **)(param_1 + 0xe8);
        local_28 = uVar18;
      }
    }
    if (bVar1 != 0x20) goto LAB_0054df89;
    pcVar11 = *(char **)(param_1 + 0xec);
    uVar18 = 0;
    if (uVar16 != 0) {
      pcVar6 = puVar13 + iVar22 + (1 - (int)puVar13);
      do {
        pcVar11 = pcVar11 + 1;
        iVar10 = uVar18 + 1;
        cVar2 = *pcVar6;
        uVar18 = uVar18 + 1;
        pcVar6 = pcVar6 + 1;
        *pcVar11 = puVar13[iVar10] - cVar2;
      } while (uVar18 < uVar16);
    }
    local_20 = *(undefined1 **)(param_1 + 0xec);
LAB_0054e240:
    if ((bVar1 & 0x40) != 0) {
      iVar10 = 0;
      param_2 = (byte *)0x0;
      local_c = local_28;
      if (*(char *)(param_1 + 0x1e5) == '\x02') {
        uVar7 = local_28 & 0xffff;
        uVar18 = local_28 >> 10 & 0x3fffc0;
        if (uVar14 != 0) {
          do {
            if (*(char *)(iVar10 + *(int *)(param_1 + 0x1e7)) == '\x03') {
              uVar20 = (uint)*(ushort *)(*(int *)(param_1 + 0x1ef) + iVar10 * 2);
              uVar7 = uVar20 * uVar7 >> 8;
              uVar18 = uVar20 * uVar18 >> 8;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)uVar14);
        }
        uVar20 = (uint)*(ushort *)(*(int *)(param_1 + 0x1f7) + 6);
        uVar18 = uVar20 * uVar18 >> 3;
        if (uVar18 < 0x3fffc1) {
          local_c = (uVar20 * uVar7 >> 3) + uVar18 * 0x400;
        }
        else {
          local_c = 0x7fffffff;
        }
      }
      local_10 = (byte *)0x0;
      pbVar15 = puVar13 + 1;
      pbVar24 = (byte *)(*(int *)(param_1 + 0xf0) + 1);
      pbVar21 = (byte *)(iVar22 + 1);
      pbVar25 = pbVar15;
      for (uVar18 = uVar23; uVar18 != 0; uVar18 = uVar18 - 1) {
        bVar5 = *pbVar25 - (*pbVar21 >> 1);
        *pbVar24 = bVar5;
        uVar7 = (uint)bVar5;
        pbVar24 = pbVar24 + 1;
        pbVar21 = pbVar21 + 1;
        pbVar25 = pbVar25 + 1;
        if (0x7f < uVar7) {
          uVar7 = 0x100 - uVar7;
        }
        param_2 = (byte *)((int)param_2 + uVar7);
        local_10 = (byte *)uVar23;
      }
      for (; local_10 < uVar16; local_10 = (byte *)((int)local_10 + 1)) {
        bVar5 = *pbVar25 - (char)(((uint)*pbVar15 + (uint)*pbVar21) / 2);
        *pbVar24 = bVar5;
        uVar18 = (uint)bVar5;
        pbVar24 = pbVar24 + 1;
        pbVar15 = pbVar15 + 1;
        pbVar21 = pbVar21 + 1;
        pbVar25 = pbVar25 + 1;
        if (0x7f < uVar18) {
          uVar18 = 0x100 - uVar18;
        }
        param_2 = (byte *)((int)param_2 + uVar18);
        if (local_c < param_2) break;
      }
      if (*(char *)(param_1 + 0x1e5) == '\x02') {
        iVar10 = 0;
        uVar18 = (uint)param_2 & 0xffff;
        uVar7 = (uint)param_2 >> 10 & 0x3fffc0;
        if (uVar14 != 0) {
          do {
            if (*(char *)(iVar10 + *(int *)(param_1 + 0x1e7)) == '\0') {
              uVar20 = (uint)*(ushort *)(*(int *)(param_1 + 0x1eb) + iVar10 * 2);
              uVar18 = uVar18 * uVar20 >> 8;
              uVar7 = uVar7 * uVar20 >> 8;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)uVar14);
        }
        uVar20 = (uint)*(ushort *)(*(int *)(param_1 + 499) + 6);
        uVar7 = uVar20 * uVar7 >> 3;
        if (uVar7 < 0x3fffc1) {
          param_2 = (byte *)((uVar20 * uVar18 >> 3) + uVar7 * 0x400);
        }
        else {
          param_2 = (byte *)0x7fffffff;
        }
      }
      if (param_2 < local_28) {
        local_20 = *(undefined1 **)(param_1 + 0xf0);
        local_28 = (uint)param_2;
      }
    }
    if (bVar1 == 0x80) {
      pbVar15 = puVar13 + 1;
      uVar7 = 0;
      param_2 = pbVar15;
      pcVar11 = (char *)(*(int *)(param_1 + 0xf4) + 1);
      pbVar21 = (byte *)(iVar22 + 1);
      for (uVar18 = uVar23; uVar18 != 0; uVar18 = uVar18 - 1) {
        bVar1 = *pbVar21;
        pbVar21 = pbVar21 + 1;
        *pcVar11 = *param_2 - bVar1;
        param_2 = param_2 + 1;
        uVar7 = uVar23;
        pcVar11 = pcVar11 + 1;
      }
      if (uVar7 < uVar16) {
        iVar22 = (iVar22 + 1) - (int)pbVar15;
        local_10 = (byte *)(uVar16 - uVar7);
        do {
          bVar1 = pbVar15[iVar22];
          bVar5 = *pbVar21;
          bVar9 = *pbVar15;
          pbVar21 = pbVar21 + 1;
          iVar10 = (uint)bVar5 - (uint)bVar1;
          pbVar15 = pbVar15 + 1;
          iVar12 = (uint)bVar9 - (uint)bVar1;
          local_8 = iVar10;
          if (iVar10 < 0) {
            local_8 = -iVar10;
          }
          iVar17 = iVar12;
          if (iVar12 < 0) {
            iVar17 = -iVar12;
          }
          iVar10 = iVar10 + iVar12;
          if (iVar10 < 0) {
            iVar10 = -iVar10;
          }
          if (((iVar17 < (int)local_8) || (iVar10 < (int)local_8)) &&
             (bVar9 = bVar1, iVar17 <= iVar10)) {
            bVar9 = bVar5;
          }
          *pcVar11 = *param_2 - bVar9;
          pcVar11 = pcVar11 + 1;
          param_2 = param_2 + 1;
          local_10 = (byte *)((int)local_10 + -1);
        } while (local_10 != (byte *)0x0);
      }
      local_20 = *(undefined1 **)(param_1 + 0xf4);
      goto LAB_0054e974;
    }
  }
  if ((bVar1 & 0x80) != 0) {
    iVar10 = 0;
    param_1 = 0;
    local_8 = local_28;
    if (*(char *)(iVar4 + 0x1e5) == '\x02') {
      uVar7 = local_28 & 0xffff;
      uVar18 = local_28 >> 10 & 0x3fffc0;
      if (uVar14 != 0) {
        do {
          if (*(char *)(iVar10 + *(int *)(iVar4 + 0x1e7)) == '\x04') {
            uVar20 = (uint)*(ushort *)(*(int *)(iVar4 + 0x1ef) + iVar10 * 2);
            uVar7 = uVar7 * uVar20 >> 8;
            uVar18 = uVar18 * uVar20 >> 8;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)uVar14);
      }
      uVar20 = (uint)*(ushort *)(*(int *)(iVar4 + 0x1f7) + 8);
      uVar18 = uVar20 * uVar18 >> 3;
      if (uVar18 < 0x3fffc1) {
        local_8 = (uVar20 * uVar7 >> 3) + uVar18 * 0x400;
      }
      else {
        local_8 = 0x7fffffff;
      }
    }
    param_2 = (byte *)0x0;
    pbVar15 = puVar13 + 1;
    pbVar24 = (byte *)(*(int *)(iVar4 + 0xf4) + 1);
    pbVar21 = (byte *)(iVar22 + 1);
    local_10 = pbVar15;
    for (uVar18 = uVar23; uVar18 != 0; uVar18 = uVar18 - 1) {
      bVar1 = *local_10;
      bVar5 = *pbVar21;
      *pbVar24 = bVar1 - bVar5;
      uVar7 = (uint)(byte)(bVar1 - bVar5);
      pbVar24 = pbVar24 + 1;
      pbVar21 = pbVar21 + 1;
      local_10 = local_10 + 1;
      if (0x7f < uVar7) {
        uVar7 = 0x100 - uVar7;
      }
      param_1 = param_1 + uVar7;
      param_2 = (byte *)uVar23;
    }
    if (param_2 < uVar16) {
      iVar22 = (iVar22 + 1) - (int)pbVar15;
      do {
        bVar1 = *pbVar21;
        pbVar21 = pbVar21 + 1;
        bVar5 = pbVar15[iVar22];
        bVar9 = *pbVar15;
        iVar10 = (uint)bVar1 - (uint)bVar5;
        pbVar15 = pbVar15 + 1;
        iVar12 = (uint)bVar9 - (uint)bVar5;
        local_14 = iVar10;
        if (iVar10 < 0) {
          local_14 = -iVar10;
        }
        iVar17 = iVar12;
        if (iVar12 < 0) {
          iVar17 = -iVar12;
        }
        iVar10 = iVar10 + iVar12;
        if (iVar10 < 0) {
          iVar10 = -iVar10;
        }
        if (((iVar17 < local_14) || (iVar10 < local_14)) && (bVar9 = bVar1, iVar10 < iVar17)) {
          bVar9 = bVar5;
        }
        bVar1 = *local_10;
        *pbVar24 = bVar1 - bVar9;
        uVar23 = (uint)(byte)(bVar1 - bVar9);
        pbVar24 = pbVar24 + 1;
        local_10 = local_10 + 1;
        if (0x7f < uVar23) {
          uVar23 = 0x100 - uVar23;
        }
        param_1 = param_1 + uVar23;
      } while ((param_1 <= local_8) && (param_2 = (byte *)((int)param_2 + 1), param_2 < uVar16));
    }
    if (*(char *)(iVar4 + 0x1e5) == '\x02') {
      uVar16 = param_1 & 0xffff;
      uVar23 = param_1 >> 10 & 0x3fffc0;
      iVar22 = 0;
      if (uVar14 != 0) {
        do {
          if (*(char *)(iVar22 + *(int *)(iVar4 + 0x1e7)) == '\x04') {
            uVar18 = (uint)*(ushort *)(*(int *)(iVar4 + 0x1eb) + iVar22 * 2);
            uVar16 = uVar16 * uVar18 >> 8;
            uVar23 = uVar23 * uVar18 >> 8;
          }
          iVar22 = iVar22 + 1;
        } while (iVar22 < (int)uVar14);
      }
      uVar18 = (uint)*(ushort *)(*(int *)(iVar4 + 499) + 8);
      uVar23 = uVar18 * uVar23 >> 3;
      if (uVar23 < 0x3fffc1) {
        param_1 = (uVar18 * uVar16 >> 3) + uVar23 * 0x400;
      }
      else {
        param_1 = 0x7fffffff;
      }
    }
    if (param_1 < local_28) {
      local_20 = *(undefined1 **)(iVar4 + 0xf4);
    }
  }
LAB_0054e974:
  FUN_0054e9d0(iVar4,local_20);
  if (*(char *)(iVar4 + 0x1e6) != '\0') {
    iVar22 = 1;
    if (1 < uVar14) {
      do {
        puVar13 = (undefined1 *)(*(int *)(iVar4 + 0x1e7) + iVar22);
        iVar22 = iVar22 + 1;
        *puVar13 = puVar13[-1];
      } while (iVar22 < (int)uVar14);
    }
    *(undefined1 *)(*(int *)(iVar4 + 0x1e7) + iVar22) = *local_20;
  }
  return;
}


