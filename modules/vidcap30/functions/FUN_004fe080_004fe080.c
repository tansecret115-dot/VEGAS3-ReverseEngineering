/* Module: vidcap30.exe
   Function: FUN_004fe080
   Address: 004fe080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004fe080(int param_1)

{
  ushort uVar1;
  HWND hWnd;
  HWND hWnd_00;
  POINT Point;
  POINT Point_00;
  DWORD DVar2;
  HWND pHVar3;
  LRESULT LVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  code *pcVar9;
  undefined4 *puVar10;
  WPARAM *pWVar11;
  int *piVar12;
  undefined4 *puVar13;
  int local_368 [4];
  int iStack_358;
  undefined1 *local_354;
  undefined1 *local_350;
  tagPOINT local_348;
  int local_33c;
  int local_334;
  WPARAM local_330;
  WPARAM local_32c [4];
  LONG local_31c;
  int local_318;
  undefined4 local_314;
  undefined1 local_30c;
  undefined4 auStack_30b [129];
  undefined1 local_104 [260];
  
  local_330 = *(WPARAM *)(param_1 + 4);
  hWnd = *(HWND *)(param_1 + 0x1c);
  hWnd_00 = *(HWND *)(param_1 + 0x18);
  pWVar11 = local_32c;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pWVar11 = 0;
    pWVar11 = pWVar11 + 1;
  }
  local_32c[2] = 3;
  if ((*(byte *)(param_1 + 0x4a4) & 2) != 0) {
    local_32c[2] = 8;
  }
  DVar2 = GetMessagePos();
  local_32c[3] = (WPARAM)(short)DVar2;
  local_31c = (LONG)(short)(DVar2 >> 0x10);
  if ((*(byte *)(param_1 + 0x4a4) & 0x20) != 0) {
    FUN_004fe000(hWnd,param_1 + 0x4b0,0xffffffff);
  }
  local_334 = 0;
  Point.y = local_31c;
  Point.x = local_32c[3];
  pHVar3 = WindowFromPoint(Point);
  if (((pHVar3 == hWnd) ||
      (Point_00.y = local_31c, Point_00.x = local_32c[3], pHVar3 = WindowFromPoint(Point_00),
      pHVar3 == hWnd_00)) && ((*(byte *)(param_1 + 0x4a4) & 1) == 0)) {
    local_334 = 1;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_00498850(param_1);
    ImageList_EndDrag();
    ImageList_Destroy(*(HIMAGELIST *)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  FUN_004fdba0(param_1);
  SetCursor(*(HCURSOR *)(param_1 + 0x49c));
  *(undefined4 *)(param_1 + 0x488) = 0;
  *(uint *)(param_1 + 0x4a4) = *(uint *)(param_1 + 0x4a4) & 0xfffffffe;
  pHVar3 = GetCapture();
  if (pHVar3 == *(HWND *)(param_1 + 4)) {
    ReleaseCapture();
  }
  pcVar9 = SendMessageA_exref;
  local_318 = *(int *)(param_1 + 0x498);
  if (local_318 != 0) {
    local_314 = *(undefined4 *)(param_1 + 0x3c);
    local_32c[1] = *(WPARAM *)(param_1 + 0x2c);
    local_32c[0] = local_330;
    LVar4 = SendMessageA(*(HWND *)(param_1 + 8),0x4e,local_32c[1],(LPARAM)local_32c);
    if (LVar4 == 0) {
      _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x498));
    }
    *(undefined4 *)(param_1 + 0x498) = 0;
  }
  piVar12 = local_368;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar12 = 0;
    piVar12 = piVar12 + 1;
  }
  if (local_334 == 0) goto LAB_004fe4b0;
  iVar7 = FUN_004fdb70(hWnd,local_32c[3],local_31c);
  if (iVar7 == 0) {
    local_348.x = local_32c[3];
    local_348.y = local_31c;
    ScreenToClient(hWnd_00,&local_348);
    SendMessageA(hWnd_00,0x1111,0,(LPARAM)&local_348);
    if (local_33c == 0) goto LAB_004fe4b0;
    FUN_004f8340(hWnd_00,local_33c,&local_30c);
    local_368[3] = FUN_004f79a0(hWnd_00,local_33c,local_368 + 2);
    iVar7 = *(int *)(*(int *)(local_368[2] + 8) + local_368[3] * 4);
    iVar5 = FUN_004fd530(param_1,iVar7,*(undefined4 *)(param_1 + 0x494));
LAB_004fe430:
    if (iVar5 == 0) goto LAB_004fe4b0;
LAB_004fe434:
    local_350 = local_104;
    local_354 = &local_30c;
    local_368[0] = 2;
    (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(int **)(param_1 + 0x3c),local_368);
    if ((iVar7 != 0) && (local_32c[2] != 8)) {
      local_368[2] = *(int *)(param_1 + 0x494);
      local_368[0] = 0xc - (uint)((*(uint *)(param_1 + 0x4a4) & 4) != 0);
      local_368[1] = local_330;
      local_354 = (undefined1 *)0x0;
      iStack_358 = *(int *)(iVar7 + 0xc);
      (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(int **)(param_1 + 0x3c),local_368);
    }
  }
  else {
    local_348.x = local_32c[3];
    local_348.y = local_31c;
    ScreenToClient(hWnd,&local_348);
    if ((*(byte *)(param_1 + 0x4a4) & 0x20) == 0) {
      SendMessageA(hWnd,0x1012,0,(LPARAM)&local_348);
      if (local_33c == -1) {
LAB_004fe35e:
        if ((*(byte *)(param_1 + 0x4a4) & 4) == 0) goto LAB_004fe4b0;
        uVar6 = (*pcVar9)(hWnd_00,0x110a,9,0);
        local_368[3] = FUN_004f79a0(hWnd_00,uVar6,local_368 + 2);
        iVar7 = *(int *)(*(int *)(local_368[2] + 8) + local_368[3] * 4);
        iVar5 = FUN_004fd530(param_1,iVar7,*(undefined4 *)(param_1 + 0x494));
        if (iVar5 == 0) goto LAB_004fe4b0;
        FUN_004f8340(hWnd_00,uVar6,&local_30c);
        goto LAB_004fe430;
      }
      LVar4 = SendMessageA(hWnd_00,0x110a,9,0);
      local_368[2] = FUN_004f6ec0(hWnd_00,LVar4);
      local_368[3] = FUN_004f3c20(hWnd,local_33c);
      iVar7 = *(int *)(*(int *)(local_368[2] + 8) + local_368[3] * 4);
      iVar5 = FUN_004fd530(param_1,iVar7,*(undefined4 *)(param_1 + 0x494));
      pcVar9 = SendMessageA_exref;
      if (iVar5 == 0) goto LAB_004fe35e;
      iVar5 = FUN_004f8340(hWnd_00,LVar4,&local_30c);
      (&local_30c)[iVar5] = 0x5c;
      uVar1 = *(ushort *)(iVar7 + 0x10);
      puVar10 = (undefined4 *)(iVar7 + 0x14);
      puVar13 = (undefined4 *)((int)auStack_30b + iVar5);
      for (uVar8 = (uint)(uVar1 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar13 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
      }
      for (uVar8 = uVar1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar13 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      goto LAB_004fe434;
    }
    if (*(int *)(param_1 + 0x4a8) <= local_348.y) {
      local_348.x = 2;
      LVar4 = SendMessageA(hWnd,0x1012,0,(LPARAM)&local_348);
      if (LVar4 == -1) {
        SendMessageA(hWnd,0x1004,0,0);
      }
    }
    local_368[2] = *(int *)(param_1 + 0x494);
    local_368[0] = 0x408;
    SendMessageA(hWnd,0x1004,0,0);
    (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(int **)(param_1 + 0x3c),&stack0xfffffc88);
    if (iStack_358 == 0) goto LAB_004fe4b0;
  }
  FUN_004f93e0(param_1);
LAB_004fe4b0:
  if (*(int *)(param_1 + 0x494) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x494));
  }
  *(undefined4 *)(param_1 + 0x494) = 0;
  return 0;
}


