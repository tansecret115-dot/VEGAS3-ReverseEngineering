/* Module: sfppack3.dll
   Function: FUN_5cc50b70
   Address: 5cc50b70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc50b70(HWND param_1,HDC param_2,int param_3,LONG param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  HDC pHVar5;
  int iVar6;
  HCURSOR pHVar7;
  HDC hDC;
  HGLOBAL pvVar8;
  LPVOID pvVar9;
  int iVar10;
  HCURSOR pHVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  LONG LVar15;
  POINT local_8;
  
  puVar4 = (undefined4 *)GetWindowLongA(param_1,0);
  LVar15 = param_4;
  iVar10 = param_3;
  if (puVar4[0x18] != 0) {
    MessageBeep(0);
    return;
  }
  local_8.x = param_3;
  local_8.y = param_4;
  SetFocus(param_1);
  pHVar5 = (HDC)FUN_5cc4ffa0((int)puVar4,&local_8);
  if (pHVar5 == (HDC)0xffffffff) {
    if (param_2 != (HDC)0x0) {
      return;
    }
    if ((puVar4[6] != 0) && (iVar6 = FUN_5cc50e60((int)puVar4,local_8.x,local_8.y), iVar6 != 0)) {
      puVar4[7] = 1;
      puVar4[0x11] = 0xffffffff;
      puVar4[9] = puVar4[0x28] + -1;
      SetCapture(param_1);
      pHVar7 = (HCURSOR)FUN_5cc6b200(0x7f84);
      SetCursor(pHVar7);
      return;
    }
    iVar6 = FUN_5cc50ef0((int)puVar4,local_8.x,local_8.y,(int *)&param_2);
    if (iVar6 == 0) {
      puVar4[0xf] = iVar10;
      puVar4[0xd] = 0xffffffff;
      puVar4[0xe] = 0xffffffff;
      puVar4[0x11] = 0xffffffff;
      puVar4[0x10] = LVar15;
      puVar4[0x13] = 1;
      SetCapture(param_1);
      return;
    }
    if (puVar4[0x26] != puVar4[0x27]) {
      uVar12 = FUN_5cc507a0(puVar4,iVar10,LVar15);
      if (uVar12 == 0xffffffff) {
        return;
      }
      FUN_5cc50cb4();
      return;
    }
    hDC = GetDC(param_1);
    LVar15 = param_4;
    if (hDC != (HDC)0x0) {
      FUN_5cc500a0(puVar4,hDC,(int)param_2,(int)((int)&param_2->unused + 1));
      puVar4[0xd] = param_2;
      puVar1 = (undefined1 *)((int)&param_2->unused + 1);
      puVar4[0xe] = puVar1;
      FUN_5cc500a0(puVar4,hDC,(int)param_2,(int)puVar1);
      pHVar5 = param_2;
      puVar4[0x16] = 1;
      ReleaseDC(param_1,hDC);
      LVar15 = param_4;
    }
  }
  else if (param_2 != (HDC)0x0) {
    FUN_5cc509b0(puVar4,pHVar5);
    if ((HWND)puVar4[0x1b] == (HWND)0x0) {
      return;
    }
    PostMessageA((HWND)puVar4[0x1b],0x612,0,(int)(short)pHVar5);
    return;
  }
  if (((int)pHVar5 < (int)puVar4[0xd]) || ((int)puVar4[0xe] < (int)pHVar5)) {
    iVar10 = FUN_5cc50930((int)puVar4,(int)pHVar5,(uint *)0x0);
    if (iVar10 != 0) {
      MessageBeep(0);
      return;
    }
    puVar4[9] = pHVar5;
    pvVar8 = GlobalAlloc(0x42,8);
    puVar13 = GlobalLock(pvVar8);
    puVar4[10] = puVar13;
    if (puVar13 != (undefined4 *)0x0) {
      iVar10 = puVar4[0x2d];
      *puVar13 = *(undefined4 *)(iVar10 + (int)pHVar5 * 8);
      puVar13[1] = *(undefined4 *)(iVar10 + 4 + (int)pHVar5 * 8);
      puVar4[0xb] = 1;
    }
    SetCapture(param_1);
    pHVar7 = (HCURSOR)FUN_5cc6b200(4);
    pHVar11 = GetCursor();
    if (pHVar11 != pHVar7) {
      SetCursor(pHVar7);
    }
  }
  else {
    puVar4[9] = pHVar5;
    iVar6 = (puVar4[0xe] - puVar4[0xd]) + 1;
    puVar4[0xf] = iVar10;
    puVar4[0x10] = LVar15;
    puVar4[0x14] = 1;
    pvVar8 = GlobalAlloc(0x42,iVar6 * 8);
    pvVar9 = GlobalLock(pvVar8);
    puVar4[10] = pvVar9;
    if (pvVar9 != (LPVOID)0x0) {
      iVar10 = 0;
      if (0 < iVar6) {
        do {
          iVar2 = puVar4[0x2d];
          iVar3 = puVar4[10];
          iVar14 = puVar4[0xd] + iVar10;
          iVar10 = iVar10 + 1;
          *(undefined4 *)(iVar3 + -8 + iVar10 * 8) = *(undefined4 *)(iVar2 + iVar14 * 8);
          *(undefined4 *)(iVar3 + -4 + iVar10 * 8) = *(undefined4 *)(iVar2 + 4 + iVar14 * 8);
        } while (iVar10 < iVar6);
      }
      puVar4[0xb] = iVar6;
    }
    SetCapture(param_1);
    pHVar7 = (HCURSOR)FUN_5cc6b200(0x7f86);
    pHVar11 = GetCursor();
    if (pHVar11 != pHVar7) {
      SetCursor(pHVar7);
      return;
    }
  }
  return;
}


