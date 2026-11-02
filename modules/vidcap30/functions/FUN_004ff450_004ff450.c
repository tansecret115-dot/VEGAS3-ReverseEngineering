/* Module: vidcap30.exe
   Function: FUN_004ff450
   Address: 004ff450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004ff450(int param_1,undefined4 param_2,HWND param_3,LONG param_4)

{
  HWND hWndTo;
  POINT pt;
  LONG hWndTo_00;
  HWND pHVar1;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  tagPOINT local_340;
  int local_338;
  int local_334;
  undefined4 local_330;
  int local_32c [5];
  HWND local_318;
  undefined1 *local_314;
  undefined1 local_30c [520];
  undefined1 local_104 [260];
  
  if ((*(byte *)(param_1 + 0x4a4) & 8) != 0) {
    FUN_004fdba0(param_1);
  }
  local_340.x = *(undefined4 *)(param_1 + 0x18);
  hWndTo = *(HWND *)(param_1 + 0x1c);
  local_338 = 0;
  local_30c[0] = 0;
  pt.y = param_4;
  pt.x = (LONG)param_3;
  pHVar1 = ChildWindowFromPointEx(*(HWND *)(param_1 + 4),pt,1);
  hWndTo_00 = local_340.x;
  if (pHVar1 == hWndTo) {
    local_340.x = (LONG)param_3;
    local_340.y = param_4;
    MapWindowPoints(*(HWND *)(param_1 + 4),hWndTo,&local_340,1);
    FUN_004feea0(param_1,param_2,local_340.x,local_340.y,&local_338,local_30c,0x208,&local_330,
                 &local_334);
  }
  else if (pHVar1 == (HWND)local_340.x) {
    local_340.x = (LONG)param_3;
    local_340.y = param_4;
    MapWindowPoints(*(HWND *)(param_1 + 4),(HWND)hWndTo_00,&local_340,1);
    FUN_004ff100(param_1,param_2,local_340.x,local_340.y,&local_338,local_30c,0x208,&local_330,
                 &local_334);
  }
  else {
    *(uint *)(param_1 + 0x4a4) = *(uint *)(param_1 + 0x4a4) & 0xfffffeff;
  }
  if (((*(uint *)(param_1 + 0x4a4) & 0x100) != 0) && (local_338 != 0)) {
    piVar5 = local_32c;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar5 = 0;
      piVar5 = piVar5 + 1;
    }
    local_314 = local_104;
    local_32c[3] = local_334;
    local_32c[0] = 2;
    local_32c[2] = local_330;
    local_318 = (HWND)local_30c;
    (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(int **)(param_1 + 0x3c),local_32c);
    DVar2 = GetMessagePos();
    uVar3 = GetWindowLongA(*(HWND *)(param_1 + 4),-0x10);
    if ((uVar3 & 0x40) == 0) {
      local_330 = *(undefined4 *)(param_1 + 4);
      local_334 = 0xc - (uint)((*(uint *)(param_1 + 0x4a4) & 4) != 0);
      local_32c[2] = ((HWND)(local_340.x + 0xc))->unused;
    }
    else {
      local_334 = FUN_004ff680(*(undefined4 *)(param_1 + 4),param_1,DVar2);
      local_330 = *(undefined4 *)(param_1 + 4);
      local_32c[2] = ((HWND)(local_340.x + 0xc))->unused;
    }
    local_318 = param_3;
    local_32c[3] = 0;
    (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(int **)(param_1 + 0x3c),&local_334);
    FUN_004f93e0(param_1);
  }
  *(undefined4 *)(param_1 + 0x4a0) = 0x7f88;
  return 0;
}


