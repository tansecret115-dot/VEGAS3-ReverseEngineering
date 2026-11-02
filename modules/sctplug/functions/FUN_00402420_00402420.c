/* Module: sctplug.dll
   Function: FUN_00402420
   Address: 00402420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00402420(int param_1)

{
  uchar uVar1;
  int iVar2;
  LPCVOID pMem;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  int iVar5;
  HWND pHVar6;
  LRESULT LVar7;
  UINT UVar8;
  WPARAM WVar9;
  LPARAM LVar10;
  uint local_408 [2];
  uchar local_400 [4];
  undefined1 local_3fc;
  undefined1 local_3fa;
  undefined1 local_3de;
  undefined1 local_3d5;
  
  if (((*(int *)(param_1 + 0x28) == 0) || (*(int *)(param_1 + 0x30) == 0)) ||
     (*(int *)(param_1 + 0x10) == 0)) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x30) + 0x424);
  pMem = *(LPCVOID *)(iVar2 + 0x3e);
  if (pMem != (LPCVOID)0x0) {
    if (0x1a7 < *(uint *)(iVar2 + 0x3a)) goto LAB_004024d2;
    if (pMem != (LPCVOID)0x0) {
      pvVar3 = GlobalHandle(pMem);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(*(LPCVOID *)(*(int *)(*(int *)(param_1 + 0x30) + 0x424) + 0x3e));
      GlobalFree(pvVar3);
    }
  }
  pvVar3 = GlobalAlloc(0x42,0x1a8);
  pvVar4 = GlobalLock(pvVar3);
  *(LPVOID *)(*(int *)(*(int *)(param_1 + 0x30) + 0x424) + 0x3e) = pvVar4;
  iVar2 = *(int *)(*(int *)(param_1 + 0x30) + 0x424);
  if (*(int *)(iVar2 + 0x3e) == 0) {
    *(undefined4 *)(iVar2 + 0x3a) = 0;
    return 0x8007000e;
  }
  *(undefined4 *)(iVar2 + 0x3a) = 0x1a8;
LAB_004024d2:
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x30) + 0x424) + 0x3e);
  iVar5 = FUN_00402b40(iVar2 + 4,0x2b);
  if (iVar5 == 0) {
    lstrcpynA((LPSTR)local_400,(LPCSTR)(iVar2 + 4),0x2c);
    local_3d5 = 0;
    FUN_00402ae0((char *)local_400);
  }
  else {
    local_400[0] = '\0';
  }
  SetDlgItemTextA(*(HWND *)(param_1 + 0x10),0x4fb,(LPCSTR)local_400);
  LVar10 = 0;
  WVar9 = 0x2b;
  UVar8 = 0xc5;
  pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x4fb);
  SendMessageA(pHVar6,UVar8,WVar9,LVar10);
  iVar5 = FUN_00402b40(iVar2 + 0x10b,0x22);
  if (iVar5 == 0) {
    lstrcpynA((LPSTR)local_400,(LPCSTR)(iVar2 + 0x10b),0x23);
    local_3de = 0;
    FUN_00402ae0((char *)local_400);
  }
  else {
    local_400[0] = '\0';
  }
  SetDlgItemTextA(*(HWND *)(param_1 + 0x10),0x4f5,(LPCSTR)local_400);
  LVar10 = 0;
  WVar9 = 0x22;
  UVar8 = 0xc5;
  pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x4f5);
  SendMessageA(pHVar6,UVar8,WVar9,LVar10);
  iVar5 = FUN_00402b40(iVar2 + 0x12d,0x22);
  if ((iVar5 != 0) == true) {
    local_400[0] = '\0';
  }
  else {
    lstrcpynA((LPSTR)local_400,(LPCSTR)(iVar2 + 0x12d),0x23);
    local_3de = 0;
    FUN_00402ae0((char *)local_400);
  }
  SetDlgItemTextA(*(HWND *)(param_1 + 0x10),0x4f6,(LPCSTR)local_400);
  LVar10 = 0;
  WVar9 = 0x22;
  UVar8 = 0xc5;
  pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x4f6);
  SendMessageA(pHVar6,UVar8,WVar9,LVar10);
  if ((*(char *)(iVar2 + 0x2f) == '\0') || (iVar5 = FUN_00402b40(iVar2 + 0x2f,4), iVar5 != 0)) {
    _mbscpy(local_400,"0000");
  }
  else {
    lstrcpynA((LPSTR)local_400,(LPCSTR)(iVar2 + 0x2f),5);
    local_3fc = 0;
    FUN_00402ae0((char *)local_400);
  }
  SetDlgItemTextA(*(HWND *)(param_1 + 0x10),0x4fc,(LPCSTR)local_400);
  LVar10 = 0;
  WVar9 = 4;
  UVar8 = 0xc5;
  pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x4fc);
  SendMessageA(pHVar6,UVar8,WVar9,LVar10);
  if ((*(char *)(iVar2 + 0x158) == '\0') || (iVar5 = FUN_00402b40(iVar2 + 0x158,6), iVar5 != 0)) {
    FUN_0040ffe0(local_408);
    FUN_00409aa0(local_408,(LPSTR)local_400);
  }
  else {
    lstrcpynA((LPSTR)local_400,(LPCSTR)(iVar2 + 0x158),7);
    local_3fa = 0;
    FUN_00402ae0((char *)local_400);
  }
  SetDlgItemTextA(*(HWND *)(param_1 + 0x10),0x4fa,(LPCSTR)local_400);
  LVar10 = 0;
  WVar9 = 6;
  UVar8 = 0xc5;
  pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x4fa);
  SendMessageA(pHVar6,UVar8,WVar9,LVar10);
  if ((*(char *)(iVar2 + 0x14f) == '\0') || (iVar5 = FUN_00402b40(iVar2 + 0x14f,2), iVar5 != 0)) {
    _mbscpy(local_400,"00");
  }
  else {
    lstrcpynA((LPSTR)local_400,(LPCSTR)(iVar2 + 0x14f),3);
    local_400[2] = 0;
    FUN_00402ae0((char *)local_400);
  }
  SetDlgItemTextA(*(HWND *)(param_1 + 0x10),0x4f7,(LPCSTR)local_400);
  LVar10 = 0;
  WVar9 = 2;
  UVar8 = 0xc5;
  pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x4f7);
  SendMessageA(pHVar6,UVar8,WVar9,LVar10);
  if ((*(char *)(iVar2 + 0x41) == '\0') || (iVar5 = FUN_00402b40(iVar2 + 0x41,6), iVar5 != 0)) {
    _mbscpy(local_400,(uchar *)"000000");
  }
  else {
    lstrcpynA((LPSTR)local_400,(LPCSTR)(iVar2 + 0x41),7);
    local_3fa = 0;
    FUN_00402ae0((char *)local_400);
  }
  SetDlgItemTextA(*(HWND *)(param_1 + 0x10),0x50c,(LPCSTR)local_400);
  LVar10 = 0;
  WVar9 = 6;
  UVar8 = 0xc5;
  pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x50c);
  SendMessageA(pHVar6,UVar8,WVar9,LVar10);
  if ((*(char *)(iVar2 + 0x47) == '\0') || (iVar5 = FUN_00402b40(iVar2 + 0x47,6), iVar5 != 0)) {
    _mbscpy(local_400,(uchar *)"000000");
  }
  else {
    lstrcpynA((LPSTR)local_400,(LPCSTR)(iVar2 + 0x47),7);
    local_3fa = 0;
    FUN_00402ae0((char *)local_400);
  }
  SetDlgItemTextA(*(HWND *)(param_1 + 0x10),0x50e,(LPCSTR)local_400);
  LVar10 = 0;
  WVar9 = 6;
  UVar8 = 0xc5;
  pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x50e);
  SendMessageA(pHVar6,UVar8,WVar9,LVar10);
  pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x50d);
  WVar9 = SendMessageA(pHVar6,0x143,0,0x432494);
  SendMessageA(pHVar6,0x151,WVar9,0);
  iVar5 = 0;
  do {
    wsprintfA((LPSTR)local_400,"%d",iVar5);
    WVar9 = SendMessageA(pHVar6,0x143,0,(LPARAM)local_400);
    SendMessageA(pHVar6,0x151,WVar9,(uint)(byte)((byte)iVar5 | 0x80));
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x18);
  SendMessageA(pHVar6,0x14e,0,0);
  WVar9 = 0;
  LVar7 = SendMessageA(pHVar6,0x146,0,0);
  if (0 < LVar7) {
    do {
      LVar7 = SendMessageA(pHVar6,0x150,WVar9,0);
      if ((char)LVar7 == *(char *)(iVar2 + 0x4d)) {
        SendMessageA(pHVar6,0x14e,WVar9,0);
        break;
      }
      WVar9 = WVar9 + 1;
      LVar7 = SendMessageA(pHVar6,0x146,0,0);
    } while ((int)WVar9 < LVar7);
  }
  pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x50f);
  WVar9 = SendMessageA(pHVar6,0x143,0,0x432494);
  SendMessageA(pHVar6,0x151,WVar9,0);
  iVar5 = 0;
  do {
    wsprintfA((LPSTR)local_400,"%d",iVar5);
    WVar9 = SendMessageA(pHVar6,0x143,0,(LPARAM)local_400);
    SendMessageA(pHVar6,0x151,WVar9,(uint)(byte)((byte)iVar5 | 0x80));
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x18);
  SendMessageA(pHVar6,0x14e,0,0);
  WVar9 = 0;
  LVar7 = SendMessageA(pHVar6,0x146,0,0);
  if (0 < LVar7) {
    do {
      LVar7 = SendMessageA(pHVar6,0x150,WVar9,0);
      if ((char)LVar7 == *(char *)(iVar2 + 0x4e)) {
        SendMessageA(pHVar6,0x14e,WVar9,0);
        break;
      }
      WVar9 = WVar9 + 1;
      LVar7 = SendMessageA(pHVar6,0x146,0,0);
    } while ((int)WVar9 < LVar7);
  }
  pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x4f8);
  WVar9 = SendMessageA(pHVar6,0x143,0,0x432488);
  SendMessageA(pHVar6,0x151,WVar9,0x46);
  WVar9 = SendMessageA(pHVar6,0x143,0,0x432480);
  SendMessageA(pHVar6,0x151,WVar9,0x43);
  uVar1 = *(uchar *)(iVar2 + 0x151);
  if (uVar1 == 'C') {
    WVar9 = 0;
  }
  else if (uVar1 == 'F') {
    WVar9 = 1;
  }
  else if (uVar1 == '\0') {
    WVar9 = 0;
  }
  else {
    local_400[1] = 0;
    local_400[0] = uVar1;
    WVar9 = SendMessageA(pHVar6,0x143,0,(LPARAM)local_400);
    SendMessageA(pHVar6,0x151,WVar9,(int)*(char *)(iVar2 + 0x151));
  }
  SendMessageA(pHVar6,0x14e,WVar9,0);
  FUN_00402e60(param_1);
  FUN_004034a0(param_1);
  FUN_004035d0(param_1);
  FUN_004036e0(param_1);
  return 1;
}


