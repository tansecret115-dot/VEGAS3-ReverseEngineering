/* Module: mp3rw.dll
   Function: FUN_00448aa0
   Address: 00448aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00448aa0(int *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  char *pcVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  ushort uVar8;
  int *piVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  short sVar16;
  undefined2 uVar17;
  int iVar18;
  byte *pbVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  byte local_20;
  double local_18;
  
  piVar9 = param_1;
  uVar22 = param_1[0x1a];
  bVar5 = *(byte *)((int)param_1 + 0x11e);
  if ((uVar22 & 0x100) != 0) {
    if ((bVar5 & 2) != 0) {
      if (bVar5 == 3) {
        pbVar19 = (byte *)(param_1[0x43] + (uint)*(byte *)(param_1 + 0x4b) * 3);
        *(ushort *)((int)param_1 + 0x12d) = (ushort)*pbVar19;
        *(ushort *)((int)param_1 + 0x12f) = (ushort)pbVar19[1];
        *(ushort *)((int)param_1 + 0x131) = (ushort)pbVar19[2];
        if (((uVar22 & 0x80000) != 0) && ((uVar22 & 0x1000) == 0)) {
          iVar21 = 0;
          uVar8 = *(ushort *)((int)param_1 + 0x112);
          if (uVar8 != 0) {
            do {
              pcVar4 = (char *)(param_1[0x5e] + iVar21);
              iVar21 = iVar21 + 1;
              *pcVar4 = -1 - *pcVar4;
            } while (iVar21 < (int)(uint)uVar8);
          }
        }
      }
      goto switchD_00448ae1_caseD_3;
    }
    switch(*(undefined1 *)((int)param_1 + 0x11f)) {
    case 1:
      sVar16 = *(short *)((int)param_1 + 0x133) * 0xff;
      break;
    case 2:
      sVar16 = *(short *)((int)param_1 + 0x133) * 0x55;
      break;
    default:
      goto switchD_00448ae1_caseD_3;
    case 4:
      sVar16 = *(short *)((int)param_1 + 0x133) * 0x11;
      break;
    case 8:
    case 0x10:
      sVar16 = *(short *)((int)param_1 + 0x133);
      goto LAB_00448afb;
    }
    *(short *)((int)param_1 + 0x133) = sVar16;
LAB_00448afb:
    *(short *)((int)param_1 + 0x131) = sVar16;
    *(short *)((int)param_1 + 0x12f) = sVar16;
    *(short *)((int)param_1 + 0x12d) = sVar16;
  }
switchD_00448ae1_caseD_3:
  *(int *)((int)param_1 + 0x135) = param_1[0x4b];
  *(int *)((int)param_1 + 0x139) = param_1[0x4c];
  *(char *)((int)param_1 + 0x13d) = (char)param_1[0x4d];
  if ((param_1[0x1a] & 0x2000U) == 0) {
    if (((param_1[0x1a] & 0x80U) != 0) && (bVar5 == 3)) {
      bVar12 = *(byte *)((int)param_1 + 0x12f);
      bVar13 = *(byte *)((int)param_1 + 0x12d);
      uVar8 = *(ushort *)((int)param_1 + 0x112);
      iVar21 = 0;
      bVar14 = *(byte *)((int)param_1 + 0x131);
      if (uVar8 != 0) {
        pbVar19 = (byte *)(param_1[0x43] + 2);
        do {
          bVar15 = *(byte *)(iVar21 + param_1[0x5e]);
          if (bVar15 == 0) {
            *(ushort *)(pbVar19 + -2) = CONCAT11(bVar12,bVar13);
            *pbVar19 = bVar14;
          }
          else if (bVar15 != 0xff) {
            uVar22 = (0xff - (uint)bVar15) * (uint)bVar13 + 0x80 + (uint)pbVar19[-2] * (uint)bVar15
                     & 0xffff;
            pbVar19[-2] = (byte)((uVar22 >> 8) + uVar22 >> 8);
            uVar22 = (0xff - (uint)*(byte *)(iVar21 + param_1[0x5e])) * (uint)bVar12 + 0x80 +
                     (uint)pbVar19[-1] * (uint)*(byte *)(iVar21 + param_1[0x5e]) & 0xffff;
            pbVar19[-1] = (byte)((uVar22 >> 8) + uVar22 >> 8);
            uVar22 = (0xff - (uint)*(byte *)(iVar21 + param_1[0x5e])) * (uint)bVar14 + 0x80 +
                     (uint)*pbVar19 * (uint)*(byte *)(iVar21 + param_1[0x5e]) & 0xffff;
            *pbVar19 = (byte)((uVar22 >> 8) + uVar22 >> 8);
          }
          iVar21 = iVar21 + 1;
          pbVar19 = pbVar19 + 3;
        } while (iVar21 < (int)(uint)uVar8);
      }
    }
    goto LAB_00448fe5;
  }
  FUN_0044be50(param_1);
  if ((*(byte *)(param_1 + 0x1a) & 0x80) == 0) {
    if (bVar5 == 3) {
      uVar22 = (uint)*(ushort *)(param_1 + 0x44);
      if (uVar22 != 0) {
        pbVar19 = (byte *)(param_1[0x43] + 2);
        do {
          pbVar19[-2] = *(byte *)((uint)pbVar19[-2] + *(int *)((int)param_1 + 0x156));
          pbVar19[-1] = *(byte *)((uint)pbVar19[-1] + *(int *)((int)param_1 + 0x156));
          uVar22 = uVar22 - 1;
          *pbVar19 = *(byte *)((uint)*pbVar19 + *(int *)((int)param_1 + 0x156));
          pbVar19 = pbVar19 + 3;
        } while (uVar22 != 0);
      }
    }
    goto LAB_00448fe5;
  }
  if (bVar5 != 3) {
    if ((bVar5 & 2) == 0) {
      _CIpow();
      uVar17 = ftol();
      *(undefined2 *)(param_1 + 0x4f) = uVar17;
      _CIpow();
      uVar17 = ftol();
      *(undefined2 *)((int)param_1 + 0x133) = uVar17;
    }
    else {
      _CIpow();
      uVar17 = ftol();
      *(undefined2 *)((int)param_1 + 0x136) = uVar17;
      _CIpow();
      uVar17 = ftol();
      *(undefined2 *)(param_1 + 0x4e) = uVar17;
      _CIpow();
      uVar17 = ftol();
      *(undefined2 *)((int)param_1 + 0x13a) = uVar17;
      _CIpow();
      uVar17 = ftol();
      *(undefined2 *)((int)param_1 + 0x12d) = uVar17;
      _CIpow();
      uVar17 = ftol();
      *(undefined2 *)((int)param_1 + 0x12f) = uVar17;
      _CIpow();
      uVar17 = ftol();
      *(undefined2 *)((int)param_1 + 0x131) = uVar17;
    }
    goto LAB_00448fe5;
  }
  cVar6 = *(char *)((int)param_1 + 0x127);
  uVar8 = *(ushort *)(param_1 + 0x44);
  if (cVar6 == '\x02') {
    iVar21 = *(int *)((int)param_1 + 0x156);
    puVar1 = (ushort *)((int)param_1 + 0x12d);
    puVar2 = (ushort *)((int)param_1 + 0x12f);
    puVar3 = (ushort *)((int)param_1 + 0x131);
    param_1._0_2_ =
         CONCAT11(*(undefined1 *)((uint)*puVar2 + iVar21),*(undefined1 *)((uint)*puVar1 + iVar21));
    bVar12 = *(byte *)((uint)*puVar3 + iVar21);
    iVar21 = *(int *)((int)piVar9 + 0x15e);
    bVar13 = *(byte *)(iVar21 + (uint)*puVar1);
    bVar14 = *(byte *)(iVar21 + (uint)*puVar2);
    bVar15 = *(byte *)(iVar21 + (uint)*puVar3);
  }
  else {
    if (cVar6 == '\x01') {
LAB_00448ccc:
      local_18 = 1.0;
    }
    else if (cVar6 == '\x02') {
      local_18 = (double)((float)_DAT_0049c008 /
                         (*(float *)((int)param_1 + 0x152) * *(float *)((int)param_1 + 0x14e)));
    }
    else {
      if (cVar6 != '\x03') goto LAB_00448ccc;
      local_18 = (double)((float)_DAT_0049c008 /
                         (*(float *)((int)param_1 + 0x152) * (float)param_1[0x4a]));
    }
    if (_DAT_0049dc70 <= ABS(local_18 - _DAT_0049c008)) {
      _CIpow();
      uVar10 = ftol();
      _CIpow();
      uVar11 = ftol();
      param_1._0_2_ = CONCAT11(uVar11,uVar10);
      _CIpow();
      bVar12 = ftol();
    }
    else {
      bVar12 = *(byte *)((int)param_1 + 0x131);
      param_1._0_2_ =
           CONCAT11(*(undefined1 *)((int)param_1 + 0x12f),*(undefined1 *)((int)param_1 + 0x12d));
    }
    _CIpow();
    bVar13 = ftol();
    _CIpow();
    bVar14 = ftol();
    _CIpow();
    bVar15 = ftol();
  }
  iVar21 = 0;
  if (uVar8 != 0) {
    pbVar19 = (byte *)(piVar9[0x43] + 2);
    do {
      if ((iVar21 < (int)(uint)*(ushort *)((int)piVar9 + 0x112)) &&
         (bVar7 = *(byte *)(piVar9[0x5e] + iVar21), bVar7 != 0xff)) {
        if (bVar7 == 0) {
          *(undefined2 *)(pbVar19 + -2) = param_1._0_2_;
          *pbVar19 = bVar12;
        }
        else {
          uVar22 = (uint)*(byte *)((uint)pbVar19[-2] + *(int *)((int)piVar9 + 0x15e)) * (uint)bVar7
                   + 0x80 + (0xff - (uint)bVar7) * (uint)bVar13 & 0xffff;
          pbVar19[-2] = *(byte *)(((int)((uVar22 >> 8) + uVar22) >> 8 & 0xffU) +
                                 *(int *)((int)piVar9 + 0x15a));
          uVar22 = (uint)*(byte *)((uint)pbVar19[-1] + *(int *)((int)piVar9 + 0x15e)) *
                   (uint)*(byte *)(piVar9[0x5e] + iVar21) + 0x80 +
                   (0xff - (uint)*(byte *)(piVar9[0x5e] + iVar21)) * (uint)bVar14 & 0xffff;
          pbVar19[-1] = *(byte *)(((int)((uVar22 >> 8) + uVar22) >> 8 & 0xffU) +
                                 *(int *)((int)piVar9 + 0x15a));
          uVar22 = (uint)*(byte *)((uint)*pbVar19 + *(int *)((int)piVar9 + 0x15e)) *
                   (uint)*(byte *)(piVar9[0x5e] + iVar21) + 0x80 +
                   (0xff - (uint)*(byte *)(piVar9[0x5e] + iVar21)) * (uint)bVar15 & 0xffff;
          *pbVar19 = *(byte *)(((int)((uVar22 >> 8) + uVar22) >> 8 & 0xffU) +
                              *(int *)((int)piVar9 + 0x15a));
        }
      }
      else {
        pbVar19[-2] = *(byte *)((uint)pbVar19[-2] + *(int *)((int)piVar9 + 0x156));
        pbVar19[-1] = *(byte *)((uint)pbVar19[-1] + *(int *)((int)piVar9 + 0x156));
        *pbVar19 = *(byte *)((uint)*pbVar19 + *(int *)((int)piVar9 + 0x156));
      }
      iVar21 = iVar21 + 1;
      pbVar19 = pbVar19 + 3;
    } while (iVar21 < (int)(uint)uVar8);
  }
LAB_00448fe5:
  if (((*(byte *)(piVar9 + 0x1a) & 8) != 0) && (bVar5 == 3)) {
    iVar20 = 8 - (uint)*(byte *)((int)piVar9 + 0x16e);
    param_1 = (int *)(8 - (uint)*(byte *)((int)piVar9 + 0x16f));
    iVar21 = 8 - (uint)*(byte *)(piVar9 + 0x5c);
    iVar18 = 0;
    if ((iVar20 < 0) || (8 < iVar20)) {
      iVar20 = 0;
    }
    if (((int)param_1 < 0) || (8 < (int)param_1)) {
      param_1 = (int *)0x0;
    }
    if ((iVar21 < 0) || (8 < iVar21)) {
      iVar21 = 0;
    }
    if (*(ushort *)(piVar9 + 0x44) != 0) {
      uVar22 = (uint)*(ushort *)(piVar9 + 0x44);
      do {
        *(byte *)(iVar18 + piVar9[0x43]) = *(byte *)(iVar18 + piVar9[0x43]) >> ((byte)iVar20 & 0x1f)
        ;
        pbVar19 = (byte *)(iVar18 + 1 + piVar9[0x43]);
        *pbVar19 = *pbVar19 >> ((byte)param_1 & 0x1f);
        pbVar19 = (byte *)(iVar18 + 2 + piVar9[0x43]);
        local_20 = (byte)iVar21;
        iVar18 = iVar18 + 3;
        *pbVar19 = *pbVar19 >> (local_20 & 0x1f);
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
  }
  return;
}


