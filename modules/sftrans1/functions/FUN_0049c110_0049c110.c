/* Module: sftrans1.dll
   Function: FUN_0049c110
   Address: 0049c110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0049c110(int param_1)

{
  undefined4 uVar1;
  HWND pHVar2;
  uint uVar3;
  int iVar4;
  WPARAM WVar5;
  HGLOBAL pvVar6;
  LPVOID pvVar7;
  HWND pHVar8;
  undefined4 *puVar9;
  HIMAGELIST p_Var10;
  HIMAGELIST p_Var11;
  HWND pHVar12;
  UINT UVar13;
  CHAR local_164 [260];
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined4 local_28;
  LPCSTR local_24;
  HWND local_20;
  LPCSTR local_1c;
  int *local_18;
  tagRECT local_14;
  
  puVar9 = (undefined4 *)**(int **)(param_1 + 8);
  local_18 = (int *)0x0;
  if (puVar9 != (undefined4 *)0x0) {
    (**(code **)*puVar9)(puVar9,&DAT_00554c10,&local_18);
  }
  local_20 = *(HWND *)(param_1 + 0x30);
  pHVar2 = GetDlgItem(local_20,0x5b3);
  SendMessageA(pHVar2,0x600,0,0);
  GetDlgItemTextA(local_20,0x5b3,local_164,0x82);
  SendMessageA(pHVar2,0x601,0xa029,0x555a6c);
  SendMessageA(pHVar2,0x601,41000,0x555a74);
  uVar3 = lstrlenA("Sonic Foundry ");
  FUN_00551640();
  local_1c = &stack0xfffffe90;
  FUN_00551640();
  local_24 = &stack0xfffffe90;
  FUN_0049d360(local_1c,local_164,uVar3 + 1);
  local_1c[uVar3] = '\0';
  FUN_0049d360(local_24,"Sonic Foundry ",uVar3 + 1);
  local_24[uVar3] = '\0';
  iVar4 = lstrcmpiA(local_1c,local_24);
  FUN_004c85d0(local_20,0x5b3,local_164 + (~-(uint)(iVar4 != 0) & uVar3));
  *(undefined4 *)(param_1 + 0x80) = 4;
  CheckDlgButton(*(HWND *)(param_1 + 0x30),0x70c,1);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x708);
  if (pHVar2 != (HWND)0x0) {
    WVar5 = SendMessageA(pHVar2,0x143,0,0x563f34);
    SendMessageA(pHVar2,0x151,WVar5,4);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x563f30);
    SendMessageA(pHVar2,0x151,WVar5,0);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x563f28);
    SendMessageA(pHVar2,0x151,WVar5,1);
    WVar5 = SendMessageA(pHVar2,0x143,0,0x563f20);
    SendMessageA(pHVar2,0x151,WVar5,2);
    SendMessageA(pHVar2,0x14e,0,0);
  }
  pvVar6 = GlobalAlloc(0x40,0x14a8);
  pvVar7 = GlobalLock(pvVar6);
  if (pvVar7 == (LPVOID)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00548930();
  }
  *(int *)(param_1 + 0x70) = iVar4;
  if (iVar4 != 0) {
    iVar4 = FUN_00548be0(*(undefined4 *)(param_1 + 0x30),0x70a,0x40010000,0x20000);
    if (iVar4 == 0) {
      pHVar8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x70a);
      GetWindowRect(pHVar8,&local_14);
      MapWindowPoints((HWND)0x0,*(HWND *)(param_1 + 0x30),(LPPOINT)&local_14,2);
      pHVar2 = *(HWND *)(*(int *)(param_1 + 0x70) + 4);
      if (pHVar2 != (HWND)0x0) {
        if (pHVar8 == (HWND)0x0) {
          UVar13 = 0x44;
          pHVar12 = (HWND)0x0;
        }
        else {
          UVar13 = 0x40;
          pHVar12 = pHVar8;
        }
        SetWindowPos(pHVar2,pHVar12,local_14.left,local_14.top,local_14.right - local_14.left,
                     local_14.bottom - local_14.top,UVar13);
      }
      DestroyWindow(pHVar8);
      SetWindowLongA(*(HWND *)(*(int *)(param_1 + 0x70) + 4),-0xc,0x70a);
      uVar1 = DAT_00563e54;
      iVar4 = *(int *)(param_1 + 0x70);
      *(undefined4 *)(iVar4 + 0xa8) = DAT_00563e50;
      *(undefined4 *)(iVar4 + 0xac) = uVar1;
      uVar1 = DAT_00563e54;
      *(undefined4 *)(iVar4 + 0xf0) = DAT_00563e50;
      *(undefined4 *)(iVar4 + 0xf4) = uVar1;
      uVar1 = DAT_00563e5c;
      *(undefined4 *)(iVar4 + 0xb0) = DAT_00563e58;
      *(undefined4 *)(iVar4 + 0xb4) = uVar1;
      uVar1 = DAT_00563e5c;
      *(undefined4 *)(iVar4 + 0xf8) = DAT_00563e58;
      *(undefined4 *)(iVar4 + 0xfc) = uVar1;
      uVar1 = DAT_00563e64;
      *(undefined4 *)(iVar4 + 0xb8) = DAT_00563e60;
      *(undefined4 *)(iVar4 + 0xbc) = uVar1;
      uVar1 = DAT_00563e64;
      *(undefined4 *)(iVar4 + 0x100) = DAT_00563e60;
      *(undefined4 *)(iVar4 + 0x104) = uVar1;
      uVar1 = DAT_00563e6c;
      *(undefined4 *)(iVar4 + 0xc0) = DAT_00563e68;
      *(undefined4 *)(iVar4 + 0xc4) = uVar1;
      uVar1 = DAT_00563e6c;
      *(undefined4 *)(iVar4 + 0x108) = DAT_00563e68;
      *(undefined4 *)(iVar4 + 0x10c) = uVar1;
      uVar1 = DAT_00563e74;
      *(undefined4 *)(iVar4 + 0x128) = DAT_00563e70;
      *(undefined4 *)(iVar4 + 300) = uVar1;
      uVar1 = DAT_00563e7c;
      *(undefined4 *)(iVar4 + 0x130) = DAT_00563e78;
      *(undefined4 *)(iVar4 + 0x134) = uVar1;
      uVar1 = DAT_00563e84;
      *(undefined4 *)(iVar4 + 0x110) = DAT_00563e80;
      *(undefined4 *)(iVar4 + 0x114) = uVar1;
      uVar1 = DAT_00563eb4;
      *(undefined4 *)(iVar4 + 0x118) = DAT_00563eb0;
      *(undefined4 *)(iVar4 + 0x11c) = uVar1;
      uVar1 = DAT_00563ebc;
      *(undefined4 *)(iVar4 + 0x120) = DAT_00563eb8;
      *(undefined4 *)(iVar4 + 0x124) = uVar1;
      *(undefined4 *)(iVar4 + 0x1c8) = DAT_00563ec0;
      *(undefined4 *)(iVar4 + 0x1cc) = DAT_00563eac;
      *(undefined4 *)(iVar4 + 0xe8) = DAT_00563ea8;
      uVar1 = DAT_00563e8c;
      *(undefined4 *)(iVar4 + 200) = DAT_00563e88;
      *(undefined4 *)(iVar4 + 0xcc) = uVar1;
      uVar1 = DAT_00563e94;
      *(undefined4 *)(iVar4 + 0xd0) = DAT_00563e90;
      *(undefined4 *)(iVar4 + 0xd4) = uVar1;
      uVar1 = DAT_00563e9c;
      *(undefined4 *)(iVar4 + 0xd8) = DAT_00563e98;
      *(undefined4 *)(iVar4 + 0xdc) = uVar1;
      uVar1 = DAT_00563ea4;
      *(undefined4 *)(iVar4 + 0xe0) = DAT_00563ea0;
      *(undefined4 *)(iVar4 + 0xe4) = uVar1;
      iVar4 = *(int *)(param_1 + 0x70);
      *(undefined1 **)(iVar4 + 0x1498) = &LAB_0049cd10;
      *(undefined1 **)(iVar4 + 0x149c) = &LAB_0049ce10;
      *(int *)(iVar4 + 0x14a0) = param_1;
    }
  }
  pvVar6 = GlobalAlloc(0x40,0x14);
  puVar9 = GlobalLock(pvVar6);
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    FUN_00546d60();
    *puVar9 = &PTR_FUN_00563f0c;
    puVar9[2] = 0;
    puVar9[4] = 0;
  }
  *(undefined4 **)(param_1 + 0x74) = puVar9;
  if (puVar9 != (undefined4 *)0x0) {
    iVar4 = FUN_0049b720(*(undefined4 *)(param_1 + 0x30),0x70b,0x40000000,0x20000);
    if (iVar4 == 0) {
      pHVar8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x70b);
      GetWindowRect(pHVar8,&local_14);
      MapWindowPoints((HWND)0x0,*(HWND *)(param_1 + 0x30),(LPPOINT)&local_14,2);
      pHVar2 = *(HWND *)(*(int *)(param_1 + 0x74) + 4);
      if (pHVar2 != (HWND)0x0) {
        if (pHVar8 == (HWND)0x0) {
          UVar13 = 0x44;
          pHVar12 = (HWND)0x0;
        }
        else {
          UVar13 = 0x40;
          pHVar12 = pHVar8;
        }
        SetWindowPos(pHVar2,pHVar12,local_14.left,local_14.top,local_14.right - local_14.left,
                     local_14.bottom - local_14.top,UVar13);
      }
      DestroyWindow(pHVar8);
      SetWindowLongA(*(HWND *)(*(int *)(param_1 + 0x74) + 4),-0xc,0x70b);
    }
  }
  pvVar6 = GlobalAlloc(0x40,0xc);
  puVar9 = GlobalLock(pvVar6);
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    FUN_00546fb0();
    *puVar9 = &PTR_FUN_00563ef8;
  }
  *(undefined4 **)(param_1 + 0x78) = puVar9;
  if (puVar9 != (undefined4 *)0x0) {
    local_2c = 0;
    local_54 = 0;
    local_50 = 0;
    local_43 = 0;
    local_42 = 0;
    local_41 = 0;
    local_40 = 0;
    local_60 = 0;
    local_5c = 0x70d;
    local_58 = 4;
    local_57 = 0;
    local_56 = 0;
    local_55 = 0;
    local_4c = 1;
    local_48 = 0x70e;
    local_44 = 4;
    local_3c = 0;
    local_38 = 2;
    local_34 = 0x70f;
    local_30 = 4;
    local_2f = 0;
    local_2e = 0;
    local_2d = 0;
    local_28 = 0;
    p_Var10 = ImageList_LoadImageA(DAT_00577240,(LPCSTR)0xe1,0x16,1,0xff000000,0,0);
    p_Var11 = ImageList_LoadImageA(DAT_00577240,(LPCSTR)0xe2,0x16,1,0xff000000,0,0);
    FUN_00546fe0(*(undefined4 *)(param_1 + 0x30),0x50000b68,0,0x709,&local_60,3,p_Var10,p_Var11,0);
    pHVar8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x709);
    GetWindowRect(pHVar8,&local_14);
    MapWindowPoints((HWND)0x0,*(HWND *)(param_1 + 0x30),(LPPOINT)&local_14,2);
    pHVar2 = *(HWND *)(*(int *)(param_1 + 0x78) + 4);
    if (pHVar2 != (HWND)0x0) {
      if (pHVar8 == (HWND)0x0) {
        UVar13 = 0x44;
        pHVar12 = (HWND)0x0;
      }
      else {
        UVar13 = 0x40;
        pHVar12 = pHVar8;
      }
      SetWindowPos(pHVar2,pHVar12,local_14.left,local_14.top,local_14.right - local_14.left,
                   local_14.bottom - local_14.top,UVar13);
    }
    DestroyWindow(pHVar8);
    SetWindowLongA(*(HWND *)(*(int *)(param_1 + 0x78) + 4),-0xc,0x709);
  }
  FUN_0049bbd0();
  (**(code **)(*local_18 + 0x3c))(local_18,*(undefined4 *)(param_1 + 0x30),1000);
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 8))(local_18);
  }
  return 1;
}


