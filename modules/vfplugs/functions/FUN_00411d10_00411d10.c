/* Module: vfplugs.dll
   Function: FUN_00411d10
   Address: 00411d10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00411d10(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  LRESULT LVar3;
  HGLOBAL pvVar4;
  wchar_t *_Str1;
  WPARAM WVar5;
  int iVar6;
  LPARAM LVar7;
  int iVar8;
  UINT Msg;
  int **lParam;
  WPARAM WStack_150;
  int *piStack_144;
  char acStack_140 [8];
  int *local_138;
  undefined4 uStack_134;
  undefined1 *puStack_130;
  int iStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  uchar auStack_118 [276];
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_138 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00486aa0,&local_138);
  }
  (**(code **)(*local_138 + 0x20))(local_138,param_1 + 0x4c,0x2c0);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x490);
  if (pHVar2 != (HWND)0x0) {
    acStack_140[0] = '\0';
    acStack_140[1] = '\0';
    acStack_140[2] = '\0';
    acStack_140[3] = '\0';
    acStack_140[4] = -0x50;
    acStack_140[5] = '\x04';
    acStack_140[6] = '\0';
    acStack_140[7] = '\0';
    LVar3 = SendMessageA(pHVar2,0x45f,(WPARAM)acStack_140,0);
    iVar8 = LVar3 + 1;
    if (((*(int *)(param_1 + 0x310) == *(int *)(param_1 + 0x304)) &&
        (iVar8 == *(int *)(param_1 + 0x310))) && (iVar8 != 0)) {
      pvVar4 = GlobalAlloc(0x42,LVar3 + 3 + iVar8);
      _Str1 = GlobalLock(pvVar4);
      iStack_12c = iVar8 * 2;
      iStack_128 = 0;
      uStack_124 = 0x4b0;
      uStack_120 = 0;
      uStack_11c = 0;
      SendMessageA(pHVar2,0x45e,(WPARAM)&iStack_12c,(LPARAM)_Str1);
      iVar8 = wcscmp(_Str1,*(wchar_t **)(param_1 + 0x308));
      if (_Str1 != (wchar_t *)0x0) {
        pvVar4 = GlobalHandle(_Str1);
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle(_Str1);
        GlobalFree(pvVar4);
      }
      if (iVar8 == 0) goto LAB_00411eb5;
    }
    if (*(int *)(param_1 + 0x308) != 0) {
      local_138 = (int *)0x0;
      iStack_128 = *(int *)(param_1 + 0x304) << 1;
      puStack_130 = (undefined1 *)0x0;
      uStack_124 = 0;
      if (iStack_128 < 1) {
        WVar5 = 0;
        lParam = (int **)0x0;
        Msg = 0xc;
      }
      else {
        lParam = &local_138;
        local_138 = &iStack_12c;
        WVar5 = 0x11;
        puStack_130 = &LAB_00412540;
        Msg = 0x449;
      }
      uStack_134 = 0;
      iStack_12c = *(int *)(param_1 + 0x308);
      SendMessageA(pHVar2,Msg,WVar5,(LPARAM)lParam);
      SendMessageA(pHVar2,0xb9,0,0);
    }
  }
LAB_00411eb5:
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x4a8);
  if (pHVar2 != (HWND)0x0) {
    if (*(int **)(param_1 + 0x30c) == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = **(int **)(param_1 + 0x30c);
    }
    WVar5 = SendMessageA(pHVar2,0x147,0,0);
    if (0 < iVar8) {
      if (WVar5 != 0xffffffff) {
        LVar3 = SendMessageA(pHVar2,0x150,WVar5,0);
        iVar6 = lstrcmpA((LPCSTR)(*(int *)(*(int *)(param_1 + 0x30c) + 4) * LVar3 + 0x1c +
                                 *(int *)(*(int *)(param_1 + 0x30c) + 8)),(LPCSTR)(param_1 + 0x68));
        if (iVar6 == 0) goto LAB_0041201a;
      }
      WStack_150 = 0;
      if (0 < iVar8) {
        do {
          LVar3 = SendMessageA(pHVar2,0x150,WStack_150,0);
          iVar6 = lstrcmpA((LPCSTR)(*(int *)(*(int *)(param_1 + 0x30c) + 4) * LVar3 + 0x1c +
                                   *(int *)(*(int *)(param_1 + 0x30c) + 8)),(LPCSTR)(param_1 + 0x68)
                          );
          if (iVar6 == 0) goto LAB_00412012;
          WStack_150 = WStack_150 + 1;
        } while ((int)WStack_150 < iVar8);
      }
      acStack_140[4] = s_Arial_00487eb8[4];
      acStack_140[5] = s_Arial_00487eb8[5];
      acStack_140[0] = s_Arial_00487eb8[0];
      acStack_140[1] = s_Arial_00487eb8[1];
      acStack_140[2] = s_Arial_00487eb8[2];
      acStack_140[3] = s_Arial_00487eb8[3];
      WStack_150 = 0;
      if (0 < iVar8) {
        do {
          LVar3 = SendMessageA(pHVar2,0x150,WStack_150,0);
          iVar6 = lstrcmpA((LPCSTR)(*(int *)(*(int *)(param_1 + 0x30c) + 4) * LVar3 + 0x1c +
                                   *(int *)(*(int *)(param_1 + 0x30c) + 8)),acStack_140);
          if (iVar6 == 0) goto LAB_00412012;
          WStack_150 = WStack_150 + 1;
        } while ((int)WStack_150 < iVar8);
      }
      WStack_150 = 0;
LAB_00412012:
      SendMessageA(pHVar2,0x14e,WStack_150,0);
    }
  }
LAB_0041201a:
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x51f);
  if (pHVar2 != (HWND)0x0) {
    SendMessageA(pHVar2,0x703,0,param_1 + 0xa0);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x579);
  if (pHVar2 != (HWND)0x0) {
    SendMessageA(pHVar2,0x703,0,param_1 + 0x90);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x4b6);
  if (pHVar2 != (HWND)0x0) {
    SetDlgItemInt(*(HWND *)(param_1 + 0x30),0x4b6,*(UINT *)(param_1 + 0x4c),1);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x4a9);
  if (pHVar2 != (HWND)0x0) {
    SendMessageA(pHVar2,0x14e,
                 (uint)(*(int *)(param_1 + 0x5c) == 700) |
                 -(uint)(*(char *)(param_1 + 0x60) != '\0') & 2,0);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x51c);
  if (pHVar2 != (HWND)0x0) {
    SendMessageA(pHVar2,0x14e,*(WPARAM *)(param_1 + 0x88),0);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x51b);
  if (pHVar2 != (HWND)0x0) {
    SendMessageA(pHVar2,0x14e,*(WPARAM *)(param_1 + 0x8c),0);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x518);
  if (pHVar2 != (HWND)0x0) {
    LVar7 = ftol();
    SendMessageA(pHVar2,0x610,1,LVar7);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x519);
  if (pHVar2 != (HWND)0x0) {
    LVar7 = ftol();
    SendMessageA(pHVar2,0x610,1,LVar7);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x516);
  if (pHVar2 != (HWND)0x0) {
    FUN_0042a040(auStack_118,"%.2f");
    FUN_0042ba00(pHVar2,auStack_118);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x517);
  if (pHVar2 != (HWND)0x0) {
    FUN_0042a040(auStack_118,"%.2f");
    FUN_0042ba00(pHVar2,auStack_118);
  }
  WVar5 = *(WPARAM *)(param_1 + 0xb8);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5dc);
  if (pHVar2 != (HWND)0x0) {
    SendMessageA(pHVar2,0xf1,WVar5,0);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5e1);
  if (pHVar2 != (HWND)0x0) {
    LVar7 = ftol();
    SendMessageA(pHVar2,0x610,1,LVar7);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5e3);
  if (pHVar2 != (HWND)0x0) {
    LVar7 = ftol();
    SendMessageA(pHVar2,0x610,1,LVar7);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5e4);
  if (pHVar2 != (HWND)0x0) {
    LVar7 = ftol();
    SendMessageA(pHVar2,0x610,1,LVar7);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5e5);
  if (pHVar2 != (HWND)0x0) {
    SendMessageA(pHVar2,0x703,0,param_1 + 0xec);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5e0);
  if (pHVar2 != (HWND)0x0) {
    FUN_0042a040(auStack_118,"%.2f");
    FUN_0042ba00(pHVar2,auStack_118);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5df);
  if (pHVar2 != (HWND)0x0) {
    FUN_0042a040(auStack_118,"%.2f");
    FUN_0042ba00(pHVar2,auStack_118);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5e2);
  if (pHVar2 != (HWND)0x0) {
    FUN_0042a040(auStack_118,"%.2f");
    FUN_0042ba00(pHVar2,auStack_118);
  }
  WVar5 = *(WPARAM *)(param_1 + 0x10c);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x645);
  if (pHVar2 != (HWND)0x0) {
    SendMessageA(pHVar2,0xf1,WVar5,0);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x643);
  if (pHVar2 != (HWND)0x0) {
    LVar7 = ftol();
    SendMessageA(pHVar2,0x610,1,LVar7);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x642);
  if (pHVar2 != (HWND)0x0) {
    LVar7 = ftol();
    SendMessageA(pHVar2,0x610,1,LVar7);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x644);
  if (pHVar2 != (HWND)0x0) {
    SendMessageA(pHVar2,0x703,0,param_1 + 0x118);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x641);
  if (pHVar2 != (HWND)0x0) {
    FUN_0042a040(auStack_118,"%.2f");
    FUN_0042ba00(pHVar2,auStack_118);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x640);
  if (pHVar2 != (HWND)0x0) {
    FUN_0042a040(auStack_118,"%.2f");
    FUN_0042ba00(pHVar2,auStack_118);
  }
  if (piStack_144 != (int *)0x0) {
    (**(code **)(*piStack_144 + 8))();
  }
  return;
}


