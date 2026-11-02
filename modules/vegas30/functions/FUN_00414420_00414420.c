/* Module: vegas30.exe
   Function: FUN_00414420
   Address: 00414420
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00414420(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  HWND hWnd;
  POINT pt;
  POINT pt_00;
  BOOL BVar2;
  HWND pHVar3;
  int iVar4;
  tagPOINT local_28;
  RECT local_20;
  tagRECT local_10;
  
  local_28.x = (LONG)(short)param_4;
  local_28.y = (LONG)(short)((uint)param_4 >> 0x10);
  GetWindowRect((HWND)param_1[2],&local_10);
  pt.y = local_28.y;
  pt.x = local_28.x;
  BVar2 = PtInRect(&local_10,pt);
  if (BVar2 == 0) {
    iVar4 = 0;
  }
  else {
    local_20.right = local_10.right;
    uVar1 = param_1[3];
    local_20.top = local_10.top;
    local_20.left = local_10.left;
    local_20.bottom = local_10.bottom;
    if ((uVar1 & 0x50) == 0) {
      local_20.left = local_10.left + 0xf;
      local_20.right = local_10.right + -4;
      if (((uVar1 & 0x20) != 0) || (((uVar1 & 0x80) != 0 && (((byte)uVar1 & 3) != 3)))) {
        local_20.top = local_10.top + 1;
        local_20.bottom = local_10.bottom + -1;
      }
    }
    pt_00.y = local_28.y;
    pt_00.x = local_28.x;
    BVar2 = PtInRect(&local_20,pt_00);
    if (BVar2 == 0) {
      iVar4 = 2;
      if (((*(byte *)(param_1 + 3) & 0x10) == 0) && (local_28.x <= local_10.left + 0xf)) {
        if (local_10.top + 0xf < local_28.y) {
          if (local_28.y <= local_10.top + 0x1f) {
            iVar4 = 9;
          }
        }
        else {
          iVar4 = 0x14;
        }
      }
    }
    else {
      iVar4 = 1;
    }
  }
  param_1[7] = iVar4;
  if (*(int *)(*param_1 + 0x10) == 0) {
    if (iVar4 == 1) {
      return 1;
    }
  }
  else if (iVar4 == 1) {
    hWnd = (HWND)param_1[2];
    pHVar3 = GetCapture();
    if (pHVar3 == hWnd) {
      return 1;
    }
    ScreenToClient(hWnd,&local_28);
    (**(code **)(*param_1 + 0x10))(param_1,local_28.x,local_28.y);
    return 1;
  }
  if (param_1[2] == DAT_0064769c) {
    DAT_0064769c = 0;
    (**(code **)*param_1)(param_1,0x2a3,0,0xffffffff);
  }
  return iVar4;
}


