/* Module: vegas30.exe
   Function: FUN_00446940
   Address: 00446940
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00446940(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  WPARAM wParam;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  code *pcVar7;
  int local_640;
  undefined1 local_638 [260];
  int local_534 [3];
  undefined1 local_528 [1320];
  
  piVar2 = local_534;
  for (iVar4 = 0x14d; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  piVar2 = (int *)FUN_004452b0(param_1);
  pcVar7 = SendMessageA_exref;
  if ((piVar2 == (int *)0x0) || (local_640 = *piVar2, local_640 == 0)) {
    local_534[0] = 0x534;
    local_534[1] = 0;
    SendMessageA(*(HWND *)(param_1 + 0x144),0x608,0,(LPARAM)local_534);
    puVar5 = (undefined4 *)(param_1 + 0xcc);
    iVar4 = 0x12;
    do {
      if (((HWND)*puVar5 != (HWND)0x0) && ((puVar5[-5] & 4) == 0)) {
        EnableWindow((HWND)*puVar5,(uint)puVar5[-5] >> 3 & 1);
      }
      puVar5 = puVar5 + 6;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  else {
    puVar5 = (undefined4 *)(param_1 + 0xcc);
    iVar4 = 0x12;
    do {
      if (((HWND)*puVar5 != (HWND)0x0) && ((*(byte *)(puVar5 + -5) & 4) == 0)) {
        EnableWindow((HWND)*puVar5,1);
      }
      puVar5 = puVar5 + 6;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (0x20 < local_640) {
      local_640 = 0x20;
    }
    iVar4 = 0;
    if (0 < local_640) {
      puVar6 = local_528;
      do {
        iVar1 = *(int *)(piVar2[2] + iVar4 * 4);
        iVar3 = FUN_00508960(local_638,iVar1,0x104);
        if (iVar3 == 0) {
          _SfLoadString_16(DAT_00647204,0x5078,puVar6,0x20);
        }
        else {
          FUN_0050ab70(local_638,puVar6,0x20);
        }
        *(int *)(puVar6 + 0x20) = iVar4;
        iVar4 = iVar4 + 1;
        *(uint *)(puVar6 + 0x24) = *(uint *)(iVar1 + 0x78) & 1;
        puVar6 = puVar6 + 0x28;
      } while (iVar4 < local_640);
    }
    wParam = FUN_00445160(param_1);
    if ((int)wParam < 0) {
      wParam = 0;
    }
    else if ((int)(local_640 - 1U) < (int)wParam) {
      wParam = local_640 - 1U;
    }
    FUN_00445200(param_1,wParam);
    pcVar7 = SendMessageA_exref;
    local_534[2] = ((uint)(1 < local_640) ^ local_534[2]) & 1 ^ local_534[2] | 6;
    local_534[0] = 0x534;
    local_534[1] = local_640;
    SendMessageA(*(HWND *)(param_1 + 0x144),0x608,0,(LPARAM)local_534);
    SendMessageA(*(HWND *)(param_1 + 0x144),0x602,wParam,0);
    if ((*(byte *)(param_1 + 0x130) & 1) != 0) {
      InvalidateRect(*(HWND *)(param_1 + 0x144),(RECT *)0x0,1);
    }
    FUN_00444b90(param_1,1);
    FUN_00448c50(param_1,wParam);
  }
  FUN_00446620(param_1);
  if (*(int *)(param_1 + 0xac) == 0) {
    (*pcVar7)(*(undefined4 *)(param_1 + 0x15c),0x411,0x4c6,8);
    (*pcVar7)(*(undefined4 *)(param_1 + 0x15c),0x411,0x4b5,8);
    (*pcVar7)(*(undefined4 *)(param_1 + 0x15c),0x411,0x4b6,8);
    (*pcVar7)(*(undefined4 *)(param_1 + 0x15c),0x411,0x4c9,8);
  }
  else if (*(int *)(param_1 + 0xa8) == 5) {
    (*pcVar7)(*(undefined4 *)(param_1 + 0x15c),0x411,0x4b5,8);
    (*pcVar7)(*(undefined4 *)(param_1 + 0x15c),0x411,0x4c6,4);
    (*pcVar7)(*(undefined4 *)(param_1 + 0x15c),0x411,0x4b6,4);
    FUN_004464a0(param_1);
  }
  else {
    (*pcVar7)(*(undefined4 *)(param_1 + 0x15c),0x411,0x4b5,4);
    (*pcVar7)(*(undefined4 *)(param_1 + 0x15c),0x411,0x4c6,8);
    (*pcVar7)(*(undefined4 *)(param_1 + 0x15c),0x411,0x4b6,4);
    (*pcVar7)(*(undefined4 *)(param_1 + 0x15c),0x411,0x4c9,4);
    FUN_004464a0(param_1);
  }
  InvalidateRect(*(HWND *)(param_1 + 0x264),(RECT *)0x0,0);
  UpdateWindow(*(HWND *)(param_1 + 0x264));
  FUN_00453250(DAT_00647630,0);
  return;
}


