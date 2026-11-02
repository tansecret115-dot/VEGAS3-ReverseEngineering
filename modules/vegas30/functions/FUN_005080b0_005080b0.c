/* Module: vegas30.exe
   Function: FUN_005080b0
   Address: 005080b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005080b0(HWND param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  LONG LVar5;
  HWND pHVar6;
  HGDIOBJ wParam;
  HGLOBAL pvVar7;
  LPVOID pvVar8;
  int iVar9;
  undefined **ppuVar10;
  int iVar11;
  undefined **ppuVar12;
  undefined4 *puVar13;
  UINT Msg;
  undefined4 uVar14;
  LPARAM LVar15;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (param_2 == 2) {
    uVar1 = 0;
    do {
      pvVar7 = GlobalHandle(*(LPCVOID *)(uVar1 + (int)DAT_0064e51c));
      GlobalUnlock(pvVar7);
      pvVar7 = GlobalHandle(*(LPCVOID *)(uVar1 + (int)DAT_0064e51c));
      GlobalFree(pvVar7);
      uVar1 = uVar1 + 4;
    } while (uVar1 < 0x28);
    pvVar7 = GlobalHandle(DAT_0064e51c);
    GlobalUnlock(pvVar7);
    pvVar7 = GlobalHandle(DAT_0064e51c);
    GlobalFree(pvVar7);
    DAT_0064e51c = (LPCVOID)0x0;
    return 1;
  }
  if (param_2 == 0x110) {
    pHVar6 = GetDlgItem(param_1,0x438);
    FUN_00508480(pHVar6,&local_10);
    DestroyWindow(pHVar6);
    pHVar6 = CreateWindowExA(0x200,"msctls_hotkey32","",0x50010000,local_10,local_c,
                             local_8 - local_10,local_4 - local_c,param_1,(HMENU)&DAT_00000438,
                             DAT_006471fc,(LPVOID)0x0);
    LVar15 = 0;
    wParam = GetStockObject(0xc);
    SendMessageA(pHVar6,0x30,(WPARAM)wParam,LVar15);
    pHVar6 = GetDlgItem(param_1,0x434);
    ppuVar12 = (undefined **)&DAT_00643534;
    do {
      SendMessageA(pHVar6,0x143,0,(LPARAM)ppuVar12);
      ppuVar12 = ppuVar12 + 0x11;
    } while (ppuVar12 < &PTR_s_FileNew_006437dc);
    SendMessageA(pHVar6,0x14e,0,0);
    pvVar7 = GlobalAlloc(0x42,0x28);
    DAT_0064e51c = GlobalLock(pvVar7);
    iVar11 = 0;
    ppuVar12 = &PTR_DAT_00643530;
    do {
      pvVar7 = GlobalAlloc(2,4000);
      pvVar8 = GlobalLock(pvVar7);
      ppuVar10 = ppuVar12 + 0x11;
      *(LPVOID *)((int)DAT_0064e51c + iVar11) = pvVar8;
      puVar4 = (undefined4 *)((int)DAT_0064e51c + iVar11);
      iVar11 = iVar11 + 4;
      puVar13 = (undefined4 *)*ppuVar12;
      puVar4 = (undefined4 *)*puVar4;
      for (iVar9 = 1000; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar4 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar4 = puVar4 + 1;
      }
      ppuVar12 = ppuVar10;
    } while (ppuVar10 < &DAT_006437d8);
    FUN_00506fb0(param_1,pHVar6);
    PostMessageA(param_1,0x28,(WPARAM)pHVar6,1);
    return 1;
  }
  if (param_2 != 0x111) {
switchD_005080f8_caseD_436:
    return 0;
  }
  uVar1 = param_3 >> 0x10;
  switch(param_3 & 0xffff) {
  case 0x434:
    if (uVar1 == 1) {
      FUN_00506fb0(param_1,param_4);
      return 1;
    }
    return 0;
  case 0x435:
    if (uVar1 == 1) {
      FUN_00507060(param_1,param_4);
      return 1;
    }
    return 0;
  default:
    goto switchD_005080f8_caseD_436;
  case 0x437:
    if (uVar1 == 1) {
      FUN_005076e0(param_1,param_4);
      return 1;
    }
    return 0;
  case 0x439:
    if (uVar1 != 0) {
      return 0;
    }
    FUN_00507770(param_1);
    break;
  case 0x43a:
    if (uVar1 != 0) {
      return 0;
    }
    FUN_005079a0(param_1);
    break;
  case 0x43b:
    if (uVar1 != 0) {
      return 0;
    }
    uVar14 = 0x124;
    uVar2 = _SfGetString_8(DAT_00647204,0x4f29);
    uVar3 = _SfGetString_8(DAT_00647204,0x4f2a);
    iVar11 = _SfMessageBox_16(param_1,uVar3,uVar2,uVar14);
    if (iVar11 == 7) {
      return 1;
    }
    uVar1 = 0;
    do {
      iVar11 = 0;
      puVar4 = (undefined4 *)(*(int *)(uVar1 + (int)DAT_0064e51c) + 10);
      do {
        if (*(short *)((int)puVar4 + -10) == 0) break;
        iVar11 = iVar11 + 1;
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined2 *)puVar4 = *(undefined2 *)((int)puVar4 + -2);
        puVar4 = puVar4 + 5;
      } while (iVar11 < 200);
      uVar1 = uVar1 + 4;
    } while (uVar1 < 0x28);
    pHVar6 = GetDlgItem(param_1,0x435);
    FUN_00507060(param_1,pHVar6);
    iVar11 = 8;
    pHVar6 = GetParent(param_1);
    LVar5 = GetWindowLongA(pHVar6,iVar11);
    LVar15 = 0;
    Msg = 0x468;
    *(undefined4 *)(LVar5 + 8) = 1;
    pHVar6 = GetParent(param_1);
    goto LAB_005081c4;
  }
  iVar11 = 8;
  pHVar6 = GetParent(param_1);
  LVar5 = GetWindowLongA(pHVar6,iVar11);
  LVar15 = 0;
  Msg = 0x468;
  *(undefined4 *)(LVar5 + 8) = 1;
  pHVar6 = GetParent(param_1);
LAB_005081c4:
  SendMessageA(pHVar6,Msg,(WPARAM)param_1,LVar15);
  return 1;
}


