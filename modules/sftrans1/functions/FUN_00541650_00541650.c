/* Module: sftrans1.dll
   Function: FUN_00541650
   Address: 00541650
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00541650(int param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  int *piVar5;
  LPVOID pMem;
  HDC hdc;
  HDC hdc_00;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  HGLOBAL pvVar10;
  BOOL BVar11;
  byte *pbVar12;
  int iVar13;
  float *pfVar14;
  int *piVar15;
  RECT *lprcSrc1;
  int *piVar16;
  void *local_104;
  int local_100;
  int local_fc;
  undefined1 local_f8;
  undefined1 uStack_f7;
  undefined1 uStack_f6;
  byte bStack_f5;
  int local_ec;
  uint local_e8;
  void *local_e0;
  int local_dc;
  uint local_d8;
  uint local_d4;
  int local_d0;
  LPVOID local_cc;
  RECT local_c8;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  HBITMAP local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  tagRECT local_84;
  HDC local_74;
  float local_70;
  float local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  double local_50;
  int local_48;
  int local_44;
  int *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  BITMAPINFO local_2c;
  
  pfVar14 = (float *)0x0;
  local_e8 = 0;
  local_dc = 0;
  local_d0 = param_1;
  if (param_3 == 0) {
    uStack_f6 = ftol();
    uStack_f7 = ftol();
    local_f8 = ftol();
    bStack_f5 = ftol();
    pfVar14 = *(float **)(param_1 + 0x28);
    local_e8 = *(uint *)(param_2 + 0x50);
LAB_00541763:
    local_e8 = local_e8 & 1;
  }
  else {
    if (param_3 == 1) {
      uStack_f6 = ftol();
      uStack_f7 = ftol();
      local_f8 = ftol();
      bStack_f5 = ftol();
      local_e8 = *(uint *)(param_2 + 0x28);
      pfVar14 = (float *)(*(int *)(param_1 + 0x28) + 0x1c);
      goto LAB_00541763;
    }
    if (param_3 == 2) {
      uVar2 = *(undefined4 *)(param_1 + 0x94);
      pfVar14 = (float *)(*(int *)(param_1 + 0x28) + 0x1c);
      local_f8 = (undefined1)uVar2;
      uStack_f7 = (undefined1)((uint)uVar2 >> 8);
      uStack_f6 = (undefined1)((uint)uVar2 >> 0x10);
      bStack_f5 = (byte)((uint)uVar2 >> 0x18);
      local_dc = 1;
    }
  }
  iVar6 = *(int *)(param_1 + 4);
  local_cc = (LPVOID)0x0;
  local_98 = (HBITMAP)0x0;
  local_74 = (HDC)0x0;
  if (local_dc == 0) {
    local_a0 = *(int *)(iVar6 + 0x44) - *(int *)(iVar6 + 0x3c);
    local_a8 = 0;
    local_a4 = 0;
    local_9c = *(int *)(iVar6 + 0x48) - *(int *)(iVar6 + 0x40);
    local_70 = pfVar14[1];
    local_b0 = local_a0 + (int)local_70 * 2;
    local_ac = local_9c + (int)local_70 * 2;
    local_68 = local_a0 + (int)local_70;
    local_64 = (int)local_70 + local_9c;
    local_6c = local_70;
    local_48 = local_a0;
    local_44 = local_9c;
    hdc = GetDC((HWND)0x0);
    hdc_00 = CreateCompatibleDC(hdc);
    local_74 = hdc_00;
    ReleaseDC((HWND)0x0,hdc);
    iVar6 = FUN_004de3f0();
    if (iVar6 < 0) {
      return iVar6;
    }
    local_98 = CreateDIBSection(hdc_00,&local_2c,0,&local_e0,(HANDLE)0x0,0);
    if (local_98 == (HBITMAP)0x0) {
      return -0x7fffbffb;
    }
    FUN_004e3070();
    iVar3 = *(int *)(param_1 + 4);
    uVar7 = (local_2c.bmiHeader._14_4_ & 0xffff) * local_2c.bmiHeader.biWidth + 0x1f;
    uVar8 = (uint)*(ushort *)(iVar3 + 0x12) * *(int *)(iVar3 + 8) + 0x1f;
    local_3c = local_a8 << 0xe;
    local_34 = local_a0 << 0xe;
    local_38 = local_a4 << 0xe;
    local_30 = local_9c << 0xe;
    local_94 = (int)local_70 * 0x4000 + (int)pfVar14[5];
    local_8c = local_68 * 0x4000 + (int)pfVar14[5];
    fVar4 = pfVar14[6];
    local_90 = (int)local_6c * 0x4000 + (int)fVar4;
    local_88 = local_64 * 0x4000 + (int)fVar4;
    local_60 = 0;
    local_5c = 0;
    local_58 = local_b0;
    local_54 = local_ac;
    uVar7 = (int)((uVar7 & 0xffffffe0) + ((int)uVar7 >> 0x1f & 7U)) >> 3;
    iVar9 = (int)((uVar8 & 0xffffffe0) + ((int)uVar8 >> 0x1f & 7U)) >> 3;
    if (((pfVar14[5] == 0.0) && (fVar4 == 0.0)) || (iVar13 = *(int *)(param_1 + 0x34), iVar13 == 0))
    {
      iVar6 = FUN_004cded0();
    }
    else if (iVar13 == 1) {
      iVar6 = FUN_004fe430(local_e0,&local_b0,uVar7,&local_94,*(undefined4 *)(iVar3 + 0x30),
                           &local_48,iVar9,&local_3c,4,0,0);
    }
    else if (iVar13 == 2) {
      iVar6 = FUN_0050ff20(local_e0,&local_b0,uVar7,&local_94,*(undefined4 *)(iVar3 + 0x30),
                           &local_48,iVar9,&local_3c,4,0,0);
    }
    if (iVar6 < 0) {
      return iVar6;
    }
    if (_DAT_00557840 != *pfVar14) {
      local_50 = (double)*pfVar14;
      iVar6 = FUN_004da570(local_e0,&local_60,uVar7,&local_60,local_e0,&local_60,uVar7,&local_60,
                           local_50,local_50,3,4);
    }
    if (iVar6 < 0) {
      return iVar6;
    }
    iVar6 = *(int *)(param_1 + 4);
    fVar4 = pfVar14[1];
    local_c8.left = (*(int *)(iVar6 + 0x3c) + (int)pfVar14[3]) - (int)fVar4;
    local_c8.top = (*(int *)(iVar6 + 0x40) + (int)pfVar14[4]) - (int)fVar4;
    local_c8.right = *(int *)(iVar6 + 0x44) + (int)pfVar14[3] + (int)fVar4;
    local_c8.bottom = *(int *)(iVar6 + 0x48) + (int)pfVar14[4] + (int)fVar4;
    if (pfVar14[2] <= _DAT_00557840) {
      local_e8 = uVar7 >> 2;
      local_104 = local_e0;
    }
    else {
      pvVar10 = GlobalAlloc(0x40,0x100);
      local_cc = GlobalLock(pvVar10);
      if (local_cc == (LPVOID)0x0) {
        return -0x7fffbffb;
      }
      if (local_e8 == 0) {
        FUN_00541520(local_cc,0,0,(double)((float)_DAT_00555908 - pfVar14[2] * (float)_DAT_005610c8)
                     ,0,0,0,0x3ff00000,0,0x3ff00000);
        local_e8 = uVar7 >> 2;
        local_104 = local_e0;
      }
      else {
        FUN_00541520(local_cc,(double)(pfVar14[2] * (float)_DAT_005610c8),0,0x3ff00000,0,0,0,
                     0x3ff00000,0,0x3ff00000);
        local_e8 = uVar7 >> 2;
        local_104 = local_e0;
      }
    }
  }
  else {
    local_104 = *(void **)(iVar6 + 0x30);
    uVar7 = (uint)*(ushort *)(iVar6 + 0x12) * *(int *)(iVar6 + 8) + 0x1f;
    local_e8 = (uint)((int)((uVar7 & 0xffffffe0) + ((int)uVar7 >> 0x1f & 7U)) >> 3) >> 2;
    local_c8.left = *(int *)(iVar6 + 0x3c);
    local_c8.top = *(int *)(iVar6 + 0x40);
    local_c8.right = *(int *)(iVar6 + 0x44);
    local_c8.bottom = *(int *)(iVar6 + 0x48);
  }
  if (param_4 == 0) {
    local_100 = *(int *)(param_1 + 0x84);
    local_40 = (int *)(param_1 + 0x58);
    if (local_100 == 0) {
      if (*(int *)(param_1 + 0x68) == 0) {
        if (((*(int *)(param_1 + 0x78) != 0) || (uVar1 = *(ushort *)(param_1 + 0x66), uVar1 == 0))
           || (8 < uVar1)) goto LAB_00542029;
        iVar6 = 1 << ((byte)uVar1 & 0x1f);
      }
      else {
        if (*(int *)(param_1 + 0x68) == 3) {
          local_100 = param_1 + 0x8c;
          goto LAB_00542031;
        }
LAB_00542029:
        iVar6 = *(int *)(param_1 + 0x78);
      }
      local_100 = (int)local_40 + *local_40 + iVar6 * 4;
    }
LAB_00542031:
    uVar7 = (uint)*(ushort *)(param_1 + 0x66) * *(int *)(param_1 + 0x5c) + 0x1f;
    lprcSrc1 = (RECT *)(local_d0 + 0x38);
    uVar7 = (uint)((int)((uVar7 & 0xffffffe0) + ((int)uVar7 >> 0x1f & 7U)) >> 3) >> 2;
    local_50 = (double)CONCAT44(local_50._4_4_,lprcSrc1);
    BVar11 = IntersectRect(&local_84,lprcSrc1,&local_c8);
    if (BVar11 != 0) {
      if (*(int *)(local_d0 + 8) == 0) {
        lprcSrc1 = (RECT *)(local_d0 + 0x48);
        BVar11 = IntersectRect(&local_84,&local_84,lprcSrc1);
        if (BVar11 == 0) goto LAB_0054247d;
      }
      iVar6 = local_c8.left - lprcSrc1->left;
      if (iVar6 < 1) {
        local_104 = (void *)((int)local_104 + iVar6 * -4);
      }
      else {
        local_100 = local_100 + iVar6 * 4;
      }
      iVar6 = local_c8.top - lprcSrc1->top;
      if (iVar6 < 1) {
        local_104 = (void *)((int)local_104 + iVar6 * local_e8 * -4);
      }
      else {
        local_100 = local_100 + iVar6 * uVar7 * 4;
      }
      local_ec = local_84.bottom - local_84.top;
      local_b4 = local_84.right - local_84.left;
      if (local_cc == (LPVOID)0x0) {
        if (0 < local_ec) {
          do {
            if (0 < local_b4) {
              local_d8 = CONCAT12(uStack_f6,CONCAT11(uStack_f7,local_f8)) & 0xff;
              local_d4 = (uint)bStack_f5;
              pbVar12 = (byte *)(local_100 + 1);
              local_fc = local_b4;
              do {
                local_b8 = CONCAT31(local_b8._1_3_,pbVar12[(int)local_104 + (2 - local_100)]);
                uVar8 = (uint)pbVar12[(int)local_104 + (2 - local_100)];
                iVar6 = ((CONCAT11(bStack_f5,uStack_f6) & 0xff) - (uint)pbVar12[1]) * uVar8;
                pbVar12[1] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + pbVar12[1];
                iVar6 = ((CONCAT12(bStack_f5,CONCAT11(uStack_f6,uStack_f7)) & 0xff) - (uint)*pbVar12
                        ) * uVar8;
                *pbVar12 = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + *pbVar12;
                iVar6 = (local_d8 - pbVar12[-1]) * uVar8;
                pbVar12[-1] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + pbVar12[-1];
                iVar6 = (local_d4 - pbVar12[2]) * uVar8;
                pbVar12[2] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + pbVar12[2];
                local_fc = local_fc + -1;
                pbVar12 = pbVar12 + 4;
              } while (local_fc != 0);
            }
            local_100 = local_100 + uVar7 * 4;
            local_104 = (void *)((int)local_104 + local_e8 * 4);
            local_ec = local_ec + -1;
          } while (local_ec != 0);
        }
      }
      else if (0 < local_ec) {
        do {
          if (0 < local_b4) {
            local_d8 = CONCAT12(uStack_f6,CONCAT11(uStack_f7,local_f8)) & 0xff;
            local_d4 = (uint)bStack_f5;
            pbVar12 = (byte *)(local_100 + 1);
            local_fc = local_b4;
            do {
              local_b8 = CONCAT31(local_b8._1_3_,
                                  *(byte *)((uint)pbVar12[(int)local_104 + (2 - local_100)] +
                                           (int)local_cc));
              uVar8 = (uint)*(byte *)((uint)pbVar12[(int)local_104 + (2 - local_100)] +
                                     (int)local_cc);
              iVar6 = ((CONCAT11(bStack_f5,uStack_f6) & 0xff) - (uint)pbVar12[1]) * uVar8;
              pbVar12[1] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + pbVar12[1];
              iVar6 = ((CONCAT12(bStack_f5,CONCAT11(uStack_f6,uStack_f7)) & 0xff) - (uint)*pbVar12)
                      * uVar8;
              *pbVar12 = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + *pbVar12;
              iVar6 = (local_d8 - pbVar12[-1]) * uVar8;
              pbVar12[-1] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + pbVar12[-1];
              iVar6 = (local_d4 - pbVar12[2]) * uVar8;
              pbVar12[2] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + pbVar12[2];
              local_fc = local_fc + -1;
              pbVar12 = pbVar12 + 4;
            } while (local_fc != 0);
          }
          local_100 = local_100 + uVar7 * 4;
          local_104 = (void *)((int)local_104 + local_e8 * 4);
          local_ec = local_ec + -1;
        } while (local_ec != 0);
      }
      if ((local_dc != 0) && (piVar5 = *(int **)(local_d0 + 8), piVar5 != (int *)0x0)) {
        iVar6 = *(int *)(local_d0 + 0x2c);
        local_b4 = *(int *)(local_d0 + 0x8c);
        iVar3 = *(int *)(local_d0 + 0x30);
        iVar9 = *(int *)(local_d0 + 0x88);
        local_b8 = *(int *)(local_d0 + 0x84);
        if (*piVar5 == 0) {
          *piVar5 = 1;
        }
        else {
          if ((HGDIOBJ)piVar5[0xd] != (HGDIOBJ)0x0) {
            DeleteObject((HGDIOBJ)piVar5[0xd]);
          }
          if ((HDC)piVar5[0xe] != (HDC)0x0) {
            DeleteDC((HDC)piVar5[0xe]);
          }
        }
        piVar15 = local_40;
        piVar16 = piVar5;
        for (iVar13 = 0xb; piVar16 = piVar16 + 1, iVar13 != 0; iVar13 = iVar13 + -1) {
          *piVar16 = *piVar15;
          piVar15 = piVar15 + 1;
        }
        piVar5[0xc] = local_b8;
        piVar5[0xd] = iVar9;
        piVar5[0xe] = local_b4;
        piVar5[0xf] = *local_50._0_4_;
        piVar5[0x10] = local_50._0_4_[1];
        piVar5[0x11] = local_50._0_4_[2];
        iVar9 = local_50._0_4_[3];
        piVar5[0x14] = iVar3;
        piVar5[0x12] = iVar9;
        piVar5[0x13] = iVar6;
      }
    }
  }
  else {
    local_100 = **(int **)(param_1 + 0xc);
    BVar11 = IntersectRect(&local_84,(RECT *)(param_1 + 0x10),&local_c8);
    if (BVar11 != 0) {
      iVar6 = local_c8.left - ((RECT *)(param_1 + 0x10))->left;
      if (iVar6 < 1) {
        local_104 = (void *)((int)local_104 + iVar6 * -4);
      }
      else {
        local_100 = local_100 + iVar6 * 4;
      }
      iVar6 = local_c8.top - *(int *)(local_d0 + 0x14);
      if (iVar6 < 1) {
        local_104 = (void *)((int)local_104 + iVar6 * local_e8 * -4);
      }
      else {
        local_100 = local_100 + *(int *)(local_d0 + 0x20) * iVar6 * 4;
      }
      local_dc = local_84.right - local_84.left;
      local_fc = local_84.bottom - local_84.top;
      if (local_cc == (LPVOID)0x0) {
        local_ec = local_fc;
        if (0 < local_fc) {
          do {
            if (0 < local_dc) {
              local_d8 = CONCAT12(uStack_f6,CONCAT11(uStack_f7,local_f8)) & 0xff;
              local_d4 = (uint)bStack_f5;
              pbVar12 = (byte *)(local_100 + 1);
              local_fc = local_dc;
              do {
                uVar7 = (uint)pbVar12[(int)local_104 + (2 - local_100)];
                iVar6 = ((CONCAT11(bStack_f5,uStack_f6) & 0xff) - (uint)pbVar12[1]) * uVar7;
                pbVar12[1] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + pbVar12[1];
                iVar6 = ((CONCAT12(bStack_f5,CONCAT11(uStack_f6,uStack_f7)) & 0xff) - (uint)*pbVar12
                        ) * uVar7;
                *pbVar12 = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + *pbVar12;
                iVar6 = (local_d8 - pbVar12[-1]) * uVar7;
                pbVar12[-1] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + pbVar12[-1];
                iVar6 = (local_d4 - pbVar12[2]) * uVar7;
                pbVar12[2] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + pbVar12[2];
                local_fc = local_fc + -1;
                pbVar12 = pbVar12 + 4;
              } while (local_fc != 0);
            }
            local_100 = local_100 + *(int *)(local_d0 + 0x20) * 4;
            local_104 = (void *)((int)local_104 + local_e8 * 4);
            local_ec = local_ec + -1;
          } while (local_ec != 0);
        }
        goto LAB_0054249f;
      }
      if (0 < local_fc) {
        do {
          if (0 < local_dc) {
            local_d8 = CONCAT12(uStack_f6,CONCAT11(uStack_f7,local_f8)) & 0xff;
            local_d4 = (uint)bStack_f5;
            pbVar12 = (byte *)(local_100 + 1);
            local_ec = local_dc;
            do {
              uVar7 = (uint)*(byte *)((uint)pbVar12[(int)local_104 + (2 - local_100)] +
                                     (int)local_cc);
              iVar6 = ((CONCAT11(bStack_f5,uStack_f6) & 0xff) - (uint)pbVar12[1]) * uVar7;
              pbVar12[1] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + pbVar12[1];
              iVar6 = ((CONCAT12(bStack_f5,CONCAT11(uStack_f6,uStack_f7)) & 0xff) - (uint)*pbVar12)
                      * uVar7;
              *pbVar12 = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + *pbVar12;
              iVar6 = (local_d8 - pbVar12[-1]) * uVar7;
              pbVar12[-1] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + pbVar12[-1];
              iVar6 = (local_d4 - pbVar12[2]) * uVar7;
              pbVar12[2] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + pbVar12[2];
              local_ec = local_ec + -1;
              pbVar12 = pbVar12 + 4;
            } while (local_ec != 0);
          }
          local_100 = local_100 + *(int *)(local_d0 + 0x20) * 4;
          local_104 = (void *)((int)local_104 + local_e8 * 4);
          local_fc = local_fc + -1;
        } while (local_fc != 0);
      }
    }
  }
LAB_0054247d:
  pMem = local_cc;
  if (local_cc != (LPCVOID)0x0) {
    pvVar10 = GlobalHandle(local_cc);
    GlobalUnlock(pvVar10);
    pvVar10 = GlobalHandle(pMem);
    GlobalFree(pvVar10);
  }
LAB_0054249f:
  if (local_98 != (HBITMAP)0x0) {
    DeleteObject(local_98);
  }
  if (local_74 != (HDC)0x0) {
    DeleteDC(local_74);
  }
  return 0;
}


