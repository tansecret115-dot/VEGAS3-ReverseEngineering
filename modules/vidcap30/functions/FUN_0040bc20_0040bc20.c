/* Module: vidcap30.exe
   Function: FUN_0040bc20
   Address: 0040bc20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040bc20(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  HWND hWnd;
  HWND pHVar1;
  int iVar2;
  tagPOINT local_18;
  tagRECT local_10;
  
  local_18.x = (LONG)(short)param_4;
  local_18.y = (LONG)(short)((uint)param_4 >> 0x10);
  GetWindowRect((HWND)param_1[2],&local_10);
  if ((((local_18.x < local_10.left) || (local_10.right <= local_18.x)) ||
      (local_18.y < local_10.top)) || (local_10.bottom <= local_18.y)) {
    iVar2 = 0;
  }
  else {
    iVar2 = local_10.left;
    if ((param_1[3] & 0x50U) == 0) {
      iVar2 = local_10.left + 0xf;
      local_10.right = local_10.right + -4;
    }
    if (((local_18.x < iVar2) || (local_10.right <= local_18.x)) ||
       ((local_18.y < local_10.top || (local_10.bottom <= local_18.y)))) {
      iVar2 = 2;
      if (((param_1[3] & 0x10U) == 0) && (local_18.x <= local_10.left + 0xf)) {
        if (local_10.top + 0xf < local_18.y) {
          if (local_18.y <= local_10.top + 0x1f) {
            iVar2 = 9;
          }
        }
        else {
          iVar2 = 0x14;
        }
      }
    }
    else {
      iVar2 = 1;
    }
  }
  param_1[7] = iVar2;
  if (*(int *)(*param_1 + 0x10) == 0) {
    if (iVar2 == 1) {
      return 1;
    }
  }
  else if (iVar2 == 1) {
    hWnd = (HWND)param_1[2];
    pHVar1 = GetCapture();
    if (pHVar1 == hWnd) {
      return 1;
    }
    ScreenToClient(hWnd,&local_18);
    (**(code **)(*param_1 + 0x10))(param_1,local_18.x,local_18.y);
    return 1;
  }
  if (param_1[2] == DAT_005ba52c) {
    DAT_005ba52c = 0;
    (**(code **)*param_1)(param_1,0x2a3,0,0xffffffff);
  }
  return iVar2;
}


