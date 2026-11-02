/* Module: vegas30k.dll
   Function: FUN_011475f0
   Address: 011475f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011475f0(int param_1,HWND param_2,HWND param_3,LONG param_4,LONG param_5)

{
  uint uVar1;
  SHORT SVar2;
  WPARAM wParam;
  uint uVar3;
  int iVar4;
  LRESULT LVar5;
  int iVar6;
  undefined4 uVar7;
  HCURSOR hCursor;
  tagPOINT local_3c;
  WPARAM local_30;
  undefined1 local_28 [12];
  uint local_1c;
  undefined4 local_18;
  
  local_3c.x = param_4;
  local_3c.y = param_5;
  ScreenToClient(param_2,&local_3c);
  SendMessageA(param_2,0x1012,0,(LPARAM)&local_3c);
  wParam = SendMessageA(param_2,0x100c,0xffffffff,8);
  uVar1 = *(uint *)(param_1 + 0x4a4);
  SVar2 = GetKeyState(0x10);
  *(uint *)(param_1 + 0x4a4) = (uint)(SVar2 < 0) << 6 | *(uint *)(param_1 + 0x4a4) & 0xffffffbf;
  SVar2 = GetKeyState(0x11);
  uVar3 = (uint)(SVar2 < 0) << 7 | *(uint *)(param_1 + 0x4a4) & 0xffffff7f;
  *(uint *)(param_1 + 0x4a4) = uVar3 | 0x400;
  if ((local_30 == *(WPARAM *)(param_1 + 0x4b4)) && (uVar1 == uVar3)) {
    if (*(int *)(param_1 + 0x34) != 0) {
      FUN_01053550(param_1,param_4,param_5);
    }
    if (local_30 == 0xffffffff) {
      iVar4 = (-(uint)((*(uint *)(param_1 + 0x4a4) & 4) != 0) & 0xffff8088) + 0x7f88;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x4a0);
    }
  }
  else {
    if (*(int *)(param_1 + 0x34) != 0) {
      FUN_01053530(param_1);
    }
    if (wParam != 0xffffffff) {
      local_18 = 0xf;
      local_1c = SendMessageA(param_2,0x102c,wParam,0xf);
      local_1c = local_1c & 0xfffffff7;
      SendMessageA(param_2,0x102b,wParam,(LPARAM)local_28);
      FUN_01147860(param_2,wParam);
      *(uint *)(param_1 + 0x4a4) = *(uint *)(param_1 + 0x4a4) & 0xfffffff7;
    }
    if (local_30 == 0xffffffff) {
      uVar7 = 0;
    }
    else {
      LVar5 = SendMessageA(param_3,0x110a,9,0);
      iVar4 = FUN_0112eb70(param_3,LVar5);
      iVar6 = FUN_011317a0(param_2,local_30);
      uVar7 = *(undefined4 *)(*(int *)(iVar4 + 8) + iVar6 * 4);
    }
    FUN_01147250(param_1,uVar7);
    if ((*(uint *)(param_1 + 0x4a4) & 0x100) == 0) {
      iVar4 = 0x7f88;
    }
    else {
      if (local_30 != 0xffffffff) {
        local_18 = 0xf;
        local_1c = SendMessageA(param_2,0x102c,local_30,0xf);
        local_1c = local_1c | 8;
        SendMessageA(param_2,0x102b,local_30,(LPARAM)local_28);
        FUN_01147860(param_2,local_30);
        *(uint *)(param_1 + 0x4a4) = *(uint *)(param_1 + 0x4a4) | 8;
      }
      iVar4 = ((*(uint *)(param_1 + 0x4a4) & 4) != 0) + 0xf;
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      FUN_01053500(param_1,param_4,param_5);
    }
  }
  if (iVar4 != *(int *)(param_1 + 0x4a0)) {
    *(int *)(param_1 + 0x4a0) = iVar4;
    hCursor = (HCURSOR)_SfGetUICursor_4(iVar4);
    SetCursor(hCursor);
    *(WPARAM *)(param_1 + 0x4b4) = local_30;
    return;
  }
  *(WPARAM *)(param_1 + 0x4b4) = local_30;
  return;
}


