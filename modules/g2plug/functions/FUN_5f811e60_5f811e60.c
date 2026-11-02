/* Module: g2plug.dll
   Function: FUN_5f811e60
   Address: 5f811e60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f811e60(void *this,HWND param_1)

{
  int iVar1;
  HWND pHVar2;
  WPARAM WVar3;
  WPARAM wParam;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  BOOL BVar7;
  int nIDCheckButton;
  WPARAM local_210;
  WPARAM local_20c;
  WPARAM local_208;
  WPARAM local_204;
  CHAR local_200 [256];
  CHAR local_100 [256];
  
  iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e);
  if (iVar1 != 0) {
    pHVar2 = GetDlgItem(param_1,0x406);
    SendMessageA(pHVar2,0x14b,0,0);
    FUN_5f8172d0(DAT_5f87746c,0x82,local_200,0xff);
    WVar3 = SendMessageA(pHVar2,0x143,0,(LPARAM)local_200);
    SendMessageA(pHVar2,0x151,WVar3,5);
    FUN_5f8172d0(DAT_5f87746c,0x83,local_200,0xff);
    wParam = SendMessageA(pHVar2,0x143,0,(LPARAM)local_200);
    SendMessageA(pHVar2,0x151,wParam,6);
    if ((*(int *)(iVar1 + 0x13c) != 5) && (WVar3 = wParam, *(int *)(iVar1 + 0x13c) != 6)) {
      *(undefined4 *)(iVar1 + 0x13c) = 6;
    }
    SendMessageA(pHVar2,0x14e,WVar3,0);
    if (*(int *)(iVar1 + 0x13c) == 6) {
      BVar7 = 1;
      pHVar2 = GetDlgItem(param_1,0x3f5);
      EnableWindow(pHVar2,BVar7);
    }
    else {
      BVar7 = 0;
      *(undefined4 *)(iVar1 + 0x14c) = 1;
      pHVar2 = GetDlgItem(param_1,0x3f7);
      EnableWindow(pHVar2,BVar7);
      if (*(int *)(iVar1 + 0x13c) < 4) {
        BVar7 = 0;
        *(undefined4 *)(iVar1 + 0x148) = 0xffffffff;
        pHVar2 = GetDlgItem(param_1,0x3f5);
        EnableWindow(pHVar2,BVar7);
      }
      else {
        BVar7 = 1;
        pHVar2 = GetDlgItem(param_1,0x3f5);
        EnableWindow(pHVar2,BVar7);
      }
    }
    uVar4 = FUN_5f812730(0x3ee,*(uint *)(iVar1 + 0x138));
    CheckDlgButton(param_1,0x3ee,(uint)(uVar4 != 0));
    uVar4 = FUN_5f812730(0x3ef,*(uint *)(iVar1 + 0x138));
    CheckDlgButton(param_1,0x3ef,(uint)(uVar4 != 0));
    uVar4 = FUN_5f812730(0x3f0,*(uint *)(iVar1 + 0x138));
    CheckDlgButton(param_1,0x3f0,(uint)(uVar4 != 0));
    uVar4 = FUN_5f812730(0x40b,*(uint *)(iVar1 + 0x138));
    CheckDlgButton(param_1,0x40b,(uint)(uVar4 != 0));
    uVar4 = FUN_5f812730(0x3f3,*(uint *)(iVar1 + 0x138));
    CheckDlgButton(param_1,0x3f3,(uint)(uVar4 != 0));
    uVar4 = FUN_5f812730(0x408,*(uint *)(iVar1 + 0x138));
    CheckDlgButton(param_1,0x408,(uint)(uVar4 != 0));
    uVar4 = FUN_5f812730(0x409,*(uint *)(iVar1 + 0x138));
    CheckDlgButton(param_1,0x409,(uint)(uVar4 != 0));
    uVar4 = FUN_5f812730(0x40a,*(uint *)(iVar1 + 0x138));
    CheckDlgButton(param_1,0x40a,(uint)(uVar4 != 0));
    if (*(int *)(iVar1 + 0x14c) == 1) {
      nIDCheckButton = 0x3f6;
    }
    else {
      nIDCheckButton = 0x3f7;
    }
    CheckRadioButton(param_1,0x3f6,0x3f7,nIDCheckButton);
    pHVar2 = GetDlgItem(param_1,0x3f4);
    if (pHVar2 != (HWND)0x0) {
      SendMessageA(pHVar2,0x14b,0,0);
      local_204 = 0xffffffff;
      local_208 = 0xffffffff;
      local_20c = 0xffffffff;
      local_210 = 0xffffffff;
      if (*(int *)(iVar1 + 0x128) != 0) {
        FUN_5f8172d0(DAT_5f87746c,0x6e,local_200,0xff);
        local_204 = SendMessageA(pHVar2,0x143,0,(LPARAM)local_200);
        SendMessageA(pHVar2,0x151,local_204,0);
        FUN_5f8172d0(DAT_5f87746c,0x6f,local_200,0xff);
        local_208 = SendMessageA(pHVar2,0x143,0,(LPARAM)local_200);
        SendMessageA(pHVar2,0x151,local_208,1);
        FUN_5f8172d0(DAT_5f87746c,0x70,local_200,0xff);
        local_20c = SendMessageA(pHVar2,0x143,0,(LPARAM)local_200);
        SendMessageA(pHVar2,0x151,local_20c,2);
        if (*(int *)(iVar1 + 0x134) != 0) {
          FUN_5f8172d0(DAT_5f87746c,0x71,local_200,0xff);
          local_210 = SendMessageA(pHVar2,0x143,0,(LPARAM)local_200);
          SendMessageA(pHVar2,0x151,local_210,3);
        }
      }
      FUN_5f8172d0(DAT_5f87746c,0x72,local_200,0xff);
      WVar3 = SendMessageA(pHVar2,0x143,0,(LPARAM)local_200);
      SendMessageA(pHVar2,0x151,WVar3,-1);
      if (*(int *)(iVar1 + 0x128) != 0) {
        switch(*(undefined4 *)(iVar1 + 0x140)) {
        case 0:
          WVar3 = local_204;
          break;
        case 1:
          WVar3 = local_208;
          break;
        case 2:
          WVar3 = local_20c;
          break;
        case 3:
          WVar3 = local_210;
          break;
        case 0xffffffff:
        }
      }
      SendMessageA(pHVar2,0x14e,WVar3,0);
    }
    pHVar2 = GetDlgItem(param_1,0x3f5);
    if (pHVar2 != (HWND)0x0) {
      SendMessageA(pHVar2,0x14b,0,0);
      local_210 = 0xffffffff;
      local_20c = 0xffffffff;
      local_208 = 0xffffffff;
      local_204 = 0xffffffff;
      if (*(int *)(iVar1 + 300) != 0) {
        FUN_5f8172d0(DAT_5f87746c,0x73,local_200,0xff);
        local_210 = SendMessageA(pHVar2,0x143,0,(LPARAM)local_200);
        SendMessageA(pHVar2,0x151,local_210,0);
        FUN_5f8172d0(DAT_5f87746c,0x74,local_200,0xff);
        local_20c = SendMessageA(pHVar2,0x143,0,(LPARAM)local_200);
        SendMessageA(pHVar2,0x151,local_20c,1);
        FUN_5f8172d0(DAT_5f87746c,0x75,local_200,0xff);
        local_208 = SendMessageA(pHVar2,0x143,0,(LPARAM)local_200);
        SendMessageA(pHVar2,0x151,local_208,2);
        FUN_5f8172d0(DAT_5f87746c,0x76,local_200,0xff);
        local_204 = SendMessageA(pHVar2,0x143,0,(LPARAM)local_200);
        SendMessageA(pHVar2,0x151,local_204,3);
      }
      FUN_5f8172d0(DAT_5f87746c,0x77,local_200,0xff);
      WVar3 = SendMessageA(pHVar2,0x143,0,(LPARAM)local_200);
      SendMessageA(pHVar2,0x151,WVar3,-1);
      if (*(int *)(iVar1 + 300) != 0) {
        switch(*(undefined4 *)(iVar1 + 0x148)) {
        case 0:
          WVar3 = local_210;
          break;
        case 1:
          WVar3 = local_20c;
          break;
        case 2:
          WVar3 = local_208;
          break;
        case 3:
          WVar3 = local_204;
          break;
        case 0xffffffff:
        }
      }
      SendMessageA(pHVar2,0x14e,WVar3,0);
    }
    pHVar2 = GetDlgItem(param_1,0x3fd);
    if (pHVar2 != (HWND)0x0) {
      SendMessageA(pHVar2,0x14b,0,0);
      FUN_5f8172d0(DAT_5f87746c,0x78,local_100,0xff);
      WVar3 = SendMessageA(pHVar2,0x143,0,(LPARAM)local_100);
      SendMessageA(pHVar2,0x151,WVar3,0);
      FUN_5f8172d0(DAT_5f87746c,0x79,local_100,0xff);
      WVar3 = SendMessageA(pHVar2,0x143,0,(LPARAM)local_100);
      SendMessageA(pHVar2,0x151,WVar3,1);
      FUN_5f8172d0(DAT_5f87746c,0x7a,local_100,0xff);
      WVar3 = SendMessageA(pHVar2,0x143,0,(LPARAM)local_100);
      SendMessageA(pHVar2,0x151,WVar3,2);
      FUN_5f8172d0(DAT_5f87746c,0x7b,local_100,0xff);
      WVar3 = SendMessageA(pHVar2,0x143,0,(LPARAM)local_100);
      SendMessageA(pHVar2,0x151,WVar3,3);
      FUN_5f8172d0(DAT_5f87746c,0x7c,local_100,0xff);
      WVar3 = SendMessageA(pHVar2,0x143,0,(LPARAM)local_100);
      SendMessageA(pHVar2,0x151,WVar3,4);
      FUN_5f8172d0(DAT_5f87746c,0x7d,local_100,0xff);
      WVar3 = SendMessageA(pHVar2,0x143,0,(LPARAM)local_100);
      SendMessageA(pHVar2,0x151,WVar3,5);
      SendMessageA(pHVar2,0x14e,*(WPARAM *)(iVar1 + 0x3e3),0);
    }
    SetDlgItemInt(param_1,0x3fe,*(UINT *)(iVar1 + 999),1);
    SetDlgItemInt(param_1,0x3ff,*(UINT *)(iVar1 + 0x3eb),1);
    if (*(int *)(iVar1 + 300) == 0) {
      BVar7 = 0;
      pHVar2 = GetDlgItem(param_1,0x402);
      EnableWindow(pHVar2,BVar7);
      BVar7 = 0;
      pHVar2 = GetDlgItem(param_1,0x3fd);
      EnableWindow(pHVar2,BVar7);
      uVar4 = 0;
      pcVar6 = EnableWindow_exref;
    }
    else {
      uVar5 = (uint)(*(int *)(iVar1 + 0x148) != -1);
      uVar4 = uVar5;
      pHVar2 = GetDlgItem(param_1,0x402);
      pcVar6 = EnableWindow_exref;
      EnableWindow(pHVar2,uVar4);
      uVar4 = uVar5;
      pHVar2 = GetDlgItem(param_1,0x3fd);
      EnableWindow(pHVar2,uVar4);
      uVar4 = 0;
      if (uVar5 != 0) {
        uVar4 = (uint)(*(int *)(iVar1 + 0x3e3) == 5);
      }
    }
    uVar5 = uVar4;
    pHVar2 = GetDlgItem(param_1,0x400);
    (*pcVar6)(pHVar2,uVar5);
    uVar5 = uVar4;
    pHVar2 = GetDlgItem(param_1,0x3fe);
    (*pcVar6)(pHVar2,uVar5);
    uVar5 = uVar4;
    pHVar2 = GetDlgItem(param_1,0x401);
    (*pcVar6)(pHVar2,uVar5);
    pHVar2 = GetDlgItem(param_1,0x3ff);
    (*pcVar6)(pHVar2,uVar4);
    if (*(int *)(iVar1 + 0x678) != 0) {
      SfRealG2_RestoreTargetData(*(uchar **)(iVar1 + 0x674),*(int *)(iVar1 + 0x678));
    }
    return 0;
  }
  return 0x80070057;
}


