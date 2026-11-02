/* Module: vidcap30.exe
   Function: FUN_00409070
   Address: 00409070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00409070(int *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  HWND hWnd;
  uint uVar3;
  LONG *pLVar4;
  HWND pHVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  HWND local_248;
  tagPOINT local_244;
  int local_23c;
  uint local_238;
  WINDOWPLACEMENT local_234;
  tagPOINT local_208;
  CHAR local_200 [512];
  
  GetCursorPos(&local_208);
  local_23c = 0;
  uVar1 = param_1[3];
  puVar2 = (undefined4 *)param_1[1];
  if ((uVar1 & 0x20) == 0) {
    param_2 = param_2 & 0xffffffef;
  }
  else if ((param_2 & 0x10) != 0) {
    param_1[3] = uVar1 ^ 0x10;
  }
  uVar8 = uVar1 & 7 ^ param_2 & 7;
  uVar1 = param_1[3];
  if ((uVar1 & 0x10) != 0) {
    uVar8 = uVar8 | 1;
  }
  local_238 = uVar8;
  if ((uVar1 & 7) == uVar8) {
    if (((param_2 & 0x10) != 0) && (((byte)uVar1 & 3) == 3)) {
      FUN_00408500(puVar2,0,0);
      return 1;
    }
  }
  else {
    local_248 = (HWND)*puVar2;
    uVar3 = param_2 >> 1 & 1;
    if ((((uVar1 & 1) != 0) && ((HWND)puVar2[0xd] != (HWND)0x0)) && ((uVar1 & 0x10) == 0)) {
      local_248 = (HWND)puVar2[0xd];
    }
    local_234.length = 0x2c;
    GetWindowPlacement((HWND)param_1[2],&local_234);
    local_244.x = 0;
    local_244.y = 0;
    if (uVar3 != 0) {
      if ((*(byte *)(param_1 + 3) & 2) == 0) {
        ScreenToClient(local_248,&local_244);
      }
      else {
        ClientToScreen(local_248,&local_244);
      }
    }
    pLVar4 = &local_234.ptMinPosition.y;
    iVar6 = 4;
    do {
      ((POINT *)(pLVar4 + -1))->x = ((POINT *)(pLVar4 + -1))->x + local_244.x;
      *pLVar4 = *pLVar4 + local_244.y;
      pLVar4 = pLVar4 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if ((*(byte *)(param_1 + 3) & 0x10) != 0) {
      FUN_00408f70(param_1,uVar8,&local_234.rcNormalPosition);
    }
    if (((uVar3 == 0) || (uVar1 = param_1[3], ((byte)uVar1 & 3) != 1)) || ((uVar1 & 0x10) != 0)) {
      if (((uVar3 != 0) && (((byte)param_1[3] & 3) == 3)) && ((param_1[3] & 0x10U) == 0)) {
        local_234.rcNormalPosition.right = param_1[0x11] + local_234.rcNormalPosition.left;
        local_234.rcNormalPosition.bottom = param_1[0x12] + local_234.rcNormalPosition.top;
      }
      if (param_4 == 0) {
        iVar6 = -local_234.rcNormalPosition.left;
        iVar7 = -local_234.rcNormalPosition.top;
      }
      else {
        iVar6 = param_1[0x1a] - local_234.rcNormalPosition.left;
        iVar7 = param_1[0x1b] - local_234.rcNormalPosition.top;
      }
      iVar7 = iVar7 + param_1[10] + local_244.y;
      iVar6 = iVar6 + param_1[9] + local_244.x;
      local_234.rcNormalPosition.left = local_234.rcNormalPosition.left + iVar6;
      local_234.rcNormalPosition.right = local_234.rcNormalPosition.right + iVar6;
      local_234.rcNormalPosition.top = local_234.rcNormalPosition.top + iVar7;
      local_234.rcNormalPosition.bottom = local_234.rcNormalPosition.bottom + iVar7;
      uVar8 = local_238;
    }
    else {
      if ((uVar1 & 0x80) == 0) {
        param_1[0x11] = local_234.rcNormalPosition.right - local_234.rcNormalPosition.left;
        param_1[0x12] = local_234.rcNormalPosition.bottom - local_234.rcNormalPosition.top;
      }
      FUN_0040dfc0(puVar2[0xe],param_1,&local_234.rcNormalPosition,&param_3,param_4);
    }
    GetWindowTextA((HWND)param_1[2],local_200,0x200);
    if (((byte)uVar8 & 3) < 2) {
      local_248 = (HWND)*puVar2;
    }
    pHVar5 = CreateWindowExA(*(uint *)(&DAT_005b2650 + uVar8 * 4) | 4,"VIDCAP.3.0.Class.Doc",
                             local_200,*(DWORD *)(&DAT_005b2630 + uVar8 * 4),0,0,0,0,local_248,
                             (HMENU)0x0,DAT_005ba298,(LPVOID)0x0);
    if (pHVar5 != (HWND)0x0) {
      if (param_4 != 0) {
        (**(code **)*param_1)(param_1,0x1f,0,0);
      }
      hWnd = (HWND)param_1[2];
      if (*(code **)(*param_1 + 4) != (code *)0x0) {
        (**(code **)(*param_1 + 4))(param_1,pHVar5);
      }
      param_1[2] = (int)pHVar5;
      SetWindowLongA(hWnd,-0x15,0);
      DestroyWindow(hWnd);
      uVar1 = param_1[3];
      if (((byte)uVar1 & 3) == 3) {
        local_23c = 1;
      }
      param_1[3] = (uVar1 ^ uVar8) & 7 ^ uVar1;
      param_1[4] = param_3;
      FUN_00408440(param_1,pHVar5);
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      FUN_00408f00(param_1 + 0xd,(uint)param_1[3] >> 4 & 1,param_1[3] & 7);
      param_1[9] = local_234.rcNormalPosition.left;
      param_1[10] = local_234.rcNormalPosition.top;
      param_1[0xc] = local_234.rcNormalPosition.bottom - local_234.rcNormalPosition.top;
      param_1[0xb] = local_234.rcNormalPosition.right - local_234.rcNormalPosition.left;
      if ((param_1[3] & 2U) == 0) {
        param_1[0x11] = local_234.rcNormalPosition.right - local_234.rcNormalPosition.left;
        param_1[0x12] = param_1[0xc];
      }
      if ((local_23c != 0) || (((byte)param_1[3] & 3) == 3)) {
        FUN_00408500(puVar2,param_1,&local_234);
      }
      if (param_4 != 0) {
        if ((*(byte *)(param_1 + 3) & 0x10) == 0) {
          iVar6 = GetSystemMetrics(0x33);
          iVar6 = (local_208.y - (iVar6 >> 1)) - local_234.rcNormalPosition.top;
          local_234.rcNormalPosition.top = local_234.rcNormalPosition.top + iVar6;
          local_234.rcNormalPosition.bottom = local_234.rcNormalPosition.bottom + iVar6;
        }
        PostMessageA((HWND)param_1[2],0xa1,2,local_208.y << 0x10 | local_208.x & 0xffffU);
      }
      SetWindowPlacement((HWND)param_1[2],&local_234);
      return 1;
    }
  }
  return 0;
}


