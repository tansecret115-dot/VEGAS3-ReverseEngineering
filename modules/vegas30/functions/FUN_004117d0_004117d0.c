/* Module: vegas30.exe
   Function: FUN_004117d0
   Address: 004117d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004117d0(int *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  HWND hWnd;
  uint uVar3;
  LONG *pLVar4;
  int iVar5;
  HWND pHVar6;
  int iVar7;
  uint uVar8;
  HWND local_244;
  tagPOINT local_240;
  int local_238;
  WINDOWPLACEMENT local_234;
  tagPOINT local_208;
  CHAR local_200 [512];
  
  GetCursorPos(&local_208);
  local_238 = 0;
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
  if ((uVar1 & 7) == uVar8) {
    if (((param_2 & 0x10) != 0) && (((byte)uVar1 & 3) == 3)) {
      FUN_00410bb0(puVar2,0,0);
      return 1;
    }
  }
  else {
    local_244 = (HWND)*puVar2;
    uVar3 = param_2 >> 1 & 1;
    if ((((uVar1 & 1) != 0) && ((HWND)puVar2[0xc] != (HWND)0x0)) && ((uVar1 & 0x10) == 0)) {
      local_244 = (HWND)puVar2[0xc];
    }
    local_234.length = 0x2c;
    GetWindowPlacement((HWND)param_1[2],&local_234);
    local_240.x = 0;
    local_240.y = 0;
    if (uVar3 != 0) {
      if ((*(byte *)(param_1 + 3) & 2) == 0) {
        ScreenToClient(local_244,&local_240);
      }
      else {
        ClientToScreen(local_244,&local_240);
      }
    }
    pLVar4 = &local_234.ptMinPosition.y;
    iVar7 = 4;
    do {
      ((POINT *)(pLVar4 + -1))->x = ((POINT *)(pLVar4 + -1))->x + local_240.x;
      *pLVar4 = *pLVar4 + local_240.y;
      pLVar4 = pLVar4 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    if ((*(byte *)(param_1 + 3) & 0x10) != 0) {
      FUN_004116d0(param_1,uVar8,&local_234.rcNormalPosition);
    }
    if (((uVar3 == 0) || (uVar1 = param_1[3], ((byte)uVar1 & 3) != 1)) || ((uVar1 & 0x10) != 0)) {
      if (((uVar3 != 0) && (((byte)param_1[3] & 3) == 3)) && ((param_1[3] & 0x10U) == 0)) {
        local_234.rcNormalPosition.right = param_1[0x11] + local_234.rcNormalPosition.left;
        local_234.rcNormalPosition.bottom = param_1[0x12] + local_234.rcNormalPosition.top;
      }
      if (param_4 == 0) {
        iVar7 = -local_234.rcNormalPosition.left;
        iVar5 = -local_234.rcNormalPosition.top;
      }
      else {
        iVar7 = param_1[0x1a] - local_234.rcNormalPosition.left;
        iVar5 = param_1[0x1b] - local_234.rcNormalPosition.top;
      }
      OffsetRect(&local_234.rcNormalPosition,iVar7 + param_1[9] + local_240.x,
                 iVar5 + param_1[10] + local_240.y);
    }
    else {
      if ((uVar1 & 0x80) == 0) {
        param_1[0x11] = local_234.rcNormalPosition.right - local_234.rcNormalPosition.left;
        param_1[0x12] = local_234.rcNormalPosition.bottom - local_234.rcNormalPosition.top;
      }
      FUN_004168b0(puVar2[0xd],param_1,&local_234.rcNormalPosition,&param_3,param_4);
    }
    GetWindowTextA((HWND)param_1[2],local_200,0x200);
    if (((byte)uVar8 & 3) < 2) {
      local_244 = (HWND)*puVar2;
    }
    pHVar6 = CreateWindowExA(*(uint *)(&DAT_0063d154 + uVar8 * 4) | 4,"Vegas.Class.Doc",local_200,
                             *(DWORD *)(&DAT_0063d134 + uVar8 * 4),0,0,0,0,local_244,(HMENU)0x0,
                             DAT_006471fc,(LPVOID)0x0);
    if (pHVar6 != (HWND)0x0) {
      if (param_4 != 0) {
        (**(code **)*param_1)(param_1,0x1f,0,0);
      }
      hWnd = (HWND)param_1[2];
      if (*(code **)(*param_1 + 4) != (code *)0x0) {
        (**(code **)(*param_1 + 4))(param_1,pHVar6);
      }
      param_1[2] = (int)pHVar6;
      SetWindowLongA(hWnd,-0x15,0);
      DestroyWindow(hWnd);
      uVar1 = param_1[3];
      iVar7 = 1;
      if (((byte)uVar1 & 3) != 3) {
        iVar7 = local_238;
      }
      param_1[4] = param_3;
      param_1[3] = (uVar1 ^ uVar8) & 7 ^ uVar1;
      FUN_00410af0(param_1,pHVar6);
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      FUN_00411660(param_1 + 0xd,(uint)param_1[3] >> 4 & 1,param_1[3] & 7);
      param_1[9] = local_234.rcNormalPosition.left;
      param_1[10] = local_234.rcNormalPosition.top;
      param_1[0xc] = local_234.rcNormalPosition.bottom - local_234.rcNormalPosition.top;
      param_1[0xb] = local_234.rcNormalPosition.right - local_234.rcNormalPosition.left;
      if ((param_1[3] & 2U) == 0) {
        param_1[0x11] = local_234.rcNormalPosition.right - local_234.rcNormalPosition.left;
        param_1[0x12] = param_1[0xc];
      }
      if ((iVar7 != 0) || (((byte)param_1[3] & 3) == 3)) {
        FUN_00410bb0(puVar2,param_1,&local_234);
      }
      if (param_4 != 0) {
        if ((*(byte *)(param_1 + 3) & 0x10) == 0) {
          iVar7 = GetSystemMetrics(0x33);
          OffsetRect(&local_234.rcNormalPosition,0,
                     (local_208.y - (iVar7 >> 1)) - local_234.rcNormalPosition.top);
        }
        PostMessageA((HWND)param_1[2],0xa1,2,local_208.y << 0x10 | local_208.x & 0xffffU);
      }
      SetWindowPlacement((HWND)param_1[2],&local_234);
      return 1;
    }
  }
  return 0;
}


