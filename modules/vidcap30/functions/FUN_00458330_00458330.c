/* Module: vidcap30.exe
   Function: FUN_00458330
   Address: 00458330
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_00458330(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  WPARAM wParam;
  HWND hWnd;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  HGDIOBJ pvVar7;
  HGDIOBJ h;
  int iVar8;
  DWORD dw;
  int iVar9;
  HDC hdc;
  HBITMAP local_64;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  uVar3 = DAT_005bb4e4;
  uVar2 = DAT_005bb4e0;
  iVar1 = param_3[0xb];
  wParam = param_3[9];
  hWnd = (HWND)*param_3;
  piVar6 = (int *)0x0;
  if (param_3[3] == 1) {
    piVar6 = (int *)0x20;
  }
  else if (param_3[3] == 0x10001) {
    if (DAT_005bb21c != 0) {
      piVar6 = (int *)FUN_00420110(wParam,param_3 + 0xd);
      return piVar6;
    }
    if (&stack0x00000000 != (undefined1 *)0x40) {
      local_40 = 0;
      piVar6 = &local_40;
    }
    SendMessageA(hWnd,0x100e,wParam,(LPARAM)piVar6);
    if (&stack0x00000000 == (undefined1 *)0x20) {
      piVar6 = (int *)0x0;
    }
    else {
      local_20 = 1;
      piVar6 = &local_20;
    }
    SendMessageA(hWnd,0x100e,wParam,(LPARAM)piVar6);
    if (&stack0x00000000 == (undefined1 *)0x30) {
      piVar6 = (int *)0x0;
    }
    else {
      local_30 = 2;
      piVar6 = &local_30;
    }
    SendMessageA(hWnd,0x100e,wParam,(LPARAM)piVar6);
    if (DAT_005bb7b4 == 0) {
      hdc = CreateCompatibleDC((HDC)param_3[4]);
    }
    else {
      hdc = (HDC)0x0;
    }
    if (DAT_005bb7b4 == 0) {
      local_64 = CreateCompatibleBitmap((HDC)param_3[4],local_38 - local_40,local_34 - local_3c);
    }
    else {
      local_64 = (HBITMAP)0x0;
    }
    iVar5 = local_34;
    iVar4 = local_38;
    iVar8 = local_3c;
    iVar9 = local_40;
    if ((hdc == (HDC)0x0) || (local_64 == (HBITMAP)0x0)) {
      dw = GdiSetBatchLimit(1);
      FUN_0041fb50(hWnd,wParam,uVar2,uVar3,DAT_005bb83c,param_3[4],iVar1 + 0x134,1,&local_40,
                   &local_20,&local_30,DAT_005bb9d0,DAT_005bb9e0,0);
      GdiSetBatchLimit(dw);
    }
    else {
      local_10 = local_40;
      local_c = local_3c;
      pvVar7 = GetCurrentObject((HDC)param_3[4],6);
      pvVar7 = SelectObject(hdc,pvVar7);
      h = SelectObject(hdc,local_64);
      iVar9 = -iVar9;
      local_40 = local_40 + iVar9;
      local_38 = local_38 + iVar9;
      iVar8 = -iVar8;
      local_3c = local_3c + iVar8;
      local_34 = local_34 + iVar8;
      local_20 = local_20 + iVar9;
      local_18 = local_18 + iVar9;
      local_1c = local_1c + iVar8;
      local_14 = local_14 + iVar8;
      local_30 = local_30 + iVar9;
      local_28 = local_28 + iVar9;
      local_24 = local_24 + iVar8;
      local_2c = local_2c + iVar8;
      FUN_0041fb50(hWnd,wParam,uVar2,uVar3,DAT_005bb83c,hdc,iVar1 + 0x134,1,&local_40,&local_20,
                   &local_30,DAT_005bb9d0,DAT_005bb9e0,0);
      BitBlt((HDC)param_3[4],local_10,local_c,iVar4 - local_10,iVar5 - local_c,hdc,0,0,0xcc0020);
      local_64 = SelectObject(hdc,h);
      SelectObject(hdc,pvVar7);
    }
    if (local_64 != (HBITMAP)0x0) {
      DeleteObject(local_64);
    }
    if (hdc != (HDC)0x0) {
      DeleteDC(hdc);
    }
    return (int *)0x4;
  }
  return piVar6;
}


