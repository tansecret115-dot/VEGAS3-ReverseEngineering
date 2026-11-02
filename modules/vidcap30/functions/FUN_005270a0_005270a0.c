/* Module: vidcap30.exe
   Function: FUN_005270a0
   Address: 005270a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005270a0(int param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  char *pcVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  ushort uVar8;
  int iVar9;
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
  
  iVar9 = param_1;
  uVar22 = *(uint *)(param_1 + 0x68);
  bVar5 = *(byte *)(param_1 + 0x11e);
  if ((uVar22 & 0x100) != 0) {
    if ((bVar5 & 2) != 0) {
      if (bVar5 == 3) {
        pbVar19 = (byte *)(*(int *)(param_1 + 0x10c) + (uint)*(byte *)(param_1 + 300) * 3);
        *(ushort *)(param_1 + 0x12d) = (ushort)*pbVar19;
        *(ushort *)(param_1 + 0x12f) = (ushort)pbVar19[1];
        *(ushort *)(param_1 + 0x131) = (ushort)pbVar19[2];
        if (((uVar22 & 0x80000) != 0) && ((uVar22 & 0x1000) == 0)) {
          iVar21 = 0;
          uVar8 = *(ushort *)(param_1 + 0x112);
          if (uVar8 != 0) {
            do {
              pcVar4 = (char *)(*(int *)(param_1 + 0x178) + iVar21);
              iVar21 = iVar21 + 1;
              *pcVar4 = -1 - *pcVar4;
            } while (iVar21 < (int)(uint)uVar8);
          }
        }
      }
      goto switchD_005270e1_caseD_3;
    }
    switch(*(undefined1 *)(param_1 + 0x11f)) {
    case 1:
      sVar16 = *(short *)(param_1 + 0x133) * 0xff;
      break;
    case 2:
      sVar16 = *(short *)(param_1 + 0x133) * 0x55;
      break;
    default:
      goto switchD_005270e1_caseD_3;
    case 4:
      sVar16 = *(short *)(param_1 + 0x133) * 0x11;
      break;
    case 8:
    case 0x10:
      sVar16 = *(short *)(param_1 + 0x133);
      goto LAB_005270fb;
    }
    *(short *)(param_1 + 0x133) = sVar16;
LAB_005270fb:
    *(short *)(param_1 + 0x131) = sVar16;
    *(short *)(param_1 + 0x12f) = sVar16;
    *(short *)(param_1 + 0x12d) = sVar16;
  }
switchD_005270e1_caseD_3:
  *(undefined4 *)(param_1 + 0x135) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(param_1 + 0x139) = *(undefined4 *)(param_1 + 0x130);
  *(undefined1 *)(param_1 + 0x13d) = *(undefined1 *)(param_1 + 0x134);
  if ((*(uint *)(param_1 + 0x68) & 0x2000) == 0) {
    if (((*(uint *)(param_1 + 0x68) & 0x80) != 0) && (bVar5 == 3)) {
      bVar12 = *(byte *)(param_1 + 0x12f);
      bVar13 = *(byte *)(param_1 + 0x12d);
      uVar8 = *(ushort *)(param_1 + 0x112);
      iVar21 = 0;
      bVar14 = *(byte *)(param_1 + 0x131);
      if (uVar8 != 0) {
        pbVar19 = (byte *)(*(int *)(param_1 + 0x10c) + 2);
        do {
          bVar15 = *(byte *)(iVar21 + *(int *)(param_1 + 0x178));
          if (bVar15 == 0) {
            *(ushort *)(pbVar19 + -2) = CONCAT11(bVar12,bVar13);
            *pbVar19 = bVar14;
          }
          else if (bVar15 != 0xff) {
            uVar22 = (0xff - (uint)bVar15) * (uint)bVar13 + 0x80 + (uint)pbVar19[-2] * (uint)bVar15
                     & 0xffff;
            pbVar19[-2] = (byte)((uVar22 >> 8) + uVar22 >> 8);
            uVar22 = (uint)*(byte *)(iVar21 + *(int *)(param_1 + 0x178));
            uVar22 = (0xff - uVar22) * (uint)bVar12 + 0x80 + pbVar19[-1] * uVar22 & 0xffff;
            pbVar19[-1] = (byte)((uVar22 >> 8) + uVar22 >> 8);
            uVar22 = (uint)*(byte *)(iVar21 + *(int *)(param_1 + 0x178));
            uVar22 = (0xff - uVar22) * (uint)bVar14 + 0x80 + *pbVar19 * uVar22 & 0xffff;
            *pbVar19 = (byte)((uVar22 >> 8) + uVar22 >> 8);
          }
          iVar21 = iVar21 + 1;
          pbVar19 = pbVar19 + 3;
        } while (iVar21 < (int)(uint)uVar8);
      }
    }
    goto LAB_005275e5;
  }
  FUN_0052a450(param_1);
  if ((*(byte *)(param_1 + 0x68) & 0x80) == 0) {
    if (bVar5 == 3) {
      uVar22 = (uint)*(ushort *)(param_1 + 0x110);
      if (uVar22 != 0) {
        pbVar19 = (byte *)(*(int *)(param_1 + 0x10c) + 2);
        do {
          pbVar19[-2] = *(byte *)((uint)pbVar19[-2] + *(int *)(param_1 + 0x156));
          pbVar19[-1] = *(byte *)((uint)pbVar19[-1] + *(int *)(param_1 + 0x156));
          uVar22 = uVar22 - 1;
          *pbVar19 = *(byte *)((uint)*pbVar19 + *(int *)(param_1 + 0x156));
          pbVar19 = pbVar19 + 3;
        } while (uVar22 != 0);
      }
    }
    goto LAB_005275e5;
  }
  if (bVar5 != 3) {
    if ((bVar5 & 2) == 0) {
      _CIpow();
      uVar17 = ftol();
      *(undefined2 *)(param_1 + 0x13c) = uVar17;
      _CIpow();
      uVar17 = ftol();
      *(undefined2 *)(param_1 + 0x133) = uVar17;
    }
    else {
      _CIpow();
      uVar17 = ftol();
      *(undefined2 *)(param_1 + 0x136) = uVar17;
      _CIpow();
      uVar17 = ftol();
      *(undefined2 *)(param_1 + 0x138) = uVar17;
      _CIpow();
      uVar17 = ftol();
      *(undefined2 *)(param_1 + 0x13a) = uVar17;
      _CIpow();
      uVar17 = ftol();
      *(undefined2 *)(param_1 + 0x12d) = uVar17;
      _CIpow();
      uVar17 = ftol();
      *(undefined2 *)(param_1 + 0x12f) = uVar17;
      _CIpow();
      uVar17 = ftol();
      *(undefined2 *)(param_1 + 0x131) = uVar17;
    }
    goto LAB_005275e5;
  }
  cVar6 = *(char *)(param_1 + 0x127);
  uVar8 = *(ushort *)(param_1 + 0x110);
  if (cVar6 == '\x02') {
    iVar21 = *(int *)(param_1 + 0x156);
    puVar1 = (ushort *)(param_1 + 0x12d);
    puVar2 = (ushort *)(param_1 + 0x12f);
    puVar3 = (ushort *)(param_1 + 0x131);
    param_1._0_2_ =
         CONCAT11(*(undefined1 *)((uint)*puVar2 + iVar21),*(undefined1 *)((uint)*puVar1 + iVar21));
    bVar12 = *(byte *)((uint)*puVar3 + iVar21);
    iVar21 = *(int *)(iVar9 + 0x15e);
    bVar13 = *(byte *)(iVar21 + (uint)*puVar1);
    bVar14 = *(byte *)(iVar21 + (uint)*puVar2);
    bVar15 = *(byte *)(iVar21 + (uint)*puVar3);
  }
  else {
    if (cVar6 == '\x01') {
LAB_005272cc:
      local_18 = 1.0;
    }
    else if (cVar6 == '\x02') {
      local_18 = (double)((float)_DAT_00587ad0 /
                         (*(float *)(param_1 + 0x152) * *(float *)(param_1 + 0x14e)));
    }
    else {
      if (cVar6 != '\x03') goto LAB_005272cc;
      local_18 = (double)((float)_DAT_00587ad0 /
                         (*(float *)(param_1 + 0x152) * *(float *)(param_1 + 0x128)));
    }
    if (_DAT_00589f20 <= ABS(local_18 - _DAT_00587ad0)) {
      _CIpow();
      uVar10 = ftol();
      _CIpow();
      uVar11 = ftol();
      param_1._0_2_ = CONCAT11(uVar11,uVar10);
      _CIpow();
      bVar12 = ftol();
    }
    else {
      bVar12 = *(byte *)(param_1 + 0x131);
      param_1._0_2_ = CONCAT11(*(undefined1 *)(param_1 + 0x12f),*(undefined1 *)(param_1 + 0x12d));
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
    pbVar19 = (byte *)(*(int *)(iVar9 + 0x10c) + 2);
    do {
      if ((iVar21 < (int)(uint)*(ushort *)(iVar9 + 0x112)) &&
         (bVar7 = *(byte *)(*(int *)(iVar9 + 0x178) + iVar21), bVar7 != 0xff)) {
        if (bVar7 == 0) {
          *(undefined2 *)(pbVar19 + -2) = (undefined2)param_1;
          *pbVar19 = bVar12;
        }
        else {
          uVar22 = (uint)*(byte *)((uint)pbVar19[-2] + *(int *)(iVar9 + 0x15e)) * (uint)bVar7 + 0x80
                   + (0xff - (uint)bVar7) * (uint)bVar13 & 0xffff;
          pbVar19[-2] = *(byte *)(((int)((uVar22 >> 8) + uVar22) >> 8 & 0xffU) +
                                 *(int *)(iVar9 + 0x15a));
          uVar22 = (uint)*(byte *)(*(int *)(iVar9 + 0x178) + iVar21);
          uVar22 = *(byte *)((uint)pbVar19[-1] + *(int *)(iVar9 + 0x15e)) * uVar22 + 0x80 +
                   (0xff - uVar22) * (uint)bVar14 & 0xffff;
          pbVar19[-1] = *(byte *)(((int)((uVar22 >> 8) + uVar22) >> 8 & 0xffU) +
                                 *(int *)(iVar9 + 0x15a));
          uVar22 = (uint)*(byte *)(*(int *)(iVar9 + 0x178) + iVar21);
          uVar22 = *(byte *)((uint)*pbVar19 + *(int *)(iVar9 + 0x15e)) * uVar22 + 0x80 +
                   (0xff - uVar22) * (uint)bVar15 & 0xffff;
          *pbVar19 = *(byte *)(((int)((uVar22 >> 8) + uVar22) >> 8 & 0xffU) +
                              *(int *)(iVar9 + 0x15a));
        }
      }
      else {
        pbVar19[-2] = *(byte *)((uint)pbVar19[-2] + *(int *)(iVar9 + 0x156));
        pbVar19[-1] = *(byte *)((uint)pbVar19[-1] + *(int *)(iVar9 + 0x156));
        *pbVar19 = *(byte *)((uint)*pbVar19 + *(int *)(iVar9 + 0x156));
      }
      iVar21 = iVar21 + 1;
      pbVar19 = pbVar19 + 3;
    } while (iVar21 < (int)(uint)uVar8);
  }
LAB_005275e5:
  if (((*(byte *)(iVar9 + 0x68) & 8) != 0) && (bVar5 == 3)) {
    iVar20 = 8 - (uint)*(byte *)(iVar9 + 0x16e);
    param_1 = 8 - (uint)*(byte *)(iVar9 + 0x16f);
    iVar21 = 8 - (uint)*(byte *)(iVar9 + 0x170);
    iVar18 = 0;
    if ((iVar20 < 0) || (8 < iVar20)) {
      iVar20 = 0;
    }
    if ((param_1 < 0) || (8 < param_1)) {
      param_1 = 0;
    }
    if ((iVar21 < 0) || (8 < iVar21)) {
      iVar21 = 0;
    }
    if (*(ushort *)(iVar9 + 0x110) != 0) {
      uVar22 = (uint)*(ushort *)(iVar9 + 0x110);
      do {
        pbVar19 = (byte *)(iVar18 + *(int *)(iVar9 + 0x10c));
        *pbVar19 = *pbVar19 >> ((byte)iVar20 & 0x1f);
        pbVar19 = (byte *)(iVar18 + 1 + *(int *)(iVar9 + 0x10c));
        *pbVar19 = *pbVar19 >> ((byte)param_1 & 0x1f);
        pbVar19 = (byte *)(iVar18 + 2 + *(int *)(iVar9 + 0x10c));
        local_20 = (byte)iVar21;
        iVar18 = iVar18 + 3;
        *pbVar19 = *pbVar19 >> (local_20 & 0x1f);
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
  }
  return;
}


