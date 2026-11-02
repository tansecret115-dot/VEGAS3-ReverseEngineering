/* Module: vidcap30.exe
   Function: FUN_004f93e0
   Address: 004f93e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f93e0(int param_1)

{
  HWND pHVar1;
  HWND hWnd;
  LRESULT LVar2;
  LONG LVar3;
  int iVar4;
  uint uVar5;
  WPARAM wParam;
  uint *local_45c;
  HWND local_458;
  uint local_454;
  uint local_450;
  HWND local_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined1 local_438 [12];
  undefined4 local_42c;
  undefined4 local_428;
  char local_410 [520];
  char local_208 [520];
  
  pHVar1 = *(HWND *)(param_1 + 0x1c);
  hWnd = *(HWND *)(param_1 + 0x18);
  local_44c = pHVar1;
  local_458 = GetFocus();
  local_454 = FUN_004f4690(pHVar1,*(uint *)(param_1 + 0x4e0) >> 0x11 & 1);
  LVar2 = SendMessageA(hWnd,0x110a,9,0);
  if (LVar2 == 0) {
    local_410[0] = '\0';
  }
  else {
    local_448 = FUN_004f7a20(hWnd,LVar2);
    FUN_004f8340(hWnd,LVar2,local_410);
  }
  LVar2 = SendMessageA(hWnd,0x110a,5,0);
  if (LVar2 == 0) {
    local_208[0] = '\0';
  }
  else {
    FUN_004f8340(hWnd,LVar2,local_208);
  }
  _SfList_CreateExZ_32(&local_45c,4,0x10,0x10,0x40000002,0,0,0);
  FUN_004f9620(hWnd,0xffff0000,local_45c);
  FUN_004f6f40(*(undefined4 *)(param_1 + 0x3c),hWnd,0xffff0000,FUN_004f6f00);
  SendMessageA(hWnd,0xb,0,0);
  SendMessageA(hWnd,0x110b,9,0);
  SendMessageA(hWnd,0x1101,0,-0x10000);
  LVar3 = GetWindowLongA(hWnd,-0x15);
  FUN_00497a20(*(undefined4 *)(param_1 + 0x3c),LVar3,1);
  _SfList_DeleteList_16(LVar3,0,0xffffffff,0);
  local_444 = 0x10000000;
  local_440 = 0;
  local_43c = 0;
  _SfList_AllocAndInsertItem_20(LVar3,&local_444,0xc,0,0);
  FUN_004f6fe0(param_1,0xffff0000,0);
  uVar5 = 0;
  local_450 = *local_45c;
  if (local_450 != 0) {
    do {
      iVar4 = *(int *)(local_45c[2] + uVar5 * 4);
      if (iVar4 == 0) {
        return;
      }
      FUN_004f8100(param_1,iVar4,0,1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_450);
  }
  _SfList_Destroy_4(local_45c);
  if (local_410[0] != '\0') {
    FUN_004f8100(param_1,local_410,1,local_448);
  }
  pHVar1 = local_44c;
  uVar5 = SendMessageA(local_44c,0x1004,0,0);
  if (uVar5 != 0) {
    if (local_458 == pHVar1) {
      local_428 = 0xf;
      local_42c = 1;
      SendMessageA(pHVar1,0x102b,0,(LPARAM)local_438);
    }
    wParam = local_454;
    if (uVar5 <= local_454) {
      wParam = uVar5 - 1;
    }
    SendMessageA(pHVar1,0x1013,wParam,0);
  }
  if ((local_208[0] != '\0') && (iVar4 = FUN_004f8050(hWnd,0xffff0000,local_208), iVar4 != 0)) {
    SendMessageA(hWnd,0x110b,5,iVar4);
  }
  SendMessageA(hWnd,0xb,1,0);
  return;
}


