/* Module: vidcap30.exe
   Function: FUN_00446cc0
   Address: 00446cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00446cc0(int param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  HWND pHVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  int iVar10;
  undefined4 *puVar11;
  uint local_acc;
  undefined4 *local_ac8;
  undefined4 local_ac0 [2];
  undefined1 local_ab8;
  undefined1 local_ab7;
  undefined1 local_ab6;
  undefined1 local_ab5;
  undefined4 local_ab4;
  undefined4 local_ab0;
  undefined4 local_aac;
  undefined4 local_aa8;
  undefined1 local_aa4;
  undefined1 local_aa3;
  undefined1 local_aa2;
  undefined1 local_aa1;
  undefined4 local_aa0;
  undefined4 local_a9c;
  undefined4 local_a98;
  undefined4 local_a94;
  undefined1 local_a90;
  undefined1 local_a8f;
  undefined1 local_a8e;
  undefined1 local_a8d;
  undefined4 local_a8c;
  undefined4 local_a88;
  undefined4 local_a84;
  undefined4 local_a80;
  undefined1 local_a7c;
  undefined1 local_a7b;
  undefined1 local_a7a;
  undefined1 local_a79;
  undefined4 local_a78;
  undefined4 local_a74;
  undefined4 local_a70;
  undefined4 local_a6c;
  undefined1 local_a68;
  undefined1 local_a67;
  undefined1 local_a66;
  undefined1 local_a65;
  undefined4 local_a64;
  undefined4 local_a60;
  undefined4 local_a5c;
  undefined4 local_a58;
  undefined1 local_a54;
  undefined1 local_a53;
  undefined1 local_a52;
  undefined1 local_a51;
  undefined4 local_a50;
  undefined4 local_a4c;
  undefined4 local_a48;
  undefined4 local_a44;
  undefined1 local_a40;
  undefined1 local_a3f;
  undefined1 local_a3e;
  undefined1 local_a3d;
  undefined4 local_a3c;
  undefined4 local_a38;
  undefined4 local_a34;
  undefined4 local_a30;
  undefined1 local_a2c;
  undefined1 local_a2b;
  undefined1 local_a2a;
  undefined1 local_a29;
  undefined4 local_a28;
  undefined4 local_a24;
  tagRECT local_a20;
  uint local_a10 [4];
  int local_a00;
  undefined4 local_600 [192];
  undefined4 local_300 [192];
  
  GetClientRect(*(HWND *)(param_1 + 8),&local_a20);
  *(undefined4 *)(param_1 + 0x1d8) = 0x14;
  *(undefined4 *)(param_1 + 0x80) = 0;
  FUN_0044c780((undefined4 *)(param_1 + 0x80));
  pvVar1 = GlobalAlloc(0x40,0xc);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 == (LPVOID)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00445ad0(param_1);
  }
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  iVar4 = _SfGetMetricBinary_16(DAT_005ba29c,0x460,local_a10,0x410);
  if (iVar4 != 0x410) {
    puVar9 = local_a10;
    for (iVar4 = 0x104; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    piVar5 = (int *)_SfGetUIFontSize_4(100);
    local_a10[3] = *piVar5 * 0x1e;
    local_a00 = local_a20.bottom / 2;
    local_a10[0] = local_a10[0] & 0xffffff9f | 0x94;
  }
  local_a10[1] = *(undefined4 *)(param_1 + 0x84);
  iVar4 = _SfGetMetricBinary_16(DAT_005ba29c,0x462,local_600,0x300);
  if (iVar4 != 0x300) {
    puVar8 = local_600;
    for (iVar4 = 0xc0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
  }
  iVar4 = _SfGetMetricBinary_16(DAT_005ba29c,0x463,local_300,0x300);
  local_ac8 = local_300;
  local_acc = 0;
  do {
    uVar7 = local_acc;
    _SfList_CreateExZ_32((int)&DAT_005bc3dc + local_acc,4,0xffffffff,0xffffffff,2,0,0,0);
    if (iVar4 == 0x300) {
      puVar8 = local_ac8;
      puVar11 = local_ac0;
      for (iVar10 = 0x18; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar11 = puVar11 + 1;
      }
      iVar10 = FUN_00448a10(local_ac0[0]);
      if (iVar10 != 0) {
        puVar8 = local_ac0;
        do {
          if (0x5f < local_acc) break;
          _SfList_AllocAndInsertItem_20
                    (*(undefined4 *)((int)&DAT_005bc3dc + local_acc),iVar10,0x10,0xffffffff,0);
          puVar11 = puVar8 + 1;
          puVar8 = puVar8 + 1;
          iVar10 = FUN_00448a10(*puVar11);
        } while (iVar10 != 0);
      }
    }
    else {
      piVar5 = (int *)((int)&DAT_005b5d28 + local_acc);
      local_acc = *(int *)((int)&PTR_DAT_005b5bc0 + local_acc);
      iVar10 = 0;
      if (0 < *piVar5) {
        do {
          _SfList_AllocAndInsertItem_20
                    (*(undefined4 *)((int)&DAT_005bc3dc + uVar7),local_acc,0x10,0xffffffff,0);
          iVar10 = iVar10 + 1;
          local_acc = local_acc + 0x10;
        } while (iVar10 < *(int *)((int)&DAT_005b5d28 + uVar7));
      }
    }
    local_acc = uVar7 + 4;
    local_ac8 = local_ac8 + 0x18;
    if (0x17 < local_acc) {
      *(uint *)(param_1 + 0x300) = local_a10[0] >> 7 & 1;
      *(uint *)(param_1 + 0x2fc) = local_a10[0] >> 5 & 1;
      pHVar6 = CreateWindowExA(0,"SfKrn_ExplorerEx_Class","",0x50031982,0,0,local_a20.right,
                               local_a20.bottom,*(HWND *)(param_1 + 8),(HMENU)0x1fd,DAT_005ba298,
                               local_a10);
      *(HWND *)(param_1 + 0x88) = pHVar6;
      SendMessageA(pHVar6,0x607,0,(LPARAM)local_600);
      pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x88),4);
      uVar7 = GetWindowLongA(pHVar6,-0x10);
      SetWindowLongA(pHVar6,-0x10,uVar7 | 8);
      SendMessageA(pHVar6,0x1036,0x4000,0x4000);
      if (*(int *)(param_1 + 0x300) != 0) {
        pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x88),4);
        FUN_00420150(pHVar6);
      }
      pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x88),3);
      uVar7 = GetWindowLongA(pHVar6,-0x10);
      SetWindowLongA(pHVar6,-0x10,uVar7 & 0xfffffffd);
      uVar7 = GetWindowLongA(pHVar6,-0x10);
      SetWindowLongA(pHVar6,-0x10,uVar7 | 0x20);
      if (*(int *)(param_1 + 0x88) != 0) {
        local_ab7 = 0x50;
        local_a8f = 0x50;
        local_ac0[0] = 0x38;
        local_ac0[1] = 0x9d88;
        local_ab8 = 4;
        local_ab6 = 0;
        local_ab5 = 0;
        local_ab4 = 0;
        local_ab0 = 0xc51d;
        local_aac = 0;
        local_aa8 = 0;
        local_aa4 = 0;
        local_aa3 = 1;
        local_aa2 = 0;
        local_aa1 = 0;
        local_aa0 = 0;
        local_a9c = 0;
        local_a98 = 0x12;
        local_a94 = 0x9d89;
        local_a90 = 4;
        local_a8e = 0;
        local_a8d = 0;
        local_a8c = 0;
        local_a88 = 0xc572;
        local_a84 = 0;
        local_a80 = 0;
        local_a7c = 0;
        local_a7b = 1;
        local_a7a = 0;
        local_a79 = 0;
        local_a78 = 0;
        local_a74 = 0;
        local_a70 = 0x10;
        local_a6c = 0x9c61;
        local_a68 = 4;
        local_a67 = 0x10;
        local_a66 = 0;
        local_a65 = 0;
        local_a64 = 0;
        local_a60 = 0;
        local_a5c = 0xf;
        local_a58 = 0x9c62;
        local_a54 = 4;
        local_a53 = 0x10;
        local_a52 = 0;
        local_a51 = 0;
        local_a50 = 0;
        local_a4c = 0;
        local_a48 = 0;
        local_a44 = 0;
        local_a40 = 0;
        local_a3f = 1;
        local_a3e = 0;
        local_a3d = 0;
        local_a3c = 0;
        local_a38 = 0;
        local_a34 = 0x44;
        local_a30 = 0x9c67;
        local_a2c = 4;
        local_a2b = 0x90;
        local_a2a = 0;
        local_a29 = 0;
        local_a28 = 0;
        local_a24 = 0;
        uVar3 = FUN_0045b610(*(undefined4 *)(param_1 + 8),0x1fe,DAT_005bb9a4,DAT_005bb9a8,0,
                             local_ac0,8,0);
        *(undefined4 *)(param_1 + 0x194) = uVar3;
        return 1;
      }
      pMem = *(LPCVOID *)(param_1 + 0x84);
      if (pMem != (LPCVOID)0x0) {
        FUN_00445af0();
        pvVar1 = GlobalHandle(pMem);
        GlobalUnlock(pvVar1);
        pvVar1 = GlobalHandle(pMem);
        GlobalFree(pvVar1);
      }
      *(undefined4 *)(param_1 + 0x84) = 0;
      return 0;
    }
  } while( true );
}


