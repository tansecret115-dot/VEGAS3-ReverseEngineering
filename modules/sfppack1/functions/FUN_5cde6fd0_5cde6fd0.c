/* Module: sfppack1.dll
   Function: FUN_5cde6fd0
   Address: 5cde6fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cde6fd0(RECT *param_1,int param_2,int param_3,uint param_4)

{
  LONG *pLVar1;
  RECT *pRVar2;
  LONG LVar3;
  POINT pt;
  POINT pt_00;
  uint uVar4;
  int iVar5;
  LONG LVar6;
  UINT_PTR UVar7;
  HWND pHVar8;
  BOOL BVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  LONG *pLVar15;
  tagPOINT tStack_10;
  undefined4 auStack_8 [2];
  
  pRVar2 = param_1;
  bVar14 = false;
  if (param_4 != 5) {
    if (param_4 == 8) {
      pHVar8 = GetCapture();
      if (pHVar8 != (HWND)param_1[3].left) {
        return;
      }
      ReleaseCapture();
      iVar5 = param_1[0xb].left;
      param_1->bottom = param_1->bottom & 0xffffbfff;
      if (iVar5 == 5) {
        (*(code *)param_1[0x12].left)
                  (param_1,param_1[3].top,param_1[0x11].bottom,4,&param_1[1].bottom,
                   param_1[0x10].left);
      }
      if (param_1[0xb].top != 0) {
        KillTimer((HWND)param_1[3].left,0x2a);
        param_1[0xb].top = 0;
      }
      (*(code *)param_1[0x12].left)
                (param_1,param_1[3].top,param_1[0x11].bottom,8,&param_1[1].bottom,param_1[0x10].left
                );
      ShowCaret((HWND)param_1[3].left);
      param_1[0xb].left = -1;
      FUN_5cde6bc0((byte *)param_1,1);
      return;
    }
    if (param_4 != 9) {
      return;
    }
    if ((param_1->bottom & 0x80) != 0) {
      return;
    }
    uVar4 = FUN_5cde6de0((int)param_1,param_2,param_3,(uint *)(param_1 + 0x10),
                         (uint *)&param_1[0x10].top);
    if (uVar4 == 0xffffffff) {
      return;
    }
    FUN_5cde3ad0((int)param_1,&param_1[10].right,(int)&param_1[1].bottom);
    bVar14 = uVar4 == 5;
    if (bVar14) {
      iVar5 = FUN_5cde61c0((byte *)param_1,(&param_1[10].right)[param_1[0x10].top]);
      param_1[9].left = iVar5 - param_3;
      param_1[9].top = param_2;
      param_1[8].bottom = iVar5 - param_2;
      param_1[9].right = param_3;
      LVar6 = GetMessageTime();
      param_1[9].bottom = LVar6;
    }
    HideCaret((HWND)param_1[3].left);
    SetCapture((HWND)param_1[3].left);
    LVar6 = param_1[3].top;
    LVar3 = param_1[0x11].bottom;
    param_1[0xb].left = uVar4;
    (*(code *)param_1[0x12].left)(param_1,LVar6,LVar3,9,&param_1[1].bottom,param_1[0x10].left);
    if (uVar4 != 5) {
      UVar7 = SetTimer((HWND)param_1[3].left,0x2a,0xfa,(TIMERPROC)0x0);
      param_1[0xb].top = UVar7;
    }
  }
  if (param_1[0xb].left != 5) {
    pRVar2 = param_1 + 0x10;
    uVar4 = FUN_5cde6de0((int)param_1,param_2,param_3,(uint *)pRVar2,(uint *)&param_1[0x10].top);
    if (param_1[0xb].left != uVar4) {
      return;
    }
    if ((param_1->left & 2) != 0) {
      FUN_5cde7690((int)param_1,param_1[0xb].left,pRVar2->left);
      FUN_5cde6bc0((byte *)param_1,1);
    }
    (*(code *)param_1[0x12].left)
              (param_1,param_1[3].top,param_1[0x11].bottom,param_1[0xb].left,&param_1[1].bottom,
               pRVar2->left);
    return;
  }
  uVar4 = param_1->bottom;
  param_1 = (RECT *)&DAT_5ce23b44;
  param_4 = DAT_5ce23b3c;
  if ((uVar4 & 0x4000) != 0) {
    param_1 = (RECT *)&DAT_5ce23b54;
    param_4 = DAT_5ce23b40;
  }
  tStack_10.x = param_2 - pRVar2[9].top;
  tStack_10.y = param_3 - pRVar2[9].right;
  uVar13 = (int)(uVar4 << 0x12) >> 0x1f;
  if ((((uVar4 & 0x1000) == 0) &&
      (pt.y = tStack_10.y, pt.x = tStack_10.x, BVar9 = PtInRect(param_1,pt), BVar9 != 0)) &&
     (LVar6 = GetMessageTime(), param_4 < (uint)(LVar6 - pRVar2[9].bottom))) {
    uVar13 = 1;
  }
  tStack_10.x = param_2;
  tStack_10.y = param_3;
  pt_00.y = param_3;
  pt_00.x = param_2;
  BVar9 = PtInRect((RECT *)((int)pRVar2 + pRVar2[0x10].top * 0x24 + 0xb8),pt_00);
  if (BVar9 == 0) {
    uVar13 = (pRVar2->bottom << 0x12) >> 0x1f;
  }
  iVar5 = pRVar2[0x10].top;
  pLVar1 = &pRVar2[1].bottom;
  pRVar2->bottom = (uVar13 & 1) << 0xe | pRVar2->bottom & 0xffffbfffU;
  iVar5 = (&pRVar2[1].bottom)[iVar5];
  FUN_5cde3ad0((int)pRVar2,auStack_8,(int)pLVar1);
  if ((pRVar2->bottom & 8) == 0) {
    if (pRVar2[9].top == param_2) goto LAB_5cde739b;
    if (uVar13 == 0) {
      uVar4 = pRVar2[0x10].left;
      iVar5 = pRVar2[8].bottom;
      iVar10 = param_2;
      goto LAB_5cde7374;
    }
    iVar10 = param_2 - pRVar2[9].top;
    if (iVar10 < 0) {
      iVar10 = iVar10 + -1;
    }
    else {
      iVar10 = iVar10 + 1;
    }
    iVar10 = iVar10 / 2;
    iVar11 = iVar10 + iVar5;
    iVar12 = pRVar2[1].left;
    if ((iVar11 < pRVar2[1].left) || (iVar12 = pRVar2[1].top, pRVar2[1].top < iVar11)) {
      iVar11 = iVar12;
    }
    if (iVar11 == iVar5) goto LAB_5cde739b;
    tStack_10.x = FUN_5cde61c0((byte *)pRVar2,iVar11);
    tStack_10.x = tStack_10.x - pRVar2[8].bottom;
    uVar4 = pRVar2[0x10].left;
    pLVar15 = pLVar1;
  }
  else {
    if (pRVar2[9].right == param_3) goto LAB_5cde739b;
    if (uVar13 != 0) {
      iVar10 = param_3 - pRVar2[9].right;
      if (iVar10 < 0) {
        iVar10 = iVar10 + -1;
      }
      else {
        iVar10 = iVar10 + 1;
      }
      iVar11 = pRVar2[1].left;
      iVar12 = iVar5 - iVar10 / 2;
      if ((iVar11 <= iVar12) && (iVar11 = pRVar2[1].top, iVar12 <= pRVar2[1].top)) {
        iVar11 = iVar12;
      }
      if (iVar11 != iVar5) {
        FUN_5cde3b40((int)pRVar2,pLVar1,(int)pLVar1,-(iVar10 / 2),pRVar2[0x10].left);
        tStack_10.y = FUN_5cde61c0((byte *)pRVar2,iVar11);
        tStack_10.y = tStack_10.y - pRVar2[9].left;
      }
      goto LAB_5cde739b;
    }
    uVar4 = pRVar2[0x10].left;
    iVar5 = pRVar2[9].left;
    iVar10 = param_3;
LAB_5cde7374:
    iVar10 = FUN_5cde74c0((byte *)pRVar2,iVar5 + iVar10);
    iVar10 = iVar10 - (&pRVar2[10].right)[pRVar2[0x10].top];
    pLVar15 = &pRVar2[10].right;
  }
  FUN_5cde3b40((int)pRVar2,pLVar1,(int)pLVar15,iVar10,uVar4);
LAB_5cde739b:
  pRVar2[9].top = tStack_10.x;
  pRVar2[9].right = tStack_10.y;
  LVar6 = GetMessageTime();
  pRVar2[9].bottom = LVar6;
  if ((uVar13 != 0) && ((tStack_10.x != param_2 || (tStack_10.y != param_3)))) {
    pHVar8 = (HWND)pRVar2[3].left;
    pRVar2->bottom = pRVar2->bottom | 0x8000;
    ClientToScreen(pHVar8,&tStack_10);
    SetCursorPos(tStack_10.x,tStack_10.y);
    pRVar2->bottom = pRVar2->bottom & 0xffff7fff;
  }
  if ((!bVar14) && (iVar5 = FUN_5cde3b00((int)pRVar2,(int)auStack_8,pLVar1), iVar5 != 0)) {
    return;
  }
  FUN_5cde6bc0((byte *)pRVar2,1);
  (*(code *)pRVar2[0x12].left)(pRVar2,pRVar2[3].top,pRVar2[0x11].bottom,5,pLVar1,pRVar2[0x10].left);
  return;
}


