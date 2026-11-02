/* Module: sftrans1.dll
   Function: FUN_00483e60
   Address: 00483e60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00483e60(int *param_1,int param_2,DWORD *param_3)

{
  DWORD *pDVar1;
  int iVar2;
  undefined4 uVar3;
  DWORD DVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int *piVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  HDC hdc;
  int iVar14;
  HGLOBAL pvVar15;
  double *pdVar16;
  int iVar17;
  double *pdVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  BITMAPINFO *pBVar23;
  DWORD *pDVar24;
  double local_f8;
  int *local_e8;
  undefined1 local_e4;
  undefined1 uStack_e3;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  undefined1 uStack_e0;
  undefined1 uStack_df;
  undefined1 uStack_de;
  undefined1 uStack_dd;
  undefined1 uStack_dc;
  undefined1 uStack_db;
  undefined1 uStack_da;
  undefined1 uStack_d9;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  undefined1 uStack_d6;
  undefined1 uStack_d5;
  int local_c0;
  int local_bc;
  double local_98;
  LPCVOID local_8c;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  int *local_4c;
  double local_48;
  HDC local_3c;
  HBITMAP local_38;
  BITMAPINFO local_34;
  
  if ((((0 < *param_1) && (0 < param_1[1])) &&
      (pDVar1 = (DWORD *)(param_1 + 2), param_1[2] < param_1[4])) && (param_1[3] < param_1[5])) {
    if ((param_2 == 0) || (param_3 == (DWORD *)0x0)) {
      return -0x7fffbffd;
    }
    iVar20 = param_1[0xf];
    iVar21 = param_1[0x11] - iVar20;
    iVar19 = param_1[0xb];
    iVar22 = param_1[0x12] - param_1[0x10];
    local_48 = (double)CONCAT44(local_48._4_4_,param_1[0x10] - param_1[0xc]);
    iVar2 = *(int *)(param_2 + 0x30);
    uVar12 = (uint)*(ushort *)(param_2 + 0x12) * *(int *)(param_2 + 8) + 0x1f;
    iVar13 = (int)((uVar12 & 0xffffffe0) + ((int)uVar12 >> 0x1f & 7U)) >> 3;
    hdc = GetDC((HWND)0x0);
    if (hdc != (HDC)0x0) {
      local_3c = CreateCompatibleDC(hdc);
      ReleaseDC((HWND)0x0,hdc);
      if (local_3c != (HDC)0x0) {
        local_4c = (int *)0x0;
        iVar14 = FUN_004de3f0(&local_34,0x1c,*param_1,param_1[1],0,0,0);
        if (iVar14 < 0) {
          return iVar14;
        }
        local_38 = CreateDIBSection(local_3c,&local_34,0,&local_4c,(HANDLE)0x0,0);
        if (local_38 != (HBITMAP)0x0) {
          local_8c = (LPCVOID)0x0;
          if (_DAT_005633d0 <= *(double *)(param_1 + 0x2a)) {
            pvVar15 = GlobalAlloc(0x40,param_1[1] * *param_1 * 0x10);
            local_8c = GlobalLock(pvVar15);
          }
          local_e8 = local_4c;
          local_bc = 0;
          if (0 < param_1[1]) {
            do {
              iVar14 = *param_1;
              local_c0 = 0;
              if (0 < iVar14) {
                do {
                  dVar5 = (double)local_c0 + *(double *)(param_1 + 0x5e);
                  dVar8 = (double)local_bc + *(double *)(param_1 + 0x60);
                  local_f8 = dVar8;
                  local_98 = dVar5;
                  if (param_1[0x58] != 0) {
                    local_f8 = dVar8 - dVar5 * *(double *)(param_1 + 0x3a);
                    local_98 = dVar5 - dVar8 * *(double *)(param_1 + 0x38);
                  }
                  if (param_1[0x59] == 0) {
LAB_004840c9:
                    if (param_1[0x5a] != 0) {
                      dVar7 = local_98 * *(double *)(param_1 + 0x46) + *(double *)(param_1 + 0x40);
                      dVar6 = _DAT_00557828;
                      dVar9 = dVar5;
                      if (dVar7 == _DAT_00555910) goto LAB_00484290;
                      local_f8 = ((local_f8 - *(double *)(param_1 + 0x36)) *
                                 *(double *)(param_1 + 0x2e)) / dVar7 + *(double *)(param_1 + 0x36);
                    }
                    if (param_1[0x5c] != 0) {
                      dVar6 = ((local_f8 - *(double *)(param_1 + 0x36)) *
                              (local_f8 - *(double *)(param_1 + 0x36))) /
                              (*(double *)(param_1 + 0x2e) * *(double *)(param_1 + 0x2e));
                      dVar7 = dVar6 * *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x50);
                      dVar6 = (dVar6 * *(double *)(param_1 + 0x4a) - *(double *)(param_1 + 0x52)) +
                              *(double *)(param_1 + 0x30);
                      if (dVar7 == dVar6) {
                        dVar6 = dVar8;
                        dVar9 = _DAT_00557828;
                        if (dVar7 <= local_98) {
                          dVar9 = *(double *)(param_1 + 0x30) + _DAT_00555908;
                        }
                        goto LAB_00484290;
                      }
                      local_98 = ((local_98 - dVar7) / (dVar6 - dVar7)) *
                                 *(double *)(param_1 + 0x30);
                    }
                    dVar6 = local_f8;
                    dVar9 = local_98;
                    if (param_1[0x5b] != 0) {
                      dVar8 = ((local_98 - *(double *)(param_1 + 0x34)) *
                              (local_98 - *(double *)(param_1 + 0x34))) /
                              (*(double *)(param_1 + 0x32) * *(double *)(param_1 + 0x32));
                      dVar7 = dVar8 * *(double *)(param_1 + 0x4c) - *(double *)(param_1 + 0x54);
                      dVar8 = (dVar8 * *(double *)(param_1 + 0x4e) - *(double *)(param_1 + 0x56)) +
                              *(double *)(param_1 + 0x2c);
                      if (dVar7 == dVar8) {
                        dVar6 = _DAT_00557828;
                        dVar9 = dVar5;
                        if (dVar7 <= local_f8) {
                          dVar6 = *(double *)(param_1 + 0x2c) + _DAT_00555908;
                        }
                      }
                      else {
                        dVar6 = ((local_f8 - dVar7) / (dVar8 - dVar7)) * *(double *)(param_1 + 0x2c)
                        ;
                      }
                    }
                  }
                  else {
                    dVar7 = local_f8 * *(double *)(param_1 + 0x44) + *(double *)(param_1 + 0x3c);
                    dVar6 = dVar8;
                    dVar9 = _DAT_00557828;
                    if (dVar7 != _DAT_00555910) {
                      local_98 = ((local_98 - *(double *)(param_1 + 0x34)) *
                                 *(double *)(param_1 + 0x32)) / dVar7 + *(double *)(param_1 + 0x34);
                      goto LAB_004840c9;
                    }
                  }
LAB_00484290:
                  dVar9 = dVar9 - (double)(param_1[0xb] + (iVar20 - iVar19));
                  dVar6 = dVar6 - (double)(int)(param_1[0xc] + local_48._0_4_);
                  if (local_8c == (LPCVOID)0x0) {
                    if (((dVar9 < _DAT_00555910) || ((double)iVar21 <= dVar9)) ||
                       ((dVar6 < _DAT_00555910 || ((double)iVar22 <= dVar6)))) {
                      *local_e8 = param_1[6];
                    }
                    else if (_DAT_005633c8 <= *(double *)(param_1 + 0x2a)) {
                      floor(dVar9);
                      iVar14 = ftol();
                      floor(dVar6);
                      iVar17 = ftol();
                      if (((((double)iVar14 < _DAT_00557828) || (iVar21 <= iVar14)) ||
                          ((double)iVar17 < _DAT_00557828)) || (iVar22 <= iVar17)) {
                        *local_e8 = param_1[6];
                      }
                      else {
                        uVar11 = ftol();
                        *(undefined1 *)((int)local_e8 + 2) = uVar11;
                        uVar11 = ftol();
                        *(undefined1 *)((int)local_e8 + 1) = uVar11;
                        uVar11 = ftol();
                        *(undefined1 *)local_e8 = uVar11;
                        uVar11 = ftol();
                        *(undefined1 *)((int)local_e8 + 3) = uVar11;
                      }
                    }
                    else {
                      iVar14 = ftol();
                      iVar17 = ftol();
                      *local_e8 = *(int *)(iVar2 + iVar14 * iVar13 + iVar17 * 4);
                    }
                  }
                  else {
                    pdVar16 = (double *)((int)local_8c + (iVar14 * local_bc + local_c0) * 0x10);
                    *pdVar16 = dVar9;
                    pdVar16[1] = dVar6;
                  }
                  iVar14 = *param_1;
                  local_c0 = local_c0 + 1;
                  local_e8 = local_e8 + 1;
                } while (local_c0 < iVar14);
              }
              local_bc = local_bc + 1;
            } while (local_bc < param_1[1]);
          }
          if (local_8c != (LPCVOID)0x0) {
            local_c0 = 0;
            local_e8 = local_4c;
            iVar20 = 0;
            if (0 < param_1[1]) {
              do {
                iVar19 = *param_1;
                local_bc = 0;
                if (0 < iVar19) {
                  pdVar16 = (double *)(local_c0 * 0x10 + (int)local_8c);
                  do {
                    if (local_bc == 0) {
                      uVar3 = *(undefined4 *)pdVar16;
                      local_e4 = (undefined1)uVar3;
                      uStack_e3 = (undefined1)((uint)uVar3 >> 8);
                      uStack_e2 = (undefined1)((uint)uVar3 >> 0x10);
                      uStack_e1 = (undefined1)((uint)uVar3 >> 0x18);
                      uVar3 = *(undefined4 *)((int)pdVar16 + 4);
                      uStack_e0 = (undefined1)uVar3;
                      uStack_df = (undefined1)((uint)uVar3 >> 8);
                      uStack_de = (undefined1)((uint)uVar3 >> 0x10);
                      uStack_dd = (undefined1)((uint)uVar3 >> 0x18);
                      uVar3 = *(undefined4 *)(pdVar16 + 1);
                      uStack_dc = (undefined1)uVar3;
                      uStack_db = (undefined1)((uint)uVar3 >> 8);
                      uStack_da = (undefined1)((uint)uVar3 >> 0x10);
                      uStack_d9 = (undefined1)((uint)uVar3 >> 0x18);
                      uVar3 = *(undefined4 *)((int)pdVar16 + 0xc);
                      uStack_d8 = (undefined1)uVar3;
                      uStack_d7 = (undefined1)((uint)uVar3 >> 8);
                      uStack_d6 = (undefined1)((uint)uVar3 >> 0x10);
                      uStack_d5 = (undefined1)((uint)uVar3 >> 0x18);
                    }
                    else {
                      dVar5 = (pdVar16[-2] + *pdVar16) * _DAT_00557838;
                      local_e4 = SUB81(dVar5,0);
                      uStack_e3 = (undefined1)((ulonglong)dVar5 >> 8);
                      uStack_e2 = (undefined1)((ulonglong)dVar5 >> 0x10);
                      uStack_e1 = (undefined1)((ulonglong)dVar5 >> 0x18);
                      uStack_e0 = (undefined1)((ulonglong)dVar5 >> 0x20);
                      uStack_df = (undefined1)((ulonglong)dVar5 >> 0x28);
                      uStack_de = (undefined1)((ulonglong)dVar5 >> 0x30);
                      uStack_dd = (undefined1)((ulonglong)dVar5 >> 0x38);
                      dVar5 = (pdVar16[1] + pdVar16[-1]) * _DAT_00557838;
                      uStack_dc = SUB81(dVar5,0);
                      uStack_db = (undefined1)((ulonglong)dVar5 >> 8);
                      uStack_da = (undefined1)((ulonglong)dVar5 >> 0x10);
                      uStack_d9 = (undefined1)((ulonglong)dVar5 >> 0x18);
                      uStack_d8 = (undefined1)((ulonglong)dVar5 >> 0x20);
                      uStack_d7 = (undefined1)((ulonglong)dVar5 >> 0x28);
                      uStack_d6 = (undefined1)((ulonglong)dVar5 >> 0x30);
                      uStack_d5 = (undefined1)((ulonglong)dVar5 >> 0x38);
                    }
                    if (iVar20 == 0) {
                      local_6c = *pdVar16;
                      local_64 = pdVar16[1];
                    }
                    else {
                      pdVar18 = (double *)((int)local_8c + (local_c0 - iVar19) * 0x10);
                      local_6c = (*pdVar18 + *pdVar16) * _DAT_00557838;
                      local_64 = (pdVar18[1] + pdVar16[1]) * _DAT_00557838;
                    }
                    if (local_bc == iVar19 + -1) {
                      local_5c = *pdVar16;
                      local_54 = pdVar16[1];
                    }
                    else {
                      local_5c = (pdVar16[2] + *pdVar16) * _DAT_00557838;
                      local_54 = (pdVar16[3] + pdVar16[1]) * _DAT_00557838;
                    }
                    if (iVar20 == param_1[1] + -1) {
                      local_80 = *pdVar16;
                      local_78 = pdVar16[1];
                    }
                    else {
                      pdVar18 = (double *)((int)local_8c + (iVar19 + local_c0) * 0x10);
                      local_80 = (*pdVar18 + *pdVar16) * _DAT_00557838;
                      local_78 = (pdVar18[1] + pdVar16[1]) * _DAT_00557838;
                    }
                    dVar8 = local_78;
                    dVar5 = local_80;
                    if (local_5c <
                        (double)CONCAT17(uStack_dd,
                                         CONCAT16(uStack_de,
                                                  CONCAT15(uStack_df,
                                                           CONCAT14(uStack_e0,
                                                                    CONCAT13(uStack_e1,
                                                                             CONCAT12(uStack_e2,
                                                                                      CONCAT11(
                                                  uStack_e3,local_e4)))))))) {
                      dVar6 = (double)CONCAT17(uStack_dd,
                                               CONCAT16(uStack_de,
                                                        CONCAT15(uStack_df,
                                                                 CONCAT14(uStack_e0,
                                                                          CONCAT13(uStack_e1,
                                                                                   CONCAT12(
                                                  uStack_e2,CONCAT11(uStack_e3,local_e4)))))));
                      local_e4 = SUB81(local_5c,0);
                      uStack_e3 = (undefined1)((ulonglong)local_5c >> 8);
                      uStack_e2 = (undefined1)((ulonglong)local_5c >> 0x10);
                      uStack_e1 = (undefined1)((ulonglong)local_5c >> 0x18);
                      uStack_e0 = (undefined1)((ulonglong)local_5c >> 0x20);
                      uStack_df = (undefined1)((ulonglong)local_5c >> 0x28);
                      uStack_de = (undefined1)((ulonglong)local_5c >> 0x30);
                      uStack_dd = (undefined1)((ulonglong)local_5c >> 0x38);
                      local_5c = dVar6;
                    }
                    if (local_78 < local_64) {
                      local_78 = local_64;
                      local_64 = dVar8;
                    }
                    if (local_54 <
                        (double)CONCAT17(uStack_d5,
                                         CONCAT16(uStack_d6,
                                                  CONCAT15(uStack_d7,
                                                           CONCAT14(uStack_d8,
                                                                    CONCAT13(uStack_d9,
                                                                             CONCAT12(uStack_da,
                                                                                      CONCAT11(
                                                  uStack_db,uStack_dc)))))))) {
                      dVar8 = (double)CONCAT17(uStack_d5,
                                               CONCAT16(uStack_d6,
                                                        CONCAT15(uStack_d7,
                                                                 CONCAT14(uStack_d8,
                                                                          CONCAT13(uStack_d9,
                                                                                   CONCAT12(
                                                  uStack_da,CONCAT11(uStack_db,uStack_dc)))))));
                      uStack_dc = SUB81(local_54,0);
                      uStack_db = (undefined1)((ulonglong)local_54 >> 8);
                      uStack_da = (undefined1)((ulonglong)local_54 >> 0x10);
                      uStack_d9 = (undefined1)((ulonglong)local_54 >> 0x18);
                      uStack_d8 = (undefined1)((ulonglong)local_54 >> 0x20);
                      uStack_d7 = (undefined1)((ulonglong)local_54 >> 0x28);
                      uStack_d6 = (undefined1)((ulonglong)local_54 >> 0x30);
                      uStack_d5 = (undefined1)((ulonglong)local_54 >> 0x38);
                      local_54 = dVar8;
                    }
                    if (local_80 < local_6c) {
                      local_80 = local_6c;
                      local_6c = dVar5;
                    }
                    if ((*(double *)(param_1 + 0x28) == _DAT_00555910) ||
                       (((local_5c -
                         (double)CONCAT17(uStack_dd,
                                          CONCAT16(uStack_de,
                                                   CONCAT15(uStack_df,
                                                            CONCAT14(uStack_e0,
                                                                     CONCAT13(uStack_e1,
                                                                              CONCAT12(uStack_e2,
                                                                                       CONCAT11(
                                                  uStack_e3,local_e4)))))))) *
                         (local_54 -
                         (double)CONCAT17(uStack_d5,
                                          CONCAT16(uStack_d6,
                                                   CONCAT15(uStack_d7,
                                                            CONCAT14(uStack_d8,
                                                                     CONCAT13(uStack_d9,
                                                                              CONCAT12(uStack_da,
                                                                                       CONCAT11(
                                                  uStack_db,uStack_dc)))))))) == _DAT_00555910 &&
                        ((local_80 - local_6c) * (local_78 - local_64) == _DAT_00555910)))) {
                      if (((*pdVar16 < _DAT_00555910) ||
                          (((double)iVar21 < *pdVar16 || (pdVar16[1] < _DAT_00555910)))) ||
                         ((double)iVar22 < pdVar16[1])) {
                        *local_e8 = param_1[6];
                      }
                      else {
                        dVar5 = pdVar16[1];
                        floor(*pdVar16);
                        iVar19 = ftol();
                        floor(dVar5);
                        iVar14 = ftol();
                        local_48 = (double)CONCAT44(local_48._4_4_,iVar14);
                        if (((((double)iVar19 < _DAT_00557828) || (iVar21 <= iVar19)) ||
                            (local_48 = (double)iVar14, (double)iVar14 < _DAT_00557828)) ||
                           (iVar22 <= iVar14)) {
                          *local_e8 = param_1[6];
                        }
                        else {
                          uVar11 = ftol();
                          *(undefined1 *)((int)local_e8 + 2) = uVar11;
                          uVar11 = ftol();
                          *(undefined1 *)((int)local_e8 + 1) = uVar11;
                          uVar11 = ftol();
                          *(undefined1 *)local_e8 = uVar11;
                          uVar11 = ftol();
                          *(undefined1 *)((int)local_e8 + 3) = uVar11;
                        }
                      }
                    }
                    else {
                      FUN_004850b0(local_e8,iVar2,iVar21,iVar22,iVar13,param_1 + 6,
                                   CONCAT13(uStack_e1,
                                            CONCAT12(uStack_e2,CONCAT11(uStack_e3,local_e4))),
                                   CONCAT13(uStack_dd,
                                            CONCAT12(uStack_de,CONCAT11(uStack_df,uStack_e0))),
                                   CONCAT13(uStack_d9,
                                            CONCAT12(uStack_da,CONCAT11(uStack_db,uStack_dc))),
                                   CONCAT13(uStack_d5,
                                            CONCAT12(uStack_d6,CONCAT11(uStack_d7,uStack_d8))),
                                   (undefined4)local_6c,local_6c._4_4_,(undefined4)local_64,
                                   local_64._4_4_,(undefined4)local_5c,local_5c._4_4_,
                                   (undefined4)local_54,local_54._4_4_,(undefined4)local_80,
                                   local_80._4_4_,(undefined4)local_78,local_78._4_4_);
                    }
                    local_bc = local_bc + 1;
                    local_e8 = local_e8 + 1;
                    local_c0 = local_c0 + 1;
                    pdVar16 = pdVar16 + 2;
                    iVar19 = *param_1;
                  } while (local_bc < iVar19);
                }
                iVar20 = iVar20 + 1;
              } while (iVar20 < param_1[1]);
            }
            pvVar15 = GlobalHandle(local_8c);
            GlobalUnlock(pvVar15);
            pvVar15 = GlobalHandle(local_8c);
            GlobalFree(pvVar15);
          }
          piVar10 = local_4c;
          *pDVar1 = *pDVar1 + param_1[7];
          param_1[4] = param_1[4] + param_1[7];
          param_1[3] = param_1[3] + param_1[8];
          param_1[5] = param_1[5] + param_1[8];
          DVar4 = *(DWORD *)(param_2 + 0x50);
          local_48 = (double)CONCAT44(local_48._4_4_,*(undefined4 *)(param_2 + 0x4c));
          if (*param_3 == 0) {
            *param_3 = 1;
          }
          else {
            if ((HGDIOBJ)param_3[0xd] != (HGDIOBJ)0x0) {
              DeleteObject((HGDIOBJ)param_3[0xd]);
            }
            if ((HDC)param_3[0xe] != (HDC)0x0) {
              DeleteDC((HDC)param_3[0xe]);
            }
          }
          pBVar23 = &local_34;
          pDVar24 = param_3;
          for (iVar20 = 0xb; pDVar24 = pDVar24 + 1, iVar20 != 0; iVar20 = iVar20 + -1) {
            *pDVar24 = (pBVar23->bmiHeader).biSize;
            pBVar23 = (BITMAPINFO *)&(pBVar23->bmiHeader).biWidth;
          }
          param_3[0xd] = (DWORD)local_38;
          param_3[0xc] = (DWORD)piVar10;
          param_3[0xe] = (DWORD)local_3c;
          param_3[0xf] = *pDVar1;
          param_3[0x10] = param_1[3];
          param_3[0x11] = param_1[4];
          param_3[0x12] = param_1[5];
          param_3[0x13] = local_48._0_4_;
          param_3[0x14] = DVar4;
          return 0;
        }
      }
    }
  }
  return -0x7fffbffb;
}


