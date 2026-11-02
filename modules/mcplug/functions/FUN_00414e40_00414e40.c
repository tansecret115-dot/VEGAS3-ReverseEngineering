/* Module: mcplug.dll
   Function: FUN_00414e40
   Address: 00414e40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00414e40(void *this,HWND param_1)

{
  int iVar1;
  HWND hWnd;
  HWND hWnd_00;
  HWND hWnd_01;
  HWND hWnd_02;
  HWND hWnd_03;
  HWND hWnd_04;
  HWND hWnd_05;
  HWND hWnd_06;
  HWND hWnd_07;
  HWND hWnd_08;
  HWND hWnd_09;
  HWND hWnd_10;
  HWND hWnd_11;
  HWND hWnd_12;
  HWND hWnd_13;
  HWND hWnd_14;
  HWND hWnd_15;
  HWND hWnd_16;
  HWND hWnd_17;
  LRESULT LVar2;
  undefined4 uVar3;
  CHAR local_40 [64];
  
  iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x44) + 0x424) + 0x3e);
  if (iVar1 != 0) {
    hWnd = GetDlgItem(param_1,0x42e);
    hWnd_00 = GetDlgItem(param_1,0x425);
    hWnd_01 = GetDlgItem(param_1,0x423);
    hWnd_02 = GetDlgItem(param_1,0x424);
    hWnd_03 = GetDlgItem(param_1,0x426);
    hWnd_04 = GetDlgItem(param_1,0x431);
    hWnd_05 = GetDlgItem(param_1,0x432);
    hWnd_06 = GetDlgItem(param_1,0x415);
    hWnd_07 = GetDlgItem(param_1,0x416);
    hWnd_08 = GetDlgItem(param_1,0x417);
    hWnd_09 = GetDlgItem(param_1,0x42f);
    hWnd_10 = GetDlgItem(param_1,0x418);
    hWnd_11 = GetDlgItem(param_1,0x430);
    hWnd_12 = GetDlgItem(param_1,0x42a);
    hWnd_13 = GetDlgItem(param_1,0x428);
    hWnd_14 = GetDlgItem(param_1,0x429);
    hWnd_15 = GetDlgItem(param_1,0x42b);
    hWnd_16 = GetDlgItem(param_1,0x42c);
    hWnd_17 = GetDlgItem(param_1,0x42d);
    if (*(int *)((int)this + 0x5c) != 1) {
      LVar2 = SendMessageA(hWnd,0x147,0,0);
      if (LVar2 == 1) {
        *(undefined4 *)(iVar1 + 0x94) = 1;
        *(undefined4 *)(iVar1 + 0x54) = 1;
      }
      else if (LVar2 == 2) {
        *(undefined4 *)(iVar1 + 0x94) = 2;
        *(undefined4 *)(iVar1 + 0x54) = 2;
      }
      else {
        *(undefined4 *)(iVar1 + 0x94) = 0;
        *(undefined4 *)(iVar1 + 0x54) = 0;
      }
    }
    LVar2 = SendMessageA(hWnd_08,0x147,0,0);
    switch(LVar2) {
    case 1:
      *(undefined1 *)(iVar1 + 0x3bc) = 2;
      break;
    case 2:
      *(undefined1 *)(iVar1 + 0x3bc) = 4;
      break;
    case 3:
      *(undefined1 *)(iVar1 + 0x3bc) = 8;
      break;
    case 4:
      *(undefined1 *)(iVar1 + 0x3bc) = 0x10;
      break;
    default:
      *(undefined1 *)(iVar1 + 0x3bc) = 0;
    }
    LVar2 = SendMessageA(hWnd_10,0x147,0,0);
    if (LVar2 == 1) {
      *(undefined4 *)(iVar1 + 0x3dd) = 1;
    }
    else {
      *(undefined4 *)(iVar1 + 0x3dd) = 0;
    }
    if (*(int *)((int)this + 0x5c) != 1) {
      LVar2 = SendMessageA(hWnd_01,0xf0,0,0);
      *(uint *)(iVar1 + 0x2b0) = (uint)(LVar2 == 1);
      LVar2 = SendMessageA(hWnd_02,0xf0,0,0);
      *(uint *)(iVar1 + 0x288) = (uint)(LVar2 == 1);
      LVar2 = SendMessageA(hWnd_03,0xf0,0,0);
      *(uint *)(iVar1 + 0x3e9) = (uint)(LVar2 == 1);
    }
    LVar2 = SendMessageA(hWnd_09,0xf0,0,0);
    if (LVar2 == 1) {
      *(byte *)(iVar1 + 0x3bc) = *(byte *)(iVar1 + 0x3bc) | 1;
    }
    GetWindowTextA(hWnd_00,local_40,0x40);
    uVar3 = FUN_00430020(local_40,(undefined4 *)0x0);
    *(undefined4 *)(iVar1 + 0xa8) = uVar3;
    if (*(int *)((int)this + 0x5c) != 1) {
      GetWindowTextA(hWnd_04,local_40,0x40);
      uVar3 = FUN_00430020(local_40,(undefined4 *)0x0);
      *(undefined4 *)(iVar1 + 0x228) = uVar3;
      GetWindowTextA(hWnd_05,local_40,0x40);
      uVar3 = FUN_00430020(local_40,(undefined4 *)0x0);
      *(undefined4 *)(iVar1 + 0x22c) = uVar3;
    }
    GetWindowTextA(hWnd_06,local_40,0x40);
    uVar3 = FUN_00430020(local_40,(undefined4 *)0x0);
    *(undefined4 *)(iVar1 + 0x2b4) = uVar3;
    GetWindowTextA(hWnd_07,local_40,0x40);
    uVar3 = FUN_00430020(local_40,(undefined4 *)0x0);
    *(undefined4 *)(iVar1 + 0x2b8) = uVar3;
    LVar2 = SendMessageA(hWnd_11,0xf0,0,0);
    *(uint *)(iVar1 + 0x58) = (uint)(LVar2 == 1);
    LVar2 = SendMessageA(hWnd_12,0xf0,0,0);
    *(uint *)(iVar1 + 0x70) = (uint)(LVar2 == 1);
    LVar2 = SendMessageA(hWnd_13,0xf0,0,0);
    *(uint *)(iVar1 + 0x74) = (uint)(LVar2 == 1);
    LVar2 = SendMessageA(hWnd_14,0xf0,0,0);
    *(uint *)(iVar1 + 0x48) = (uint)(LVar2 == 1);
    LVar2 = SendMessageA(hWnd_16,0xf0,0,0);
    *(uint *)(iVar1 + 0x84) = (uint)(LVar2 == 1);
    LVar2 = SendMessageA(hWnd_17,0xf0,0,0);
    *(uint *)(iVar1 + 0x8c) = (uint)(LVar2 == 1);
    GetWindowTextA(hWnd_15,local_40,0x40);
    uVar3 = FUN_00430020(local_40,(undefined4 *)0x0);
    *(undefined4 *)(iVar1 + 0x78) = uVar3;
    return 0;
  }
  return 0x80070057;
}


