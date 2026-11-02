/* Module: vegas30k.dll
   Function: FUN_010aace0
   Address: 010aace0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010aace0(RECT *param_1,int param_2,int param_3,int param_4,byte param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  POINT pt;
  POINT pt_00;
  int iVar4;
  int iVar5;
  LONG LVar6;
  UINT_PTR UVar7;
  HWND pHVar8;
  BOOL BVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  byte *pbVar14;
  undefined4 uVar15;
  tagPOINT tStack_10;
  undefined1 auStack_8 [8];
  
  pbVar2 = (byte *)param_1;
  bVar13 = false;
  if (param_4 != 5) {
    if (param_4 == 8) {
      pHVar8 = GetCapture();
      if (pHVar8 != *(HWND *)((int)param_1 + 0x30)) {
        return;
      }
      ReleaseCapture();
      *(uint *)((int)param_1 + 0xc) = *(uint *)((int)param_1 + 0xc) & 0xffffbfff;
      if (*(int *)((int)param_1 + 0xb0) == 5) {
        (**(code **)((int)param_1 + 0x120))
                  (param_1,*(undefined4 *)((int)param_1 + 0x34),
                   *(undefined4 *)((int)param_1 + 0x11c),4,(byte *)((int)param_1 + 0x1c),
                   *(undefined4 *)((int)param_1 + 0x100));
      }
      if (*(int *)((int)param_1 + 0xb4) != 0) {
        KillTimer(*(HWND *)((int)param_1 + 0x30),0x2a);
        *(byte *)((int)param_1 + 0xb4) = 0;
        *(byte *)((int)param_1 + 0xb5) = 0;
        *(byte *)((int)param_1 + 0xb6) = 0;
        *(byte *)((int)param_1 + 0xb7) = 0;
      }
      (**(code **)((int)param_1 + 0x120))
                (param_1,*(undefined4 *)((int)param_1 + 0x34),*(undefined4 *)((int)param_1 + 0x11c),
                 8,(byte *)((int)param_1 + 0x1c),*(undefined4 *)((int)param_1 + 0x100));
      ShowCaret(*(HWND *)((int)param_1 + 0x30));
      *(byte *)((int)param_1 + 0xb0) = 0xff;
      *(byte *)((int)param_1 + 0xb1) = 0xff;
      *(byte *)((int)param_1 + 0xb2) = 0xff;
      *(byte *)((int)param_1 + 0xb3) = 0xff;
      FUN_010aa890(param_1,1);
      return;
    }
    if (param_4 != 9) {
      return;
    }
    if ((*(byte *)((int)param_1 + 0xc) & 0x80) != 0) {
      return;
    }
    iVar4 = FUN_010aaad0(param_1,param_2,param_3,(param_5 & 4) == 4,(byte *)((int)param_1 + 0x100),
                         (byte *)((int)param_1 + 0x104));
    if (iVar4 == -1) {
      return;
    }
    FUN_010a77a0(param_1,(byte *)((int)param_1 + 0xa8),(byte *)((int)param_1 + 0x1c));
    bVar13 = iVar4 == 5;
    if (bVar13) {
      iVar5 = FUN_010a9e90(param_1,*(undefined4 *)
                                    ((int)param_1 + *(int *)((int)param_1 + 0x104) * 4 + 0xa8));
      *(int *)((int)param_1 + 0x8c) = iVar5 - param_2;
      *(int *)((int)param_1 + 0x90) = iVar5 - param_3;
      *(int *)((int)param_1 + 0x94) = param_2;
      *(int *)((int)param_1 + 0x98) = param_3;
      LVar6 = GetMessageTime();
      *(LONG *)((int)param_1 + 0x9c) = LVar6;
    }
    HideCaret(*(HWND *)((int)param_1 + 0x30));
    SetCapture(*(HWND *)((int)param_1 + 0x30));
    *(int *)((int)param_1 + 0xb0) = iVar4;
    (**(code **)((int)param_1 + 0x120))
              (param_1,*(undefined4 *)((int)param_1 + 0x34),*(undefined4 *)((int)param_1 + 0x11c),9,
               (byte *)((int)param_1 + 0x1c),*(undefined4 *)((int)param_1 + 0x100));
    if (iVar4 != 5) {
      UVar7 = SetTimer(*(HWND *)((int)param_1 + 0x30),0x2a,0xfa,(TIMERPROC)0x0);
      *(UINT_PTR *)((int)param_1 + 0xb4) = UVar7;
    }
  }
  if (*(int *)((int)param_1 + 0xb0) != 5) {
    pbVar2 = (byte *)((int)param_1 + 0x100);
    iVar4 = FUN_010aaad0(param_1,param_2,param_3,(param_5 & 4) == 4,pbVar2,
                         (byte *)((int)param_1 + 0x104));
    if (*(int *)((int)param_1 + 0xb0) != iVar4) {
      return;
    }
    if ((*(byte *)param_1 & 2) != 0) {
      FUN_010ab3c0(param_1,*(int *)((int)param_1 + 0xb0),*(undefined4 *)pbVar2);
      FUN_010aa890(param_1,1);
    }
    (**(code **)((int)param_1 + 0x120))
              (param_1,*(undefined4 *)((int)param_1 + 0x34),*(undefined4 *)((int)param_1 + 0x11c),
               *(undefined4 *)((int)param_1 + 0xb0),(byte *)((int)param_1 + 0x1c),
               *(undefined4 *)pbVar2);
    return;
  }
  uVar3 = *(uint *)((int)param_1 + 0xc);
  param_1 = (RECT *)&DAT_0128e904;
  _param_5 = DAT_0128e8fc;
  if ((uVar3 & 0x4000) != 0) {
    param_1 = (RECT *)&DAT_0128e914;
    _param_5 = DAT_0128e900;
  }
  tStack_10.x = param_2 - *(int *)(pbVar2 + 0x94);
  tStack_10.y = param_3 - *(int *)(pbVar2 + 0x98);
  uVar12 = (int)(uVar3 << 0x12) >> 0x1f;
  if ((((uVar3 & 0x1000) == 0) &&
      (pt.y = tStack_10.y, pt.x = tStack_10.x, BVar9 = PtInRect(param_1,pt), BVar9 != 0)) &&
     (LVar6 = GetMessageTime(), _param_5 < (uint)(LVar6 - *(int *)(pbVar2 + 0x9c)))) {
    uVar12 = 1;
  }
  tStack_10.x = param_2;
  tStack_10.y = param_3;
  pt_00.y = param_3;
  pt_00.x = param_2;
  BVar9 = PtInRect((RECT *)(pbVar2 + *(int *)(pbVar2 + 0x104) * 0x24 + 0xb8),pt_00);
  if (BVar9 == 0) {
    uVar12 = (*(int *)(pbVar2 + 0xc) << 0x12) >> 0x1f;
  }
  pbVar1 = pbVar2 + 0x1c;
  *(uint *)(pbVar2 + 0xc) = (uVar12 & 1) << 0xe | *(uint *)(pbVar2 + 0xc) & 0xffffbfff;
  iVar4 = *(int *)(pbVar2 + *(int *)(pbVar2 + 0x104) * 4 + 0x1c);
  FUN_010a77a0(pbVar2,auStack_8,pbVar1);
  if ((pbVar2[0xc] & 8) == 0) {
    if (*(int *)(pbVar2 + 0x94) == param_2) goto LAB_010ab0c1;
    if (uVar12 == 0) {
      uVar15 = *(undefined4 *)(pbVar2 + 0x100);
      iVar4 = *(int *)(pbVar2 + 0x8c);
      iVar5 = param_2;
      goto LAB_010ab09a;
    }
    iVar5 = param_2 - *(int *)(pbVar2 + 0x94);
    if (iVar5 < 0) {
      iVar5 = iVar5 + -1;
    }
    else {
      iVar5 = iVar5 + 1;
    }
    iVar5 = iVar5 / 2;
    iVar10 = iVar5 + iVar4;
    iVar11 = *(int *)(pbVar2 + 0x10);
    if ((iVar10 < *(int *)(pbVar2 + 0x10)) ||
       (iVar11 = *(int *)(pbVar2 + 0x14), *(int *)(pbVar2 + 0x14) < iVar10)) {
      iVar10 = iVar11;
    }
    if (iVar10 == iVar4) goto LAB_010ab0c1;
    tStack_10.x = FUN_010a9e90(pbVar2,iVar10);
    tStack_10.x = tStack_10.x - *(int *)(pbVar2 + 0x8c);
    uVar15 = *(undefined4 *)(pbVar2 + 0x100);
    pbVar14 = pbVar1;
  }
  else {
    if (*(int *)(pbVar2 + 0x98) == param_3) goto LAB_010ab0c1;
    if (uVar12 != 0) {
      iVar5 = param_3 - *(int *)(pbVar2 + 0x98);
      if (iVar5 < 0) {
        iVar5 = iVar5 + -1;
      }
      else {
        iVar5 = iVar5 + 1;
      }
      iVar10 = *(int *)(pbVar2 + 0x10);
      iVar11 = iVar4 - iVar5 / 2;
      if ((iVar10 <= iVar11) &&
         (iVar10 = *(int *)(pbVar2 + 0x14), iVar11 <= *(int *)(pbVar2 + 0x14))) {
        iVar10 = iVar11;
      }
      if (iVar10 != iVar4) {
        FUN_010a7810(pbVar2,pbVar1,pbVar1,-(iVar5 / 2),*(undefined4 *)(pbVar2 + 0x100));
        tStack_10.y = FUN_010a9e90(pbVar2,iVar10);
        tStack_10.y = tStack_10.y - *(int *)(pbVar2 + 0x90);
      }
      goto LAB_010ab0c1;
    }
    uVar15 = *(undefined4 *)(pbVar2 + 0x100);
    iVar4 = *(int *)(pbVar2 + 0x90);
    iVar5 = param_3;
LAB_010ab09a:
    iVar5 = FUN_010ab1f0(pbVar2,iVar4 + iVar5);
    iVar5 = iVar5 - *(int *)(pbVar2 + *(int *)(pbVar2 + 0x104) * 4 + 0xa8);
    pbVar14 = pbVar2 + 0xa8;
  }
  FUN_010a7810(pbVar2,pbVar1,pbVar14,iVar5,uVar15);
LAB_010ab0c1:
  *(LONG *)(pbVar2 + 0x94) = tStack_10.x;
  *(LONG *)(pbVar2 + 0x98) = tStack_10.y;
  LVar6 = GetMessageTime();
  *(LONG *)(pbVar2 + 0x9c) = LVar6;
  if ((uVar12 != 0) && ((tStack_10.x != param_2 || (tStack_10.y != param_3)))) {
    *(uint *)(pbVar2 + 0xc) = *(uint *)(pbVar2 + 0xc) | 0x8000;
    ClientToScreen(*(HWND *)(pbVar2 + 0x30),&tStack_10);
    SetCursorPos(tStack_10.x,tStack_10.y);
    *(uint *)(pbVar2 + 0xc) = *(uint *)(pbVar2 + 0xc) & 0xffff7fff;
  }
  if ((!bVar13) && (iVar4 = FUN_010a77d0(pbVar2,auStack_8,pbVar1), iVar4 != 0)) {
    return;
  }
  FUN_010aa890(pbVar2,1);
  (**(code **)(pbVar2 + 0x120))
            (pbVar2,*(undefined4 *)(pbVar2 + 0x34),*(undefined4 *)(pbVar2 + 0x11c),5,pbVar1,
             *(undefined4 *)(pbVar2 + 0x100));
  return;
}


