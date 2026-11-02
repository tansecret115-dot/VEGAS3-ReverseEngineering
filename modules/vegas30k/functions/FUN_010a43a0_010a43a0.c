/* Module: vegas30k.dll
   Function: FUN_010a43a0
   Address: 010a43a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010a43a0(HWND param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  LONG LVar4;
  int iVar5;
  int iVar6;
  HCURSOR pHVar7;
  HDC hDC;
  HGLOBAL pvVar8;
  LPVOID pvVar9;
  HCURSOR pHVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 unaff_EBX;
  undefined4 uVar13;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 local_8;
  undefined4 local_4;
  
  LVar4 = GetWindowLongA(param_1,0);
  uVar13 = param_4;
  uVar3 = param_3;
  if (*(int *)(LVar4 + 0x60) != 0) {
    MessageBeep(0);
    return;
  }
  local_8 = param_3;
  local_4 = param_4;
  SetFocus(param_1);
  iVar5 = FUN_010a37d0(LVar4,&local_8);
  if (iVar5 == -1) {
    if (param_2 != 0) {
      return;
    }
    if ((*(int *)(LVar4 + 0x18) != 0) && (iVar6 = FUN_010a4690(LVar4,local_8,local_4), iVar6 != 0))
    {
      *(undefined4 *)(LVar4 + 0x1c) = 1;
      *(undefined4 *)(LVar4 + 0x44) = 0xffffffff;
      *(int *)(LVar4 + 0x24) = *(int *)(LVar4 + 0xa0) + -1;
      SetCapture(param_1);
      pHVar7 = (HCURSOR)_SfGetUICursor_4(0x7f84);
      SetCursor(pHVar7);
      return;
    }
    iVar6 = FUN_010a4720(LVar4,local_8,local_4,&param_2);
    if (iVar6 == 0) {
      *(undefined4 *)(LVar4 + 0x3c) = uVar3;
      *(undefined4 *)(LVar4 + 0x34) = 0xffffffff;
      *(undefined4 *)(LVar4 + 0x38) = 0xffffffff;
      *(undefined4 *)(LVar4 + 0x44) = 0xffffffff;
      *(undefined4 *)(LVar4 + 0x40) = uVar13;
      *(undefined4 *)(LVar4 + 0x4c) = 1;
      SetCapture(param_1);
      return;
    }
    if (*(int *)(LVar4 + 0x98) != *(int *)(LVar4 + 0x9c)) {
      iVar5 = FUN_010a3fd0(LVar4,uVar3,uVar13);
      if (iVar5 == -1) {
        return;
      }
      FUN_010a44e4(unaff_ESI,unaff_EBP,unaff_EBX);
      return;
    }
    hDC = GetDC(param_1);
    uVar13 = param_4;
    if (hDC != (HDC)0x0) {
      FUN_010a38d0(LVar4,hDC,param_2,param_2 + 1);
      *(int *)(LVar4 + 0x34) = param_2;
      *(int *)(LVar4 + 0x38) = param_2 + 1;
      FUN_010a38d0(LVar4,hDC,param_2,param_2 + 1);
      iVar5 = param_2;
      *(undefined4 *)(LVar4 + 0x58) = 1;
      ReleaseDC(param_1,hDC);
      uVar13 = param_4;
    }
  }
  else if (param_2 != 0) {
    FUN_010a41e0(LVar4,iVar5);
    if (*(HWND *)(LVar4 + 0x6c) == (HWND)0x0) {
      return;
    }
    PostMessageA(*(HWND *)(LVar4 + 0x6c),0x612,0,(int)(short)iVar5);
    return;
  }
  if ((iVar5 < *(int *)(LVar4 + 0x34)) || (*(int *)(LVar4 + 0x38) < iVar5)) {
    iVar6 = FUN_010a4160(LVar4,iVar5,0);
    if (iVar6 != 0) {
      MessageBeep(0);
      return;
    }
    *(int *)(LVar4 + 0x24) = iVar5;
    pvVar8 = GlobalAlloc(0x42,8);
    puVar11 = GlobalLock(pvVar8);
    *(undefined4 **)(LVar4 + 0x28) = puVar11;
    if (puVar11 != (undefined4 *)0x0) {
      iVar6 = *(int *)(LVar4 + 0xb4);
      *puVar11 = *(undefined4 *)(iVar6 + iVar5 * 8);
      puVar11[1] = *(undefined4 *)(iVar6 + 4 + iVar5 * 8);
      *(undefined4 *)(LVar4 + 0x2c) = 1;
    }
    SetCapture(param_1);
    pHVar7 = (HCURSOR)_SfGetUICursor_4(4);
    pHVar10 = GetCursor();
    if (pHVar10 != pHVar7) {
      SetCursor(pHVar7);
    }
  }
  else {
    *(int *)(LVar4 + 0x24) = iVar5;
    iVar5 = (*(int *)(LVar4 + 0x38) - *(int *)(LVar4 + 0x34)) + 1;
    *(undefined4 *)(LVar4 + 0x3c) = uVar3;
    *(undefined4 *)(LVar4 + 0x40) = uVar13;
    *(undefined4 *)(LVar4 + 0x50) = 1;
    pvVar8 = GlobalAlloc(0x42,iVar5 * 8);
    pvVar9 = GlobalLock(pvVar8);
    *(LPVOID *)(LVar4 + 0x28) = pvVar9;
    if (pvVar9 != (LPVOID)0x0) {
      iVar6 = 0;
      if (0 < iVar5) {
        do {
          iVar1 = *(int *)(LVar4 + 0xb4);
          iVar2 = *(int *)(LVar4 + 0x28);
          iVar12 = *(int *)(LVar4 + 0x34) + iVar6;
          iVar6 = iVar6 + 1;
          *(undefined4 *)(iVar2 + -8 + iVar6 * 8) = *(undefined4 *)(iVar1 + iVar12 * 8);
          *(undefined4 *)(iVar2 + -4 + iVar6 * 8) = *(undefined4 *)(iVar1 + 4 + iVar12 * 8);
        } while (iVar6 < iVar5);
      }
      *(int *)(LVar4 + 0x2c) = iVar5;
    }
    SetCapture(param_1);
    pHVar7 = (HCURSOR)_SfGetUICursor_4(0x7f86);
    pHVar10 = GetCursor();
    if (pHVar10 != pHVar7) {
      SetCursor(pHVar7);
      return;
    }
  }
  return;
}


