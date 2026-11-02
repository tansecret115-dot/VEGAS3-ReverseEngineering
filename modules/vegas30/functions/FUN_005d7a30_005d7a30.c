/* Module: vegas30.exe
   Function: FUN_005d7a30
   Address: 005d7a30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d7a30(HWND param_1,int param_2)

{
  HWND pHVar1;
  HWND hWnd;
  int cx;
  int iVar2;
  LPCSTR lpString2;
  LPARAM LVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  LONG LVar6;
  double *pdVar7;
  undefined4 *puVar8;
  int iVar9;
  char *pcVar10;
  double *pdVar11;
  undefined4 uVar12;
  int local_490;
  int local_488;
  WPARAM local_484;
  tagRECT local_480;
  undefined4 local_470 [4];
  undefined4 local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 local_454;
  char local_448 [64];
  CHAR local_408 [1028];
  
  iVar2 = DAT_0064b324;
  iVar9 = DAT_0064b320;
  pHVar1 = (HWND)FUN_0043bc10(param_1,0x4f8,&DAT_0062a1b0,4,0);
  hWnd = GetDlgItem(param_1,0x435);
  GetWindowRect(hWnd,&local_480);
  MapWindowPoints((HWND)0x0,param_1,(LPPOINT)&local_480,2);
  LVar6 = local_480.right;
  local_480.left = local_480.right;
  iVar9 = local_480.right + 0x20 + iVar9 * 4;
  cx = iVar9 - local_480.right;
  local_480.bottom = iVar2 + 8 + local_480.top;
  local_480.right = iVar9;
  SetWindowPos(pHVar1,(HWND)0x0,LVar6,local_480.top,cx,local_480.bottom - local_480.top,0x14);
  pHVar1 = GetDlgItem(param_1,0x435);
  puVar8 = &DAT_00646980;
  do {
    FUN_005d7470(puVar8,local_408,0x400);
    SendMessageA(pHVar1,0x143,0,(LPARAM)local_408);
    puVar8 = puVar8 + 10;
  } while ((int)puVar8 < 0x646b60);
  local_490 = FUN_005d74f0();
  iVar9 = 0;
  if (0 < local_490) {
    do {
      iVar2 = FUN_005d7550(iVar9,local_408,0x400);
      if (iVar2 != 0) {
        lpString2 = (LPCSTR)_SfGetString_8(DAT_00647204,0x5637);
        iVar2 = lstrcmpA(local_408,lpString2);
        if (iVar2 == 0) {
          FUN_005d7640(iVar9);
          iVar9 = iVar9 + -1;
          local_490 = local_490 + -1;
        }
        else {
          SendMessageA(pHVar1,0x143,0,(LPARAM)local_408);
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < local_490);
  }
  local_488 = FUN_005d7730(param_2,1);
  if (local_488 == -1) {
    puVar8 = local_470;
    for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    LVar3 = _SfGetString_8(DAT_00647204,0x5637);
    local_470[0] = 1;
    local_470[2] = *(undefined4 *)(param_2 + 0xd74);
    local_470[3] = *(undefined4 *)(param_2 + 0xd78);
    local_460 = *(undefined4 *)(param_2 + 0xd80);
    local_45c = *(undefined4 *)(param_2 + 0xd84);
    local_470[1] = *(undefined4 *)(param_2 + 0xd7c);
    local_458 = *(undefined4 *)(param_2 + 0xda0);
    local_454 = *(undefined4 *)(param_2 + 0xda4);
    iVar9 = FUN_005d75c0(local_490,LVar3,local_470);
    if (iVar9 == 0) {
      local_488 = 0;
    }
    else {
      local_488 = SendMessageA(pHVar1,0x143,0,LVar3);
    }
  }
  pHVar1 = GetDlgItem(param_1,0x436);
  LVar3 = _SfGetString_8(DAT_00647204,0x561a);
  SendMessageA(pHVar1,0x143,0,LVar3);
  LVar3 = _SfGetString_8(DAT_00647204,0x561c);
  SendMessageA(pHVar1,0x143,0,LVar3);
  LVar3 = _SfGetString_8(DAT_00647204,0x561e);
  SendMessageA(pHVar1,0x143,0,LVar3);
  pHVar1 = GetDlgItem(param_1,0x4a9);
  pcVar10 = (char *)&DAT_00646b60;
  do {
    uVar5 = *(undefined4 *)(pcVar10 + 0xc);
    uVar12 = *(undefined4 *)(pcVar10 + 8);
    uVar4 = _SfGetString_8(DAT_00647204,*(undefined4 *)pcVar10);
    SfPrintF(local_408,uVar4,uVar12,uVar5);
    SendMessageA(pHVar1,0x143,0,(LPARAM)local_408);
    pcVar10 = pcVar10 + 0x10;
  } while (pcVar10 < s___0_0_0000_00000_0_0_00646bce + 2);
  pHVar1 = GetDlgItem(param_1,0x438);
  local_484 = 0;
  local_490 = 0;
  pdVar11 = (double *)&DAT_00646990;
  do {
    iVar9 = 0;
    if (0x646990 < (int)pdVar11) {
      pdVar7 = (double *)&DAT_00646990;
      do {
        if ((*pdVar7 - _DAT_0062a1a0 <= *pdVar11) && (*pdVar11 <= _DAT_0062a1a0 + *pdVar7))
        goto LAB_005d7dc0;
        iVar9 = iVar9 + 1;
        pdVar7 = pdVar7 + 5;
      } while (iVar9 < local_490);
    }
    uVar5 = _SfGetString_8(DAT_00647204,*(undefined4 *)(pdVar11 + 2));
    SfPrintF(local_408,"%.4f (%s)",*(undefined4 *)pdVar11,*(undefined4 *)((int)pdVar11 + 4),uVar5);
    SendMessageA(pHVar1,0x143,0,(LPARAM)local_408);
    SendMessageA(pHVar1,0x151,local_484,local_490);
    local_484 = local_484 + 1;
LAB_005d7dc0:
    pdVar11 = pdVar11 + 5;
    local_490 = local_490 + 1;
    if (0x646b6f < (int)pdVar11) {
      pHVar1 = GetDlgItem(param_1,0x43c);
      LVar3 = _SfGetString_8(DAT_00647204,0x563a);
      SendMessageA(pHVar1,0x143,0,LVar3);
      LVar3 = _SfGetString_8(DAT_00647204,0x563b);
      SendMessageA(pHVar1,0x143,0,LVar3);
      LVar3 = _SfGetString_8(DAT_00647204,0x563c);
      SendMessageA(pHVar1,0x143,0,LVar3);
      LVar3 = _SfGetString_8(DAT_00647204,0x563d);
      SendMessageA(pHVar1,0x143,0,LVar3);
      *(int *)(param_2 + 0xd70) = local_488;
      FUN_005d6590(param_1,param_2);
      pcVar10 = (char *)(param_2 + 0x128);
      pHVar1 = GetDlgItem(param_1,0x67);
      SfSetWindowText(pHVar1,pcVar10);
      local_448[0] = '\0';
      SfFormatDiskFreeSpace((char *)(param_2 + 0x128),local_448);
      pcVar10 = local_448;
      pHVar1 = GetDlgItem(param_1,0x69);
      SfSetWindowText(pHVar1,pcVar10);
      pHVar1 = GetDlgItem(param_1,0x439);
      LVar6 = SetWindowLongA(pHVar1,-4,0x5d7ed0);
      *(LONG *)(param_2 + 0xdc8) = LVar6;
      return;
    }
  } while( true );
}


