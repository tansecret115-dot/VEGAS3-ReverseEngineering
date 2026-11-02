/* Module: vidcap30.exe
   Function: FUN_00419560
   Address: 00419560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_00419560(HWND param_1,int param_2)

{
  undefined4 *dwNewLong;
  HWND pHVar1;
  HWND pHVar2;
  LPARAM LVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined4 *puVar6;
  LPARAM *pLVar7;
  int *piVar8;
  WPARAM WVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  tagRECT local_63c;
  int local_62c;
  int local_628;
  undefined *local_624;
  int local_620;
  LPCSTR local_61c;
  int local_618;
  WPARAM local_60c;
  CHAR local_608 [260];
  CHAR local_504 [260];
  undefined1 local_400 [1024];
  
  dwNewLong = *(undefined4 **)(param_2 + 0x1c);
  SetWindowLongA(param_1,8,(LONG)dwNewLong);
  _SfSetEditCtrlFont_8(param_1,0);
  dwNewLong[7] = 1;
  if (dwNewLong[6] != 0) {
    uVar13 = 0x8001;
    uVar12 = 0;
    uVar11 = 0;
    pHVar1 = GetParent(param_1);
    _SfWndCenter_16(pHVar1,uVar11,uVar12,uVar13);
    dwNewLong[6] = 0;
  }
  iVar4 = *(int *)(param_2 + 0xc);
  if (iVar4 == 0x45) {
    pHVar1 = GetDlgItem(param_1,0x4b1);
    if (pHVar1 != (HWND)0x0) {
      pHVar2 = GetWindow(pHVar1,3);
      GetWindowRect(pHVar1,&local_63c);
      MapWindowPoints((HWND)0x0,param_1,(LPPOINT)&local_63c,2);
      DestroyWindow(pHVar1);
      pHVar1 = (HWND)_SfCheckList_Create_24
                               (param_1,&local_63c,0x4b1,*dwNewLong,
                                &PTR_s_Enable_DV_device_control_00588c38,0xe);
      if (pHVar1 != (HWND)0x0) {
        SetWindowPos(pHVar1,pHVar2,0,0,0,0,0x13);
      }
      FUN_00419270(param_1,*dwNewLong);
    }
  }
  else if (iVar4 == 0x46) {
    pHVar1 = GetDlgItem(param_1,0x4b1);
    if (pHVar1 != (HWND)0x0) {
      GetWindowRect(pHVar1,&local_63c);
      MapWindowPoints((HWND)0x0,param_1,(LPPOINT)&local_63c,2);
      DestroyWindow(pHVar1);
      _SfViewField_CreateSpread_28
                (param_1,&local_63c,0x4b1,*dwNewLong,&DAT_005b2b00,dwNewLong[0x15],dwNewLong[0x16]);
    }
    pHVar1 = GetDlgItem(param_1,0x4b2);
    if (pHVar1 != (HWND)0x0) {
      SetWindowTextA(pHVar1,"");
    }
  }
  else if (iVar4 == 0x4d0) {
    pHVar1 = GetDlgItem(param_1,0x4d1);
    SendMessageA(pHVar1,0x1036,0,0x4004);
    GetWindowsDirectoryA(local_504,0x104);
    SendMessageA(pHVar1,0x1003,1,DAT_005bb9d0);
    GetWindowRect(pHVar1,&local_63c);
    ppuVar5 = &PTR_DAT_00588f98;
    piVar8 = &local_628;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar8 = 0;
      piVar8 = piVar8 + 1;
    }
    local_628 = 0x27;
    WVar9 = 0;
    do {
      local_61c = *ppuVar5;
      local_624 = ppuVar5[1];
      local_618 = lstrlenA(local_61c);
      local_62c = local_63c.right - local_63c.left;
      local_620 = ftol();
      local_620 = local_620 + -1;
      local_60c = WVar9;
      SendMessageA(pHVar1,0x101b,WVar9,(LPARAM)&local_628);
      ppuVar5 = ppuVar5 + 3;
      WVar9 = WVar9 + 1;
    } while (ppuVar5 < (undefined **)0x588fbc);
    uVar11 = FUN_0043df30();
    FUN_00423d10(uVar11,local_608,0x104);
    pHVar1 = GetDlgItem(param_1,0x4f1);
    SetWindowTextA(pHVar1,local_608);
  }
  else {
    if (iVar4 == 0x195) {
      pHVar1 = GetDlgItem(param_1,0x4b1);
      if (pHVar1 != (HWND)0x0) {
        pHVar2 = GetWindow(pHVar1,3);
        GetWindowRect(pHVar1,&local_63c);
        MapWindowPoints((HWND)0x0,param_1,(LPPOINT)&local_63c,2);
        DestroyWindow(pHVar1);
        pHVar1 = (HWND)_SfCheckList_Create_24
                                 (param_1,&local_63c,0x4b1,*dwNewLong,
                                  &PTR_s_Enable_DV_scene_detection_00588d88,0xb);
        if (pHVar1 != (HWND)0x0) {
          SetWindowPos(pHVar1,pHVar2,0,0,0,0,0x13);
        }
      }
      pHVar1 = GetDlgItem(param_1,0x488);
      pcVar10 = SendMessageA_exref;
      puVar6 = &DAT_00588ec0;
      do {
        uVar11 = puVar6[3];
        uVar12 = puVar6[2];
        uVar13 = _SfGetString_8(DAT_005ba2a0,*puVar6);
        SfPrintF(local_400,uVar13,uVar12,uVar11);
        SendMessageA(pHVar1,0x143,0,(LPARAM)local_400);
        puVar6 = puVar6 + 4;
      } while (puVar6 < &DAT_00588f30);
      pHVar1 = GetDlgItem(param_1,0x4b4);
      puVar6 = &DAT_00588f30;
      do {
        uVar11 = puVar6[1];
        uVar12 = _SfGetString_8(DAT_005ba2a0,*puVar6);
        SfPrintF(local_400,uVar12,uVar11);
        SendMessageA(pHVar1,0x143,0,(LPARAM)local_400);
        puVar6 = puVar6 + 2;
      } while (puVar6 < &DAT_00588f48);
      pHVar1 = GetDlgItem(param_1,0x4cd);
      SendMessageA(pHVar1,0x60e,0,0);
      SendMessageA(pHVar1,0x60f,0,10000);
      uVar11 = 10;
      iVar4 = 0x4cc;
    }
    else {
      if (iVar4 != 0x4d2) {
        if (iVar4 == 0x197) {
          pHVar1 = GetDlgItem(param_1,0x489);
          ppuVar5 = (undefined **)&DAT_00588f48;
          do {
            LVar3 = _SfGetString_8(DAT_005ba2a0,*ppuVar5);
            SendMessageA(pHVar1,0x143,0,LVar3);
            ppuVar5 = ppuVar5 + 4;
          } while (ppuVar5 < &PTR_DAT_00588f98);
          pHVar1 = GetDlgItem(param_1,0x48a);
          WVar9 = 0;
          pLVar7 = &DAT_005b2adc;
          do {
            LVar3 = _SfGetString_8(DAT_005ba2a0,pLVar7[-1]);
            SendMessageA(pHVar1,0x14a,WVar9,LVar3);
            SendMessageA(pHVar1,0x151,WVar9,*pLVar7);
            pLVar7 = pLVar7 + 2;
            WVar9 = WVar9 + 1;
          } while ((int)pLVar7 < 0x5b2b04);
        }
        goto LAB_00419aa1;
      }
      pHVar1 = GetDlgItem(param_1,0x4b1);
      if (pHVar1 != (HWND)0x0) {
        pHVar2 = GetWindow(pHVar1,3);
        GetWindowRect(pHVar1,&local_63c);
        MapWindowPoints((HWND)0x0,param_1,(LPPOINT)&local_63c,2);
        DestroyWindow(pHVar1);
        pHVar1 = (HWND)_SfCheckList_Create_24
                                 (param_1,&local_63c,0x4b1,*dwNewLong,
                                  &PTR_s_Enable_DV_start_frame_verificati_00588e90,2);
        if (pHVar1 != (HWND)0x0) {
          SetWindowPos(pHVar1,pHVar2,0,0,0,0,0x13);
        }
      }
      pHVar1 = GetDlgItem(param_1,0x517);
      pcVar10 = SendMessageA_exref;
      SendMessageA(pHVar1,0x60e,0,0);
      SendMessageA(pHVar1,0x60f,0,10000);
      uVar11 = 5;
      iVar4 = 0x518;
    }
    pHVar2 = GetDlgItem(param_1,iVar4);
    (*pcVar10)(pHVar1,0x624,pHVar2,uVar11);
  }
LAB_00419aa1:
  dwNewLong[7] = 0;
  return dwNewLong;
}


