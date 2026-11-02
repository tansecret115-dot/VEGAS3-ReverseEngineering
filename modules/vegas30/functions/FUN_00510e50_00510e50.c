/* Module: vegas30.exe
   Function: FUN_00510e50
   Address: 00510e50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00510e50(int *param_1,LONG param_2,LONG param_3)

{
  int iVar1;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  POINT pt_03;
  POINT pt_04;
  BOOL BVar2;
  LONG LVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  float10 fVar11;
  longlong lVar12;
  LONG local_18c;
  LONG local_188;
  int iStack_184;
  undefined4 *puStack_180;
  int iStack_17c;
  undefined8 uStack_178;
  int local_16c;
  undefined8 uStack_168;
  int iStack_160;
  int iStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  tagRECT tStack_140;
  float fStack_130;
  tagRECT local_12c;
  undefined4 local_11c [8];
  undefined1 auStack_fc [32];
  undefined1 auStack_dc [28];
  undefined4 local_c0 [23];
  undefined4 auStack_64 [24];
  
  iVar4 = *param_1;
  iVar1 = *(int *)(iVar4 + 0x98);
  local_18c = param_2;
  local_188 = param_3;
  local_16c = iVar4;
  GetClientRect((HWND)param_1[1],&local_12c);
  pt.y = local_188;
  pt.x = local_18c;
  BVar2 = PtInRect(&local_12c,pt);
  if (((((BVar2 != 0) && (*(int *)(iVar4 + 0x98) != 0)) &&
       ((*(byte *)(*(int *)(iVar4 + 0x98) + 4) & 1) != 0)) &&
      ((*(int *)(iVar1 + 0x9c) != 1 || ((*(byte *)(iVar1 + 4) & 4) == 0)))) &&
     ((*(int *)(iVar1 + 0x9c) != 2 || ((*(byte *)(iVar1 + 4) & 8) == 0)))) {
    puVar8 = local_c0;
    for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    FUN_0050db20(local_c0,iVar1,*(undefined4 *)(iVar1 + 0x88),*(undefined4 *)(iVar1 + 0x8c),
                 *(undefined4 *)(iVar1 + 0x9c),DAT_00647e50,0,0,0,0);
    puVar8 = local_c0;
    puVar10 = local_11c;
    for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    FUN_005a61e0(local_11c,local_11c);
    fVar11 = (float10)_CIpow();
    uStack_158 = (double)fVar11;
    uStack_178 = (double)fVar11;
    FUN_005a5f80(local_11c);
    uStack_150 = ftol();
    fVar11 = (float10)uStack_178;
    uStack_178 = uStack_158;
    fStack_130 = (float)((float10)uStack_150 / fVar11);
    FUN_005a5ff0(local_11c);
    lVar12 = ftol();
    uStack_148 = 0x15;
    uStack_144 = 0x15;
    uStack_168._0_4_ = (float)((float10)lVar12 / (float10)uStack_178);
    if ((param_1[0x3f] + -3 <= local_18c) && (local_18c <= param_1[0x3f] + 1)) {
      return 0xf;
    }
    if ((param_1[0x46] + -3 <= local_188) && (local_188 <= param_1[0x46] + 1)) {
      return 0xe;
    }
    pt_00.y = local_188;
    pt_00.x = local_18c;
    uStack_150 = lVar12;
    BVar2 = PtInRect((RECT *)(param_1 + 0x49),pt_00);
    if (BVar2 != 0) {
      return 0xd;
    }
    pt_01.y = local_188;
    pt_01.x = local_18c;
    BVar2 = PtInRect((RECT *)(param_1 + 0x3d),pt_01);
    if (BVar2 != 0) {
      return 0xc;
    }
    pt_02.y = local_188;
    pt_02.x = local_18c;
    BVar2 = PtInRect((RECT *)(param_1 + 0x43),pt_02);
    if (BVar2 != 0) {
      return 0xb;
    }
    if ((*(uint *)(iVar1 + 4) & 0x1e000) == 0x2000) {
      return 0x12;
    }
    if (&stack0x00000000 != (undefined1 *)0x11c) {
      puStack_180 = local_11c;
      iStack_184 = 0;
      iVar4 = *(int *)(local_16c + 0x290);
      do {
        FUN_0050d7f0(&uStack_158,puStack_180,iVar1,&uStack_148);
        tStack_140.left = -iVar4;
        tStack_140.top = -iVar4;
        tStack_140.right = iVar4;
        tStack_140.bottom = iVar4;
        OffsetRect(&tStack_140,(int)uStack_158,uStack_158._4_4_);
        pt_03.y = local_188;
        pt_03.x = local_18c;
        BVar2 = PtInRect(&tStack_140,pt_03);
        if (BVar2 != 0) {
          return iStack_184 * 2;
        }
        iStack_184 = iStack_184 + 1;
        puStack_180 = puStack_180 + 4;
      } while (iStack_184 < 4);
      FUN_0050d7f0(&uStack_150,local_11c,iVar1,&uStack_148);
      FUN_0050d7f0(&uStack_178,auStack_fc,iVar1,&uStack_148);
      puStack_180 = *(undefined4 **)(iVar1 + 0x9c);
      iVar4 = (uStack_178._4_4_ + uStack_150._4_4_) / 2;
      iStack_184 = ((int)uStack_178 + (int)uStack_150) / 2;
      if (puStack_180 == (undefined4 *)0x0) {
        iVar5 = *(int *)(local_16c + 0x290);
        if (((int)uStack_150 - iVar5 <= local_18c) && (local_18c <= iVar5 + (int)uStack_150)) {
          iVar7 = iVar5 + iVar4;
          iVar6 = iVar4 - iVar5;
          iVar9 = iVar6;
          if (iVar7 <= iVar6) {
            iVar9 = iVar7;
          }
          if (iVar9 <= local_188) {
            if (iVar6 <= iVar7) {
              iVar6 = iVar7;
            }
            if (local_188 <= iVar6) {
              return 7;
            }
          }
        }
        if (((int)uStack_178 - iVar5 <= local_18c) && (local_18c <= (int)uStack_178 + iVar5)) {
          iVar9 = iVar4 + iVar5;
          iVar4 = iVar4 - iVar5;
          iVar7 = iVar4;
          if (iVar9 <= iVar4) {
            iVar7 = iVar9;
          }
          if (iVar7 <= local_188) {
            if (iVar4 <= iVar9) {
              iVar4 = iVar9;
            }
            if (local_188 <= iVar4) {
              return 3;
            }
          }
        }
        if ((uStack_150._4_4_ - iVar5 <= local_188) && (local_188 <= uStack_150._4_4_ + iVar5)) {
          iVar4 = iVar5 + iStack_184;
          iVar7 = iStack_184 - iVar5;
          iVar9 = iVar7;
          if (iVar4 <= iVar7) {
            iVar9 = iVar4;
          }
          if (iVar9 <= local_18c) {
            if (iVar7 <= iVar4) {
              iVar7 = iVar4;
            }
            if (local_18c <= iVar7) {
              return 1;
            }
          }
        }
        if ((uStack_178._4_4_ - iVar5 <= local_188) && (local_188 <= uStack_178._4_4_ + iVar5)) {
          iVar7 = iStack_184 - iVar5;
          iVar5 = iVar5 + iStack_184;
          iVar4 = iVar7;
          if (iVar5 <= iVar7) {
            iVar4 = iVar5;
          }
          if (iVar4 <= local_18c) {
            if (iVar5 < iVar7) {
              iVar5 = iVar7;
            }
            if (local_18c <= iVar5) {
              return 5;
            }
          }
        }
      }
      if (puStack_180 == (undefined4 *)0x0) {
        FUN_0050d7f0(&puStack_180,auStack_dc,iVar1,&uStack_148);
        iStack_184 = *(int *)(local_16c + 0x290) * 2;
        if (iStack_184 < 0) {
          iStack_184 = *(int *)(local_16c + 0x290) * -2;
          tStack_140.right = ftol();
          tStack_140.right = -tStack_140.right;
        }
        else {
          tStack_140.right = ftol();
        }
        tStack_140.left = -tStack_140.right;
        tStack_140.top = tStack_140.left;
        tStack_140.bottom = tStack_140.right;
        OffsetRect(&tStack_140,(int)puStack_180,iStack_17c);
        pt_04.y = local_188;
        pt_04.x = local_18c;
        BVar2 = PtInRect(&tStack_140,pt_04);
        if ((BVar2 != 0) && ((_DAT_00610f20 != fStack_130 || (_DAT_00610f20 != (float)uStack_168))))
        {
          return 9;
        }
      }
      FUN_0050d990(&tStack_140,local_11c,iVar1,&uStack_148);
      LVar3 = tStack_140.left;
      if (tStack_140.right <= tStack_140.left) {
        LVar3 = tStack_140.right;
      }
      if (LVar3 <= local_18c) {
        LVar3 = tStack_140.left;
        if (tStack_140.left <= tStack_140.right) {
          LVar3 = tStack_140.right;
        }
        if (local_18c <= LVar3) {
          LVar3 = tStack_140.top;
          if (tStack_140.bottom <= tStack_140.top) {
            LVar3 = tStack_140.bottom;
          }
          if (LVar3 <= local_188) {
            LVar3 = tStack_140.top;
            if (tStack_140.top <= tStack_140.bottom) {
              LVar3 = tStack_140.bottom;
            }
            if (local_188 <= LVar3) {
              return 10;
            }
          }
        }
      }
      iVar4 = 0;
      iVar5 = *(int *)(local_16c + 0x290) / 2;
      if (*(int **)(iVar1 + 0x94) == (int *)0x0) {
        puStack_180 = (undefined4 *)0x0;
      }
      else {
        puStack_180 = (undefined4 *)**(int **)(iVar1 + 0x94);
      }
      if (0 < (int)puStack_180) {
        do {
          uStack_168._0_4_ =
               *(float *)(*(int *)(*(int *)(iVar1 + 0x94) + 4) * iVar4 + 4 +
                         *(int *)(*(int *)(iVar1 + 0x94) + 8));
          uStack_168._4_4_ = 0;
          iStack_160 = 0;
          iStack_15c = 0x3f800000;
          FUN_0050d7f0(&uStack_158,&uStack_168,iVar1,&uStack_148);
          if (((int)uStack_158 - iVar5 <= local_18c) && (local_18c <= (int)uStack_158 + iVar5)) {
            param_1[0x34] = iVar4;
            param_1[0x35] = (int)(float)uStack_168;
            param_1[0x36] = uStack_168._4_4_;
            param_1[0x37] = iStack_160;
            param_1[0x38] = iStack_15c;
            return 0x11;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)puStack_180);
      }
      iVar4 = 0;
      if (*(int **)(iVar1 + 0x98) == (int *)0x0) {
        puStack_180 = (undefined4 *)0x0;
      }
      else {
        puStack_180 = (undefined4 *)**(int **)(iVar1 + 0x98);
      }
      if (0 < (int)puStack_180) {
        do {
          uStack_168._4_4_ =
               *(int *)(*(int *)(*(int *)(iVar1 + 0x98) + 4) * iVar4 + 4 +
                       *(int *)(*(int *)(iVar1 + 0x98) + 8));
          uStack_168._0_4_ = 0.0;
          iStack_160 = 0;
          iStack_15c = 0x3f800000;
          FUN_0050d7f0(&uStack_158,&uStack_168,iVar1,&uStack_148);
          if ((uStack_158._4_4_ - iVar5 <= local_188) && (local_188 <= uStack_158._4_4_ + iVar5)) {
            param_1[0x34] = iVar4;
            param_1[0x35] = (int)(float)uStack_168;
            param_1[0x36] = uStack_168._4_4_;
            param_1[0x37] = iStack_160;
            param_1[0x38] = iStack_15c;
            return 0x10;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)puStack_180);
      }
      puVar8 = auStack_64;
      for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      FUN_0050db20(auStack_64,iVar1,*(undefined4 *)(iVar1 + 0x88),*(undefined4 *)(iVar1 + 0x8c),0,1,
                   0,0,0,0);
      fVar11 = (float10)FUN_0050e0e0(auStack_64,iVar1,&uStack_148,1);
      uStack_168 = (double)(fVar11 * (float10)_DAT_00610560);
      iVar4 = FUN_00510de0(&local_18c,&tStack_140,uStack_168,*(undefined4 *)(local_16c + 0x290));
      if (iVar4 != 0) {
        return 8;
      }
    }
  }
  return 0x13;
}


