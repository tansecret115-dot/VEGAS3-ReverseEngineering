/* Module: vidcap30.exe
   Function: FUN_004f2640
   Address: 004f2640
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f2640(int param_1)

{
  HWND hWnd;
  HWND hWnd_00;
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  LRESULT LVar6;
  uint uVar7;
  int iVar8;
  uchar *puVar9;
  WPARAM *pWVar10;
  undefined4 *puVar11;
  uint local_2ac;
  uint local_2a8;
  uint local_2a4;
  uint local_2a0;
  int local_294 [5];
  uint *local_280;
  int *local_274;
  int local_26c;
  WPARAM local_268 [5];
  uchar *local_254;
  undefined4 local_248 [10];
  tagRECT local_220;
  uchar local_210 [260];
  undefined4 *local_10c;
  int *local_108;
  undefined1 local_104 [260];
  
  hWnd = *(HWND *)(param_1 + 0x24);
  hWnd_00 = *(HWND *)(param_1 + 0x20);
  puVar3 = (undefined4 *)GetWindowLongA(hWnd,-0x15);
  FUN_004f25f0(hWnd);
  puVar9 = local_210;
  for (iVar8 = 0x43; iVar8 != 0; iVar8 = iVar8 + -1) {
    puVar9[0] = '\0';
    puVar9[1] = '\0';
    puVar9[2] = '\0';
    puVar9[3] = '\0';
    puVar9 = puVar9 + 4;
  }
  _mbscpy(local_210,(uchar *)(param_1 + 0x4f0));
  pWVar10 = local_268;
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pWVar10 = 0;
    pWVar10 = pWVar10 + 1;
  }
  local_268[0] = *(WPARAM *)(param_1 + 4);
  local_268[1] = *(WPARAM *)(param_1 + 0x2c);
  local_254 = local_210;
  local_268[2] = 0x28;
  SendMessageA(*(HWND *)(param_1 + 8),0x4e,local_268[1],(LPARAM)local_268);
  uVar4 = 0;
  if (local_10c != (undefined4 *)0x0) {
    uVar4 = *local_10c;
  }
  *puVar3 = uVar4;
  piVar5 = local_294;
  for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  if ((local_108 == (int *)0x0) || (local_26c = *local_108, local_26c == 0)) {
    local_294[0] = 1;
    local_280 = (uint *)_SfGetString2_8(DAT_005c16d8,0x1084);
    SendMessageA(hWnd,0x1007,0,(LPARAM)local_294);
    SendMessageA(hWnd,0x1011,0,(LPARAM)local_280);
  }
  else {
    puVar11 = local_248;
    for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    iVar8 = 0;
    local_2ac = 0;
    local_2a4 = 0;
    local_2a8 = 0;
    local_2a0 = 0;
    local_248[0] = 1;
    if (0 < local_26c) {
      do {
        puVar1 = *(uint **)(local_108[2] + iVar8 * 4);
        piVar5 = calloc(1,0x18);
        if ((puVar1 == (uint *)0x0) || (piVar5 == (int *)0x0)) break;
        *piVar5 = iVar8;
        piVar5[2] = *puVar1;
        piVar5[3] = puVar1[1];
        piVar5[4] = puVar1[2];
        piVar5[5] = puVar1[3];
        local_280 = puVar1 + 0xc;
        local_294[0] = 5;
        local_294[2] = 0;
        local_294[1] = iVar8;
        local_274 = piVar5;
        SendMessageA(hWnd,0x1007,0,(LPARAM)local_294);
        LVar6 = SendMessageA(hWnd,0x1011,0,(LPARAM)local_280);
        if ((int)local_2ac < (int)(LVar6 + 0xcU)) {
          local_2ac = LVar6 + 0xcU;
        }
        local_280 = (uint *)local_104;
        local_294[0] = 1;
        local_294[2] = 1;
        _SfNanoTimeToText_20(local_104,local_248,*puVar1,puVar1[1],0);
        SendMessageA(hWnd,0x1006,0,(LPARAM)local_294);
        LVar6 = SendMessageA(hWnd,0x1011,0,(LPARAM)local_104);
        if ((int)local_2a4 < (int)(LVar6 + 0xcU)) {
          local_2a4 = LVar6 + 0xcU;
        }
        local_294[2] = 2;
        _SfNanoTimeToText_20
                  (local_104,local_248,puVar1[2] + *puVar1,
                   puVar1[3] + puVar1[1] + (uint)CARRY4(puVar1[2],*puVar1),0);
        SendMessageA(hWnd,0x1006,0,(LPARAM)local_294);
        LVar6 = SendMessageA(hWnd,0x1011,0,(LPARAM)local_104);
        if ((int)local_2a8 < (int)(LVar6 + 0xcU)) {
          local_2a8 = LVar6 + 0xcU;
        }
        local_294[2] = 3;
        _SfNanoTimeToText_20(local_104,local_248,puVar1[2],puVar1[3],0);
        SendMessageA(hWnd,0x1006,0,(LPARAM)local_294);
        LVar6 = SendMessageA(hWnd,0x1011,0,(LPARAM)local_104);
        if ((int)local_2a0 < (int)(LVar6 + 0xcU)) {
          local_2a0 = LVar6 + 0xcU;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_26c);
    }
    SendMessageA(hWnd,0x101e,1,local_2a4 & 0xffff);
    SendMessageA(hWnd,0x101e,2,local_2a8 & 0xffff);
    SendMessageA(hWnd,0x101e,3,local_2a0 & 0xffff);
    iVar8 = local_2a0 + local_2a8 + local_2a4;
    GetClientRect(hWnd,&local_220);
    uVar7 = local_220.right - iVar8;
    uVar2 = local_2ac;
    if ((int)local_2ac < (int)uVar7) {
      uVar2 = uVar7;
    }
    SendMessageA(hWnd,0x101e,0,uVar2 & 0xffff);
    puVar3[1] = local_2ac;
    puVar3[2] = iVar8;
    if (puVar3[3] != 0) {
      FUN_004f2a40(param_1,puVar3,puVar3[3] + -1);
    }
  }
  SetWindowTextA(hWnd_00,(LPCSTR)local_210);
  if ((local_10c != (undefined4 *)0x0) || (local_108 != (int *)0x0)) {
    local_268[0] = *(WPARAM *)(param_1 + 4);
    local_268[1] = *(WPARAM *)(param_1 + 0x2c);
    local_254 = local_210;
    local_268[2] = 0x29;
    SendMessageA(*(HWND *)(param_1 + 8),0x4e,local_268[1],(LPARAM)local_268);
  }
  return;
}


