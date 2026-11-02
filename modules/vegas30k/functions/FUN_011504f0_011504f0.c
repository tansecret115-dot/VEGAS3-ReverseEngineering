/* Module: vegas30k.dll
   Function: FUN_011504f0
   Address: 011504f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_011504f0(undefined4 *param_1,uint param_2,HWND param_3,RECT *param_4)

{
  UINT *pUVar1;
  undefined *puVar2;
  LONG LVar3;
  LONG LVar4;
  undefined4 *puVar5;
  uint uVar6;
  bool bVar7;
  BOOL BVar8;
  LRESULT LVar9;
  undefined4 uVar10;
  undefined *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  LONG *pLVar14;
  uint uVar15;
  HGLOBAL pvVar16;
  LPVOID pvVar17;
  int iVar18;
  HWND pHVar19;
  uint uVar20;
  HWND pHVar21;
  HWND pHVar22;
  short sVar23;
  HWND unaff_EBX;
  RECT *pRVar24;
  int iVar25;
  uint *puVar26;
  SIZE_T dwBytes;
  UINT uFlags;
  RECT local_48;
  RECT local_38;
  tagRECT local_28;
  uint local_18;
  undefined *local_14;
  undefined *local_10;
  uint local_c;
  LPSTR pCStack_8;
  
  puVar13 = param_1;
  pHVar21 = (HWND)*param_1;
  param_1 = (undefined4 *)0x0;
  if (0x7e8 < param_2) {
    return (undefined *)0x0;
  }
  if (param_2 == 0x7e8) {
    EnableScrollBar(pHVar21,(uint)param_3 & 0xffff,(UINT)param_4);
    return (undefined *)0x0;
  }
  sVar23 = (short)param_4;
  switch(param_2) {
  case 0x405:
    uVar15 = puVar13[0x58];
    puVar11 = (undefined *)(uVar15 >> 0xe & 1);
    if (param_3 == (HWND)0x0) {
      puVar13[0x58] = uVar15 & 0xffffbfff;
      return puVar11;
    }
    puVar13[0x58] = uVar15 | 0x4000;
    return puVar11;
  case 0x407:
    if (puVar13[0x70] == 0) {
      return (undefined *)0x0;
    }
    iVar25 = FUN_0114eae0(puVar13,puVar13[0xf],puVar13[0x10]);
    if (param_4 == (RECT *)0x0) {
      if (iVar25 == 0) {
        return (undefined *)0x0;
      }
      param_4 = &local_38;
      FUN_0114fc20(iVar25,&local_38);
      if (local_38.left != 0) {
        return (undefined *)0x0;
      }
      if ((uint)local_38.right < (uint)puVar13[0x17]) {
        return (undefined *)0x0;
      }
    }
    pHVar21 = (HWND)(param_4->bottom + 1);
    pHVar19 = (HWND)puVar13[0x18];
    if (pHVar19 <= pHVar21) {
      pHVar21 = pHVar19;
    }
    pHVar22 = (HWND)param_4->top;
    if (pHVar21 <= pHVar22) {
      return (undefined *)0x0;
    }
    if ((pHVar22 <= param_3) && (param_3 <= pHVar21)) {
      return (undefined *)0x0;
    }
    FUN_0114fa90(puVar13[0x70],pHVar19,pHVar22,(int)pHVar21 - (int)pHVar22,param_3);
    if (param_4 != (RECT *)0x0) goto LAB_01150673;
    if (param_3 < pHVar22) {
      *(int *)(iVar25 + 4) = (int)param_3 + (*(int *)(iVar25 + 4) - (int)pHVar22);
      pHVar21 = pHVar22;
LAB_01150650:
      *(int *)(iVar25 + 0xc) = (int)param_3 + (*(int *)(iVar25 + 0xc) - (int)pHVar21);
    }
    else if (pHVar21 < param_3) {
      *(int *)(iVar25 + 4) = (int)param_3 + (*(int *)(iVar25 + 4) - (int)pHVar21);
      goto LAB_01150650;
    }
    uVar15 = puVar13[0x18] - 1;
    if (*(uint *)(iVar25 + 4) <= puVar13[0x18] - 1) {
      uVar15 = *(uint *)(iVar25 + 4);
    }
    *(uint *)(iVar25 + 4) = uVar15;
    uVar15 = puVar13[0x18] - 1;
    if (*(uint *)(iVar25 + 0xc) <= puVar13[0x18] - 1) {
      uVar15 = *(uint *)(iVar25 + 0xc);
    }
    *(uint *)(iVar25 + 0xc) = uVar15;
LAB_01150673:
    InvalidateRect((HWND)*puVar13,(RECT *)0x0,1);
    return (undefined *)0x0;
  case 0x408:
    return (undefined *)puVar13[0x18];
  case 0x40a:
    param_1 = (undefined4 *)puVar13[0x70];
    if (param_4 != (RECT *)0x0) {
      param_4->bottom = (LONG)param_1;
      param_4[1].left = puVar13[0x6f];
      param_4->top = puVar13[0xe];
      param_4->left = puVar13[0x18];
      param_4->right = puVar13[0x19];
      return (undefined *)param_1;
    }
    break;
  case 0x40b:
    uVar15 = puVar13[0x18];
    if ((uint)param_4->left < uVar15) {
      FUN_0114f7d0(puVar13,puVar13[0x32],0,0);
      FUN_0114e940(puVar13,puVar13[0xf],0,1);
    }
    if (uVar15 < (uint)param_4->left) {
      dwBytes = param_4->left * 0x30;
      if ((LPCVOID)puVar13[0x71] == (LPCVOID)0x0) {
        pvVar16 = GlobalAlloc(0x42,dwBytes);
        pvVar17 = GlobalLock(pvVar16);
      }
      else {
        pvVar16 = GlobalHandle((LPCVOID)puVar13[0x71]);
        GlobalUnlock(pvVar16);
        uFlags = 0x42;
        pvVar16 = GlobalHandle((LPCVOID)puVar13[0x71]);
        pvVar16 = GlobalReAlloc(pvVar16,dwBytes,uFlags);
        pvVar17 = GlobalLock(pvVar16);
      }
      puVar13[0x71] = pvVar17;
      FUN_0114feb0(puVar13);
    }
    puVar11 = (undefined *)puVar13[0x70];
    if (param_4 != (RECT *)0x0) {
      puVar13[0x70] = param_4->bottom;
      puVar13[0x18] = param_4->left;
      puVar13[0xe] = param_4->top;
      puVar13[0x6f] = param_4[1].left;
      puVar13[0x19] = param_4->right;
    }
    puVar13[0x37] = 1;
    InvalidateRect(pHVar21,(RECT *)0x0,1);
    return puVar11;
  case 0x40e:
    if (param_4 == (RECT *)0x0) {
      return (undefined *)CONCAT22(*(undefined2 *)(puVar13 + 0x10),*(undefined2 *)(puVar13 + 0xf));
    }
    pLVar14 = (LONG *)FUN_0114eae0(puVar13,puVar13[0xf],puVar13[0x10]);
    if (param_3 == (HWND)0x0) {
      param_4->left = *pLVar14;
      param_4->top = pLVar14[1];
      param_4->right = pLVar14[2];
      param_4->bottom = pLVar14[3];
      if ((param_4->left == param_4->right) && (param_4->top == param_4->bottom)) {
        return (undefined *)0x0;
      }
      return (undefined *)0x1;
    }
    if (param_3 == (HWND)0x1) {
      FUN_0114fc20(pLVar14,param_4);
      uVar15 = puVar13[0x17];
      if ((uint)param_4->right < (uint)puVar13[0x17]) {
        uVar15 = param_4->right;
      }
      param_4->right = uVar15;
      uVar20 = param_4->bottom;
      if ((uint)puVar13[0x18] <= (uint)param_4->bottom) {
        uVar20 = puVar13[0x18];
      }
      param_4->bottom = uVar20;
      if ((uint)param_4->left < uVar15) {
        return (undefined *)0x1;
      }
      if ((uint)param_4->top < uVar20) {
        return (undefined *)0x1;
      }
      return (undefined *)0x0;
    }
    if (param_3 != (HWND)0x2) {
      return (undefined *)0x0;
    }
    FUN_0114fca0(puVar13,param_4);
    if (1 < (uint)param_4[1].left) {
      return (undefined *)0x1;
    }
    if (1 < (uint)param_4[1].top) {
      return (undefined *)0x1;
    }
    return (undefined *)0x0;
  case 0x40f:
    uVar15 = (uint)param_4 & 0xffff;
    if (sVar23 == -1) {
      uVar15 = 0xffff;
    }
    if (param_3 < (HWND)0xff00) {
      if ((HWND)puVar13[0x17] <= param_3) {
        param_3 = (HWND)puVar13[0x17];
      }
    }
    else if ((param_3 != (HWND)0xffff) || ((puVar13[0x59] & 0x100) == 0)) {
      param_3 = (HWND)0x0;
    }
    if (uVar15 < 0xff00) {
      if ((uint)puVar13[0x18] <= uVar15) {
        uVar15 = puVar13[0x18];
      }
    }
    else if ((uVar15 != 0xffff) || ((puVar13[0x59] & 0x200) == 0)) {
      uVar15 = 0;
    }
    FUN_0114f9b0(puVar13,param_3,uVar15);
    FUN_0114e940(puVar13,param_3,uVar15,1);
    return (undefined *)CONCAT22(*(undefined2 *)(puVar13 + 0x10),*(undefined2 *)(puVar13 + 0xf));
  case 0x410:
    puVar12 = (undefined4 *)FUN_0114eae0(puVar13,puVar13[0xf],puVar13[0x10]);
    (*(code *)puVar13[0x84])(puVar13 + 0x72,*puVar12);
    puVar13 = (undefined4 *)(*(code *)puVar13[0x81])(puVar13 + 0x72,*puVar12,puVar12[1],0);
    if ((pCStack_8 != (LPSTR)0x0) && (local_c != 0)) {
      uVar15 = puVar13[1] + 1;
      if (local_c < puVar13[1] + 1) {
        uVar15 = local_c;
      }
      lstrcpynA(pCStack_8,(LPCSTR)*puVar13,uVar15);
      pCStack_8[local_c - 1] = '\0';
    }
    return (undefined *)puVar13[1];
  case 0x411:
    FUN_0114ef90(puVar13,param_4,param_3);
    return (undefined *)0x0;
  case 0x412:
    if (param_3 == (HWND)0xffffffff) {
      param_3 = (HWND)puVar13[0xf];
    }
    if ((HWND)puVar13[0x17] <= param_3) {
      return &DAT_012af830;
    }
    puVar11 = (undefined *)(*(code *)puVar13[0x84])(puVar13 + 0x72,param_3);
    return puVar11;
  case 0x413:
    param_1 = (undefined4 *)0x0;
    if (puVar13[1] == 1) {
      if ((HWND)puVar13[2] != (HWND)0x0) {
        LVar9 = SendMessageA((HWND)puVar13[2],199,0,0);
        if (LVar9 != 0) {
          param_1 = (undefined4 *)0x10;
        }
        LVar9 = SendMessageA((HWND)puVar13[2],0xb0,0,0);
        if ((short)LVar9 != (short)((uint)LVar9 >> 0x10)) {
          param_1 = (undefined4 *)((uint)param_1 | 10);
        }
        BVar8 = IsClipboardFormatAvailable(1);
        if (BVar8 != 0) {
          return (undefined *)((uint)param_1 | 4);
        }
      }
    }
    else {
      uVar10 = FUN_0114eae0(puVar13,puVar13[0xf],puVar13[0x10]);
      puVar26 = &DAT_012076c4;
      do {
        iVar25 = (*(code *)puVar13[0x85])(puVar13 + 0x72,uVar10,&local_28,10,puVar26[-1]);
        if (iVar25 != 0) {
          param_1 = (undefined4 *)((uint)param_1 | *puVar26);
        }
        puVar26 = puVar26 + 2;
      } while (puVar26 < &DAT_012076e4);
      iVar25 = (*(code *)puVar13[0x85])(puVar13 + 0x72,uVar10,&local_28,10,0x302);
      if (iVar25 != 0) {
        pLVar14 = &local_28.left + iVar25;
        do {
          pUVar1 = (UINT *)(pLVar14 + -1);
          pLVar14 = pLVar14 + -1;
          BVar8 = IsClipboardFormatAvailable(*pUVar1);
          if (BVar8 != 0) {
            param_1 = (undefined4 *)((uint)param_1 | 4);
          }
          iVar25 = iVar25 + -1;
        } while (iVar25 != 0);
        return (undefined *)param_1;
      }
    }
    break;
  case 0x414:
    if (param_4 != (RECT *)0x0) {
      param_4->right = puVar13[0x1c];
      param_4->bottom = puVar13[0x1d];
      param_4->top = puVar13[0xd];
      return (undefined *)0x0;
    }
    break;
  case 0x415:
    puVar11 = (undefined *)FUN_01151d70(puVar13,param_3);
    return puVar11;
  case 0x418:
    puVar11 = (undefined *)FUN_01155a10(puVar13,param_4);
    return puVar11;
  case 0x419:
    param_1 = (undefined4 *)FUN_011558e0(puVar13,param_4);
    if (param_4 == (RECT *)0x0) {
      if (puVar13[1] == 1) {
        FUN_0114f010(puVar13);
      }
      puVar13[1] = 3;
      return (undefined *)param_1;
    }
    FUN_011504f0(puVar13,0x41a,0,0);
    if (puVar13[1] == 4) goto LAB_0115159a;
    break;
  case 0x41a:
  case 0x434:
    pRVar24 = (RECT *)0x0;
    if (param_2 == 0x434) {
      iVar25 = FUN_0114e8b0(puVar13,param_3,&local_48);
      if (iVar25 == 0) {
        if ((HWND)puVar13[0x32] <= param_3) goto LAB_0115095d;
        local_48.top = puVar13[0x1f];
        local_48.right = puVar13[0x20];
        local_48.bottom = puVar13[0x21];
      }
      else {
        local_48.right = puVar13[0x20];
        local_48.bottom = puVar13[0x21];
      }
      local_48.left = 0;
      pRVar24 = &local_48;
    }
LAB_0115095d:
    puVar11 = (undefined *)(*(code *)puVar13[0x80])(puVar13 + 0x72);
    if (((puVar13[0x58] & 0x100) != 0) && ((int)puVar13[0x34] < 0)) {
      iVar25 = FUN_01151e20(puVar13[0x75]);
      iVar18 = FUN_01151e20(puVar11);
      pHVar21 = unaff_EBX;
      if (iVar25 != iVar18) {
        puVar13[0x37] = 1;
        InvalidateRect(unaff_EBX,(RECT *)0x0,1);
      }
    }
    puVar13[0x75] = puVar11;
    if (pRVar24 == (RECT *)0x0) {
      InvalidateRect(pHVar21,(RECT *)(puVar13 + 0x1e),1);
    }
    puVar2 = (undefined *)puVar13[0x17];
    if (puVar2 != puVar11) {
      puVar13[0x17] = puVar11;
      FUN_0114f410(puVar13);
      uVar15 = puVar13[0x17];
      if ((uVar15 != 0) && ((puVar13[0x58] & 0x800) == 0)) {
        uVar15 = uVar15 - 1;
      }
      uVar20 = puVar13[0xf];
      if (uVar15 < uVar20) {
        uVar10 = puVar13[0x10];
        uVar20 = uVar15;
      }
      else {
        uVar10 = puVar13[0x10];
      }
      FUN_0114e940(puVar13,uVar20,uVar10,1);
      FUN_0114f9b0(puVar13,puVar13[0xf],puVar13[0x10]);
      InvalidateRect(pHVar21,(RECT *)0x0,1);
    }
    FUN_0114feb0(puVar13);
    return puVar2;
  case 0x41b:
    return (undefined *)puVar13[0x17];
  case 0x41c:
    return (undefined *)puVar13[0x32];
  case 0x41d:
    if ((HWND)0xfeff < param_3) {
      param_3 = (HWND)0x0;
    }
    pHVar21 = (HWND)puVar13[0x30];
    if ((param_3 < (HWND)puVar13[0x30]) ||
       (pHVar21 = (HWND)puVar13[0x31], (HWND)puVar13[0x31] < param_3)) {
      param_3 = pHVar21;
    }
    puVar11 = (undefined *)puVar13[0x32];
    FUN_0114f7d0(puVar13,param_3,puVar13[0x2e],0);
    return puVar11;
  case 0x41e:
    if (puVar13[1] != 1) {
      if ((uint)puVar13[1] < 3) {
        uVar10 = FUN_0114eae0(puVar13,puVar13[0xf],puVar13[0x10]);
        puVar11 = (undefined *)(*(code *)puVar13[0x85])(puVar13 + 0x72,uVar10,0,0,0x304);
        return puVar11;
      }
      return (undefined *)0x0;
    }
    if ((HWND)puVar13[2] == (HWND)0x0) {
      return (undefined *)0x0;
    }
    puVar11 = (undefined *)SendMessageA((HWND)puVar13[2],0xc6,0,0);
    return puVar11;
  case 0x41f:
    if ((puVar13[1] == 1) && ((HWND)puVar13[2] != (HWND)0x0)) {
      puVar11 = (undefined *)SendMessageA((HWND)puVar13[2],199,0,0);
      return puVar11;
    }
    uVar10 = FUN_0114eae0(puVar13,puVar13[0xf],puVar13[0x10]);
    local_10 = (undefined *)(*(code *)puVar13[0x86])(puVar13 + 0x72,uVar10,0,0,0x304);
    FUN_0114edf0(puVar13,puVar13[0xf],puVar13[0x10],local_10);
    return local_10;
  case 0x420:
    return (undefined *)puVar13[0x19];
  case 0x421:
    puVar11 = (undefined *)puVar13[0x19];
    if (puVar11 == (undefined *)puVar13[0x2e]) {
      puVar13[0x2e] = param_3;
    }
    puVar13[0x19] = param_3;
    FUN_0114f410(puVar13);
    return puVar11;
  case 0x422:
    iVar25 = FUN_0114e8b0(puVar13,(uint)param_3 & 0xffff,&local_38);
    if (iVar25 != 0) {
      if (((uint)param_4 & 0xffff) == 0xffff) {
        local_38.right = puVar13[0x20];
        local_38.left = 0;
      }
      else {
        iVar25 = FUN_0114e800(puVar13,(uint)param_4 & 0xffff,&local_38);
        if (iVar25 == 0) {
          return (undefined *)0x0;
        }
      }
      InvalidateRect(pHVar21,&local_38,1);
      if ((uint)param_4 >> 0x10 != 0) {
        UpdateWindow(pHVar21);
        return (undefined *)0x0;
      }
    }
    break;
  case 0x423:
    return (undefined *)puVar13[2];
  case 0x424:
    return (undefined *)puVar13[0x47];
  case 0x425:
    param_1 = (undefined4 *)puVar13[0x47];
    BVar8 = IsWindow(param_3);
    if (BVar8 != 0) {
      puVar13[0x47] = param_3;
      return (undefined *)param_1;
    }
    break;
  case 0x426:
    if (param_4 != (RECT *)0x0) {
      pLVar14 = (LONG *)FUN_0114eae0(puVar13,puVar13[0xf],puVar13[0x10]);
      local_28.top = pLVar14[1];
      local_28.left = *pLVar14;
      if ((puVar13[0x59] & 0x100) == 0) {
        local_28.right = *pLVar14;
      }
      else {
        local_28.right = pLVar14[2];
      }
      if ((puVar13[0x59] & 0x200) == 0) {
        local_28.bottom = pLVar14[1];
      }
      else {
        local_28.bottom = pLVar14[3];
      }
      local_14 = (undefined *)puVar13[0x2e];
      local_18 = puVar13[0x32];
      FUN_01151dd0(param_4,param_3,&local_28,0x18);
    }
    return (undefined *)0x18;
  case 0x427:
    if (param_4 != (RECT *)0x0) {
      FUN_01151dd0(&local_28,0x18,param_4,param_3);
      uVar15 = puVar13[0x17];
      if ((uVar15 < (uint)local_28.left) && (local_28.left != 0xffff)) {
        local_28.left = uVar15;
      }
      puVar11 = (undefined *)puVar13[0x18];
      if ((puVar11 < (uint)local_28.top) && ((undefined *)local_28.top != (undefined *)0xffff)) {
        local_28.top = (LONG)puVar11;
      }
      if ((uVar15 < (uint)local_28.right) && (local_28.right != 0xffff)) {
        local_28.right = uVar15;
      }
      if ((puVar11 < (uint)local_28.bottom) && ((undefined *)local_28.bottom != (undefined *)0xffff)
         ) {
        local_28.bottom = (LONG)puVar11;
      }
      if (uVar15 < local_18) {
        local_18 = uVar15;
      }
      if (puVar11 < local_14) {
        local_14 = puVar11;
      }
      FUN_0114e940(puVar13,local_28.left,local_28.top,1);
      if ((puVar13[0x59] & 0x300) != 0) {
        FUN_0114ece0(puVar13,local_28.right,local_28.bottom);
      }
      FUN_0114f7d0(puVar13,local_18,local_14,0);
    }
    return (undefined *)0x18;
  case 0x429:
    uVar15 = (uint)param_4 & 0xffff;
    if (sVar23 == -1) {
      uVar15 = 0xffff;
    }
    if ((HWND)0xfeff < param_3) {
      param_3 = (HWND)0x0;
    }
    if (0xfeff < uVar15) {
      uVar15 = 0;
    }
    if ((HWND)puVar13[0x17] <= param_3) {
      param_3 = (HWND)puVar13[0x17];
    }
    if ((uint)puVar13[0x18] <= uVar15) {
      uVar15 = puVar13[0x18];
    }
    FUN_0114f9b0(puVar13,param_3,uVar15);
    FUN_0114ece0(puVar13,param_3,uVar15);
  case 0x428:
    iVar25 = FUN_0114eae0(puVar13,puVar13[0xf],puVar13[0x10]);
    return (undefined *)CONCAT22(*(undefined2 *)(iVar25 + 0xc),*(undefined2 *)(iVar25 + 8));
  case 0x42a:
    if (param_4 != (RECT *)0x0) {
      pLVar14 = (LONG *)(*(code *)puVar13[0x84])(puVar13 + 0x72,param_4->left);
      LVar3 = param_4[2].top;
      param_4[1].top = *pLVar14;
      LVar4 = param_4->top;
      param_4[1].right = pLVar14[1];
      pLVar14 = (LONG *)(*(code *)puVar13[0x81])(puVar13 + 0x72,param_4->left,LVar4,LVar3);
      param_4->right = *pLVar14;
      param_4->bottom = pLVar14[1];
      *(undefined2 *)&param_4[2].left = 1;
      return local_14;
    }
    break;
  case 0x42b:
    if (param_4 != (RECT *)0x0) {
      FUN_0114ef40(puVar13,param_4->left,param_4->top,param_4->right,param_4[2].top);
      return (undefined *)0x0;
    }
    break;
  case 0x42c:
    if (param_4 != (RECT *)0x0) {
      FUN_011523e0(pHVar21,param_4->bottom,param_4->left,puVar13);
      return (undefined *)0x0;
    }
    break;
  case 0x42d:
    GetWindowRect(pHVar21,&local_38);
    if (param_3 == (HWND)0x0) {
      param_3 = (HWND)((((local_38.bottom - puVar13[0x1d]) - local_38.top) + -1) /
                      (int)puVar13[0x5b]);
    }
    SetWindowPos(pHVar21,(HWND)0x0,0,0,local_38.right - local_38.left,
                 puVar13[0x5b] * (int)param_3 + 1 + puVar13[0x1d],0x16);
  case 0x437:
    if (param_4 != (RECT *)0x0) {
      bVar7 = false;
      if ((puVar13[0x35] != param_4[1].top) || (param_4->top != -1)) {
        puVar13[0x34] = param_4[1].left;
        puVar13[0x35] = param_4[1].top;
        puVar13[0x36] = param_4[1].right;
        puVar13[0xd] = param_4->top;
        puVar13[0x37] = 1;
        bVar7 = true;
      }
      if ((param_4->left & 1) != 0) {
        puVar13[0x58] = puVar13[0x58] & 0xfffff7ff;
      }
      if ((param_4->left & 2) != 0) {
        puVar13[0x58] = puVar13[0x58] | 0x800;
      }
      if ((param_4->left & 4) != 0) {
        puVar13[0x58] = puVar13[0x58] | 0x100;
      }
      if ((param_4->left & 8) != 0) {
        puVar13[0x58] = puVar13[0x58] | 0x2000;
      }
      if (!bVar7) {
        FUN_0114f350(puVar13);
        FUN_011523e0(pHVar21,puVar13[0x70],puVar13[0x18],puVar13);
        FUN_0114f410(puVar13);
      }
      InvalidateRect(pHVar21,(RECT *)0x0,1);
      param_4->right = puVar13[0x1c];
      param_4->bottom = puVar13[0x1d];
      param_4->top = puVar13[0xd];
      return (undefined *)0x0;
    }
    break;
  case 0x42e:
    puVar13[0x46] = param_4;
    return (undefined *)0x0;
  case 0x42f:
    FUN_0114f020(puVar13,1);
    return (undefined *)0x0;
  case 0x430:
    FUN_0114efb0(puVar13);
    return (undefined *)0x0;
  case 0x431:
    uVar15 = (uint)param_4 & 0xffff;
    if (sVar23 == -1) {
      uVar15 = 0xffff;
    }
    FUN_0114edf0(puVar13,param_3,uVar15,(uint)param_4 >> 0x10);
    return (undefined *)0x0;
  case 0x432:
    param_1 = (undefined4 *)0x0;
    if (param_4 != (RECT *)0x0) {
      puVar11 = (undefined *)
                (*(code *)puVar13[0x82])(puVar13 + 0x72,param_4->left,param_4->top,param_4[2].top);
      return puVar11;
    }
    break;
  case 0x433:
    iVar25 = FUN_0114e760(puVar13,param_3,param_4);
    uVar15 = FUN_0114e7d0(puVar13,param_3,param_4);
    return (undefined *)(uVar15 & 0xffff | iVar25 << 0x10);
  case 0x435:
    return (undefined *)puVar13[0x59];
  case 0x436:
    puVar13[0x59] = puVar13[0x59] & 0xffff0000 | (uint)param_3 & 0xffff;
    InvalidateRect(pHVar21,(RECT *)0x0,1);
    return (undefined *)0x0;
  case 0x438:
    if (param_3 != (HWND)0x0) {
      if (puVar13[1] == 1) {
        FUN_0114efb0(puVar13);
      }
      puVar13[1] = 3;
      return (undefined *)0x0;
    }
LAB_0115159a:
    puVar13[1] = 0;
    InvalidateRect(pHVar21,(RECT *)0x0,1);
    return (undefined *)param_1;
  case 0x439:
    iVar25 = FUN_0114e8b0(puVar13,param_4->left,&local_38);
    if (iVar25 == 0) {
      local_38.top = puVar13[0x1f];
      local_38.bottom = local_38.top;
    }
    iVar25 = FUN_0114e800(puVar13,param_4->top,&local_38);
    if (iVar25 == 0) {
      local_38.left = puVar13[0x1e];
      local_38.right = local_38.left;
    }
    iVar25 = FUN_0114e8b0(puVar13,param_4->right,&local_48);
    if (iVar25 == 0) {
      local_48.top = puVar13[0x1f];
      local_48.bottom = local_48.top;
    }
    iVar25 = FUN_0114e800(puVar13,param_4->bottom,&local_48);
    if (iVar25 == 0) {
      local_48.left = puVar13[0x1e];
      local_48.right = local_48.left;
    }
    UnionRect(&local_28,&local_38,&local_48);
    InvalidateRect(pHVar21,&local_28,1);
    if (param_3 != (HWND)0x0) {
      UpdateWindow(pHVar21);
      return (undefined *)0x0;
    }
    break;
  case 0x43a:
    uVar15 = (uint)param_4 & 0xffff;
    if (sVar23 == -1) {
      uVar15 = 0xffff;
    }
    if (param_3 < (HWND)0xff00) {
      if ((HWND)puVar13[0x17] <= param_3) {
        param_3 = (HWND)puVar13[0x17];
      }
    }
    else if ((param_3 != (HWND)0xffff) || ((puVar13[0x59] & 0x100) == 0)) {
      param_3 = (HWND)0x0;
    }
    if (uVar15 < 0xff00) {
      if ((uint)puVar13[0x18] <= uVar15) {
        uVar15 = puVar13[0x18];
      }
    }
    else if ((uVar15 != 0xffff) || ((puVar13[0x59] & 0x200) == 0)) {
      FUN_0114f9b0(puVar13,param_3,0);
      return (undefined *)0x0;
    }
    FUN_0114f9b0(puVar13,param_3,uVar15);
    return (undefined *)0x0;
  case 0x43b:
    puVar13[0x15] = param_4;
    puVar13[0x16] = param_3;
    if (((RECT *)puVar13[0x18] < param_4) && (param_4 != (RECT *)0xffff)) {
      puVar13[0x15] = (RECT *)puVar13[0x18];
    }
    puVar11 = (undefined *)puVar13[0x15];
    InvalidateRect(pHVar21,(RECT *)0x0,1);
    return puVar11;
  case 0x43c:
    puVar13[0x5a] = param_3;
    InvalidateRect(pHVar21,(RECT *)0x0,1);
    return (undefined *)0x0;
  case 0x43d:
    pHVar21 = *(HWND *)puVar13[0x11];
    if (param_3 < pHVar21) {
      return (undefined *)0x0;
    }
    pHVar19 = (HWND)0x0;
    if (pHVar21 != (HWND)0x0) {
      do {
        pHVar19 = (HWND)((int)&pHVar19->unused + 1);
        pLVar14 = *(LONG **)(*(int *)(puVar13[0x11] + 8) + -4 + (int)pHVar19 * 4);
        param_4->left = *pLVar14;
        param_4->top = pLVar14[1];
        param_4->right = pLVar14[2];
        param_4->bottom = pLVar14[3];
        param_4 = param_4 + 1;
      } while (pHVar19 < pHVar21);
    }
    return (undefined *)0x1;
  case 0x43e:
    return *(undefined **)puVar13[0x11];
  case 0x43f:
    param_1 = (undefined4 *)0x0;
    if ((*(byte *)(puVar13 + 0x5a) & 8) == 0) goto LAB_01151a16;
    iVar25 = 0;
    pHVar19 = *(HWND *)puVar13[0x11];
    if (pHVar19 < param_3) {
      uVar15 = 0;
      if (param_3 != pHVar19) {
        do {
          iVar25 = _SfList_AllocAndInsertItem_20(puVar13[0x11],0,0x10,0xffffffff,0);
          if (iVar25 < 0) {
            uVar20 = 0;
            iVar25 = *(int *)puVar13[0x11];
            if (uVar15 == 0) goto LAB_0115193c;
            goto LAB_01151907;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < (uint)((int)param_3 - (int)pHVar19));
      }
LAB_0115198c:
      pHVar19 = *(HWND *)puVar13[0x11];
      if (iVar25 < 0) goto LAB_01151a16;
    }
    else if (param_3 < pHVar19) {
      uVar20 = 0;
      uVar15 = (int)pHVar19 - (int)param_3;
      if (pHVar19 != param_3) {
        do {
          pHVar19 = (HWND)((int)&pHVar19[-1].unused + 3);
          iVar25 = _SfList_DeleteList_16(puVar13[0x11],pHVar19,1,0);
          if (iVar25 < 0) {
            _SfList_DeleteList_16(puVar13[0x11],0,0xffffffff,0);
            puVar13[0x14] = 0;
            break;
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 < uVar15);
      }
      goto LAB_0115198c;
    }
    if (param_3 == pHVar19) {
      pHVar22 = (HWND)0x0;
      if (pHVar19 != (HWND)0x0) {
        do {
          pHVar22 = (HWND)((int)&pHVar22->unused + 1);
          pLVar14 = *(LONG **)(*(int *)(puVar13[0x11] + 8) + -4 + (int)pHVar22 * 4);
          *pLVar14 = param_4->left;
          pLVar14[1] = param_4->top;
          pLVar14[2] = param_4->right;
          pLVar14[3] = param_4->bottom;
          param_4 = param_4 + 1;
        } while (pHVar22 < pHVar19);
      }
      if (param_3 == (HWND)0x0) {
        puVar13[0x14] = 0;
        puVar13[0x12] = puVar13[0xf];
        puVar13[0x13] = puVar13[0x10];
      }
      else {
        puVar12 = (undefined4 *)**(int **)(puVar13[0x11] + 8);
        puVar13[0x14] = puVar12;
        puVar13[0x12] = *puVar12;
        puVar13[0x13] = puVar12[1];
      }
      param_1 = (undefined4 *)0x1;
    }
LAB_01151a16:
    InvalidateRect(pHVar21,(RECT *)0x0,1);
    return (undefined *)param_1;
  case 0x440:
    if (param_4 != (RECT *)0x0) {
      uVar15 = *(uint *)puVar13[0x11];
      puVar12 = (undefined4 *)param_4[1].bottom;
      if (puVar12 == (undefined4 *)0x0) {
        param_4[1].right = uVar15;
        return (undefined *)0x1;
      }
      if ((uint)param_4[1].right <= uVar15) {
        return (undefined *)0x0;
      }
      param_4->left = puVar13[0x32];
      param_4->top = puVar13[0x2e];
      param_4->right = puVar13[0x12];
      param_4->bottom = puVar13[0x13];
      param_4[1].left = puVar13[0xf];
      param_4[1].top = puVar13[0x10];
      uVar20 = 0;
      if (uVar15 == 0) {
        return (undefined *)0x1;
      }
      do {
        uVar20 = uVar20 + 1;
        puVar5 = *(undefined4 **)(*(int *)(puVar13[0x11] + 8) + -4 + uVar20 * 4);
        *puVar12 = *puVar5;
        puVar12[1] = puVar5[1];
        puVar12[2] = puVar5[2];
        puVar12[3] = puVar5[3];
        puVar12 = puVar12 + 4;
      } while (uVar20 < uVar15);
      return (undefined *)0x1;
    }
    break;
  case 0x441:
    if (param_4 != (RECT *)0x0) {
      _SfList_DeleteList_16(puVar13[0x11],0,0xffffffff,0);
      puVar13[0x14] = 0;
      FUN_01151dd0(&local_28,0x20,param_4,0x20);
      uVar15 = puVar13[0x17];
      if (uVar15 < (uint)local_28.left) {
        local_28.left = uVar15;
      }
      puVar11 = (undefined *)puVar13[0x18];
      if (puVar11 < (uint)local_28.top) {
        local_28.top = (LONG)puVar11;
      }
      if (uVar15 < (uint)local_28.right) {
        local_28.right = uVar15;
      }
      if (puVar11 < (uint)local_28.bottom) {
        local_28.bottom = (LONG)puVar11;
      }
      if (uVar15 < local_18) {
        local_18 = uVar15;
      }
      if (puVar11 < local_14) {
        local_14 = puVar11;
      }
      uVar15 = 0;
      if (local_10 != (undefined *)0x0) {
        do {
          FUN_01151dd0(&local_48,0x10,local_c,0x10);
          uVar20 = puVar13[0x17];
          if ((uVar20 < (uint)local_48.left) && (local_48.left != 0xffff)) {
            local_48.left = uVar20;
          }
          uVar6 = puVar13[0x18];
          if ((uVar6 < (uint)local_48.top) && (local_48.top != 0xffff)) {
            local_48.top = uVar6;
          }
          if ((uVar20 < (uint)local_48.right) && (local_48.right != 0xffff)) {
            local_48.right = uVar20;
          }
          if ((uVar6 < (uint)local_48.bottom) && (local_48.bottom != 0xffff)) {
            local_48.bottom = uVar6;
          }
          iVar25 = _SfList_AllocAndInsertItem_20(puVar13[0x11],&local_48,0x10,0xffffffff,0);
          if (iVar25 < 0) {
            return (undefined *)0x0;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < local_10);
        if (iVar25 < 0) {
          return (undefined *)0x0;
        }
      }
      puVar13[0x12] = local_28.right;
      puVar13[0x13] = local_28.bottom;
      FUN_0114e940(puVar13,local_18,local_14,0);
      FUN_0114f7d0(puVar13,local_28.left,local_28.top,0);
      return (undefined *)0x0;
    }
    break;
  case 0x442:
    iVar25 = 0;
    param_1 = (undefined4 *)0x0;
    param_4->top = 0;
    param_4->left = 0;
    if (puVar13[0x37] != 0) {
      FUN_011520e0(puVar13);
    }
    uVar15 = 0;
    if (puVar13[0x18] != 0) {
      do {
        if (-1 < *(short *)(puVar13[0x70] + iVar25)) {
          iVar18 = MulDiv((int)*(short *)(puVar13[0x70] + iVar25),puVar13[0x39],8);
          param_4->left = param_4->left + iVar18;
        }
        uVar15 = uVar15 + 1;
        iVar25 = iVar25 + 0x10;
      } while (uVar15 < (uint)puVar13[0x18]);
    }
    param_4->left = param_4->left + puVar13[0x1c];
    param_4->top = puVar13[0x5b] * puVar13[0x17] + puVar13[0x1d];
    if ((puVar13[0x1c] != 0) || (puVar13[0x1d] != 0)) {
      param_4->left = param_4->left + 4;
      param_4->top = param_4->top + 4;
    }
    iVar25 = param_4->top;
    if ((param_3->unused < param_4->left) && (1 < (uint)puVar13[0x18])) {
      iVar18 = GetSystemMetrics(3);
      iVar25 = iVar25 + iVar18;
    }
    if ((param_3[1].unused < iVar25) && (1 < (uint)puVar13[0x17])) {
      iVar18 = GetSystemMetrics(2);
      param_1 = (undefined4 *)0x2;
      param_4->left = param_4->left + iVar18;
    }
    if ((param_3->unused < param_4->left) && (1 < (uint)puVar13[0x18])) {
      param_4->top = iVar25;
      return (undefined *)((uint)param_1 | 1);
    }
    break;
  case 0x443:
    if (param_3 == (HWND)0x0) {
      uVar15 = puVar13[0x58] | 0x20000;
    }
    else {
      uVar15 = puVar13[0x58] & 0xfffdffff;
    }
    puVar13[0x58] = uVar15;
    if (param_4 == (RECT *)0x0) {
      puVar13[0x58] = puVar13[0x58] | 0x10000;
      return (undefined *)0x0;
    }
    puVar13[0x58] = puVar13[0x58] & 0xfffeffff;
    return (undefined *)0x0;
  case 0x444:
    FUN_01155cb0(puVar13,1);
    return (undefined *)0x0;
  case 0x445:
    return (undefined *)puVar13[0x5b];
  }
  return (undefined *)param_1;
LAB_01151907:
  iVar25 = iVar25 + -1;
  iVar18 = _SfList_DeleteList_16(puVar13[0x11],iVar25,1,0);
  if (-1 < iVar18) goto code_r0x01151919;
  _SfList_DeleteList_16(puVar13[0x11],0,0xffffffff,0);
  puVar13[0x14] = 0;
LAB_0115193c:
  iVar25 = -0x7ff8fff2;
  goto LAB_0115198c;
code_r0x01151919:
  uVar20 = uVar20 + 1;
  if (uVar15 <= uVar20) goto code_r0x0115191f;
  goto LAB_01151907;
code_r0x0115191f:
  iVar25 = -0x7ff8fff2;
  goto LAB_0115198c;
}


