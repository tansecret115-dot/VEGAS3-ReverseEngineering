/* Module: vidcap30.exe
   Function: FUN_0053ded0
   Address: 0053ded0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0053ded0(int *param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  LONG LVar2;
  LONG LVar3;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  int *piVar4;
  byte bVar5;
  HWND pHVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  BOOL BVar14;
  int iVar15;
  RECT *lprc;
  int iVar16;
  int iVar17;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  piVar4 = param_1;
  iVar17 = (int)(short)param_4;
  iVar16 = (int)(short)(param_4 >> 0x10);
  if (param_2 < 0x203) {
    if (param_2 != 0x202) {
      if (param_2 == 0x100) {
        if (param_3 != 0x1b) {
          return 0;
        }
        pHVar6 = GetCapture();
        if (pHVar6 != (HWND)*param_1) {
          return 0;
        }
        ReleaseCapture();
        ClipCursor((RECT *)0x0);
        InvalidateRect((HWND)*param_1,(RECT *)0x0,1);
        param_1[0x6e] = 0;
        SetRectEmpty((LPRECT)(param_1 + 0x66));
        return 0;
      }
      if (param_2 == 0x200) {
        pHVar6 = GetCapture();
        if (pHVar6 != (HWND)*param_1) {
          return 0;
        }
        bVar5 = (byte)param_3;
        if ((((param_3 & 3) != 0) && ((*(byte *)(param_1 + 0x6e) & 8) == 0)) &&
           (pt.y = iVar16, pt.x = iVar17, BVar14 = PtInRect((RECT *)(param_1 + 0x66),pt),
           BVar14 == 0)) {
          uVar9 = param_1[0x6e];
          param_1[0x6e] = uVar9 | 8;
          if (((*(byte *)(param_1 + 0x5a) & 2) != 0) && ((uVar9 & 1) != 0)) {
            param_1[0x6e] = uVar9 | 0x18;
            iVar15 = FUN_00540ac0(param_1,~bVar5 & 1 | 0x16,iVar17,iVar16);
            param_1[0x6e] = (uint)(iVar15 == 0) << 5 | param_1[0x6e] & 0xffffffdfU;
          }
        }
        if ((param_1[0x6e] & 0x40U) == 0) {
          return 0;
        }
        if ((param_1[0x6e] & 8U) == 0) {
          return 0;
        }
        iVar13 = FUN_00540b30(param_1,iVar17,iVar16);
        iVar7 = FUN_00540ba0(param_1,iVar17,iVar16);
        iVar8 = FUN_00540ba0(param_1,param_1[100],param_1[0x65]);
        iVar15 = param_1[0x5e];
        if ((iVar15 == iVar13) && (iVar7 == iVar8)) {
          if ((param_1[0x6e] & 0x80U) != 0) {
            return 0;
          }
          param_1[0x6e] = param_1[0x6e] | 0x80;
          FUN_005411c0(param_1,iVar8,iVar15,1);
          FUN_00540ac0(param_1,0x12,iVar17,iVar16);
          return 0;
        }
        if ((param_1[0x6e] & 0x80U) == 0) {
          return 0;
        }
        param_1[0x6e] = param_1[0x6e] & 0xffffff7f;
        FUN_005411c0(param_1,iVar8,iVar15,1);
        FUN_00540ac0(param_1,0x13,iVar17,iVar16);
        return 0;
      }
      if (param_2 != 0x201) {
        return 0;
      }
LAB_0053e2ab:
      iVar15 = 1;
      SetFocus((HWND)*param_1);
      SetCapture((HWND)*param_1);
      param_1[100] = iVar17;
      param_1[0x6e] = 0;
      param_1[0x65] = iVar16;
      param_4 = param_3 & 8;
      if (param_4 != 0) {
        param_1[0x6e] = 4;
      }
      param_3 = param_3 & 4;
      if ((param_3 != 0) && (param_1[0x6e] = param_1[0x6e] | 2, (param_1[0x59] & 0x300U) != 0)) {
        FUN_00544f90(param_1);
        if (param_1[0x14] == 0) {
          _SfList_DeleteList_16(param_1[0x11],0,0xffffffff,0);
        }
        else {
          FUN_00541050(param_1,param_1[0x14]);
        }
        FUN_00541670(param_1,iVar17,iVar16);
        iVar15 = 0;
      }
      uVar11 = FUN_00540ba0(param_1,iVar17,iVar16);
      uVar12 = FUN_00540b30(param_1,iVar17,iVar16);
      iVar13 = FUN_00540eb0(param_1,uVar11,uVar12);
      if (iVar13 != 0) {
        param_1[0x6e] = param_1[0x6e] | 1;
      }
      if (((((param_1[0x5a] & 2U) != 0) && ((*(byte *)(param_1 + 0x6e) & 1) != 0)) && (param_3 == 0)
          ) && (param_4 == 0)) {
        iVar15 = 0;
      }
      if ((((*(byte *)(param_1 + 0x6e) & 4) == 0) || ((param_1[0x5a] & 8U) == 0)) &&
         ((FUN_00541610(param_1,iVar17,iVar16,iVar15), iVar15 != 0 &&
          (iVar15 = FUN_00540eb0(param_1,uVar11,uVar12), iVar15 != 0)))) {
        param_1[0x6e] = param_1[0x6e] | 1;
      }
      iVar15 = GetSystemMetrics(0x44);
      iVar13 = (iVar15 + 1) / 2;
      iVar15 = GetSystemMetrics(0x45);
      iVar15 = (iVar15 + 1) / 2;
      SetRect((LPRECT)(param_1 + 0x66),iVar17 - iVar13,iVar16 - iVar15,iVar13 + iVar17,
              iVar15 + iVar16);
      if (((param_2 == 0x201) && (uVar9 = param_1[0x5e], uVar9 < (uint)param_1[0x18])) &&
         ((*(byte *)(uVar9 * 0x10 + 5 + param_1[0x70]) & 0x10) != 0)) {
        uVar12 = 1;
        param_1[0x6e] = param_1[0x6e] | 0xc0;
        uVar11 = FUN_00540ba0(param_1,param_1[100],param_1[0x65]);
        FUN_005411c0(param_1,uVar11,uVar9,uVar12);
        FUN_00540ac0(param_1,0x12,iVar17,iVar16);
      }
      lprc = (RECT *)(param_1 + 0x22);
      pt_00.y = iVar16;
      pt_00.x = iVar17;
      BVar14 = PtInRect(lprc,pt_00);
      if (BVar14 == 0) {
        lprc = (RECT *)(param_1 + 0x1e);
        pt_01.y = iVar16;
        pt_01.x = iVar17;
        BVar14 = PtInRect(lprc,pt_01);
        if (BVar14 == 0) {
          param_1[0x26] = 0;
          param_1[0x27] = 0;
          param_1[0x28] = 0;
          param_1[0x29] = 0;
          return 0;
        }
      }
      LVar2 = lprc->top;
      ((LPRECT)(param_1 + 0x26))->left = lprc->left;
      LVar3 = lprc->right;
      param_1[0x27] = LVar2;
      LVar2 = lprc->bottom;
      param_1[0x28] = LVar3;
      param_1[0x29] = LVar2;
      InflateRect((LPRECT)(param_1 + 0x26),-1,-1);
      return 0;
    }
  }
  else {
    if (param_2 == 0x203) {
      FUN_00540ac0(param_1,4,iVar17,iVar16);
      return 0;
    }
    if (param_2 == 0x204) goto LAB_0053e2ab;
    if (param_2 != 0x205) {
      return 0;
    }
  }
  pHVar6 = GetCapture();
  if (pHVar6 != (HWND)*param_1) {
    return 0;
  }
  uVar9 = param_1[0x6e];
  if ((uVar9 & 8) == 0) {
    if (((uVar9 & 4) != 0) && ((*(byte *)(param_1 + 0x5a) & 8) != 0)) {
      uVar9 = FUN_00540ba0(param_1,param_1[100],param_1[0x65]);
      uVar10 = FUN_00540b30(param_1,param_1[100],param_1[0x65]);
      if ((uVar9 == 0xffff) || ((uVar9 < (uint)param_1[0x17] || ((param_1[0x58] & 0x800U) != 0)))) {
        if (*(int *)param_1[0x11] != 0) {
          puVar1 = *(uint **)((int *)param_1[0x11])[2];
          if ((param_1[0x59] & 0x100U) == 0) {
            uVar9 = *puVar1;
          }
          if ((param_1[0x59] & 0x200U) == 0) {
            uVar10 = puVar1[1];
          }
        }
        param_1 = (int *)uVar10;
        piVar4[0x12] = uVar9;
        piVar4[0x13] = (int)param_1;
        iVar15 = FUN_00540eb0(piVar4,uVar9,param_1);
        if (iVar15 == 0) {
          local_c = (uint)param_1;
          local_4 = (uint)param_1;
          local_10 = uVar9;
          local_8 = uVar9;
          iVar15 = _SfList_AllocAndInsertItem_20(piVar4[0x11],&local_10,0x10,0xffffffff,&param_3);
          if (-1 < iVar15) {
            piVar4[0x14] = *(int *)(*(int *)(piVar4[0x11] + 8) + param_3 * 4);
          }
        }
        else {
          FUN_00540f40(piVar4,iVar15,uVar9,param_1);
          piVar4[0x14] = 0;
        }
        FUN_005411c0(piVar4,uVar9,param_1,0x61);
        FUN_00541610(piVar4,iVar17,iVar16,0);
        FUN_00540a60(piVar4,1);
        FUN_00540a60(piVar4,0xb);
      }
      goto LAB_0053e231;
    }
    if ((((*(byte *)(param_1 + 0x5a) & 2) == 0) || ((uVar9 & 1) == 0)) || ((uVar9 & 2) != 0))
    goto LAB_0053e231;
    if (param_2 != 0x202) goto LAB_0053e279;
    FUN_00541610(param_1,iVar17,iVar16,1);
LAB_0053e239:
    uVar9 = piVar4[0x6e];
    if (((uVar9 & 0x40) == 0) || ((uVar9 & 0x80) == 0)) goto LAB_0053e28f;
    bVar5 = (byte)(uVar9 >> 3) & 1 | 0x14;
  }
  else {
LAB_0053e231:
    if (param_2 == 0x202) goto LAB_0053e239;
LAB_0053e279:
    iVar16 = piVar4[0x65];
    iVar17 = piVar4[100];
    bVar5 = 3;
  }
  FUN_00540ac0(piVar4,bVar5,iVar17,iVar16);
LAB_0053e28f:
  piVar4[0x6e] = 0;
  ReleaseCapture();
  return 0;
}


