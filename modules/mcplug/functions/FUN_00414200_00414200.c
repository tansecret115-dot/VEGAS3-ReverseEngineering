/* Module: mcplug.dll
   Function: FUN_00414200
   Address: 00414200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00414200(void *this,HWND param_1)

{
  int iVar1;
  uint uVar2;
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
  LRESULT LVar3;
  int iVar4;
  CHAR local_40 [64];
  
  iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x44) + 0x424) + 0x3e);
  if (iVar1 != 0) {
    hWnd = GetDlgItem(param_1,0x42e);
    hWnd_00 = GetDlgItem(param_1,1099);
    hWnd_01 = GetDlgItem(param_1,0x46f);
    hWnd_02 = GetDlgItem(param_1,0x451);
    hWnd_03 = GetDlgItem(param_1,0x425);
    hWnd_04 = GetDlgItem(param_1,0x452);
    hWnd_05 = GetDlgItem(param_1,0x453);
    hWnd_06 = GetDlgItem(param_1,0x428);
    hWnd_07 = GetDlgItem(param_1,0x45a);
    hWnd_08 = GetDlgItem(param_1,0x454);
    hWnd_09 = GetDlgItem(param_1,0x429);
    hWnd_10 = GetDlgItem(param_1,0x45c);
    hWnd_11 = GetDlgItem(param_1,0x44a);
    hWnd_12 = GetDlgItem(param_1,0x418);
    hWnd_13 = GetDlgItem(param_1,0x41b);
    hWnd_14 = GetDlgItem(param_1,0x41c);
    hWnd_15 = GetDlgItem(param_1,0x41e);
    hWnd_16 = GetDlgItem(param_1,0x471);
    LVar3 = SendMessageA(hWnd_11,0x147,0,0);
    *(LRESULT *)(iVar1 + 0x244) = LVar3;
    LVar3 = SendMessageA(hWnd_12,0x147,0,0);
    *(LRESULT *)(iVar1 + 0x218) = LVar3;
    LVar3 = SendMessageA(hWnd_13,0x147,0,0);
    switch(LVar3) {
    case 1:
      *(undefined4 *)(iVar1 + 0x21c) = 2;
      break;
    case 2:
      *(undefined4 *)(iVar1 + 0x21c) = 4;
      break;
    case 3:
      *(undefined4 *)(iVar1 + 0x21c) = 5;
      break;
    case 4:
      *(undefined4 *)(iVar1 + 0x21c) = 6;
      break;
    case 5:
      *(undefined4 *)(iVar1 + 0x21c) = 7;
      break;
    default:
      *(undefined4 *)(iVar1 + 0x21c) = 1;
    }
    LVar3 = SendMessageA(hWnd_14,0x147,0,0);
    switch(LVar3) {
    case 1:
      *(undefined4 *)(iVar1 + 0x220) = 2;
      break;
    case 2:
      *(undefined4 *)(iVar1 + 0x220) = 4;
      break;
    case 3:
      *(undefined4 *)(iVar1 + 0x220) = 5;
      break;
    case 4:
      *(undefined4 *)(iVar1 + 0x220) = 6;
      break;
    case 5:
      *(undefined4 *)(iVar1 + 0x220) = 7;
      break;
    case 6:
      *(undefined4 *)(iVar1 + 0x220) = 8;
      break;
    default:
      *(undefined4 *)(iVar1 + 0x220) = 1;
    }
    LVar3 = SendMessageA(hWnd_15,0x147,0,0);
    switch(LVar3) {
    case 1:
      *(undefined4 *)(iVar1 + 0x224) = 2;
      break;
    case 2:
      *(undefined4 *)(iVar1 + 0x224) = 4;
      break;
    case 3:
      *(undefined4 *)(iVar1 + 0x224) = 5;
      break;
    case 4:
      *(undefined4 *)(iVar1 + 0x224) = 6;
      break;
    case 5:
      *(undefined4 *)(iVar1 + 0x224) = 7;
      break;
    default:
      *(undefined4 *)(iVar1 + 0x224) = 1;
    }
    LVar3 = SendMessageA(hWnd,0xf0,0,0);
    *(uint *)(iVar1 + 0xf4) = (uint)(LVar3 == 1);
    LVar3 = SendMessageA(hWnd_00,0xf0,0,0);
    uVar2 = (uint)(LVar3 == 1);
    *(uint *)(iVar1 + 0x24c) = uVar2;
    *(uint *)(iVar1 + 0x250) = uVar2;
    *(uint *)(iVar1 + 0x254) = uVar2;
    LVar3 = SendMessageA(hWnd_01,0xf0,0,0);
    *(uint *)(iVar1 + 0x230) = (uint)(LVar3 == 1);
    LVar3 = SendMessageA(hWnd_02,0xf0,0,0);
    *(uint *)(iVar1 + 0x264) = (uint)(LVar3 == 1);
    LVar3 = SendMessageA(hWnd_03,0xf0,0,0);
    *(uint *)(iVar1 + 0x268) = (uint)(LVar3 == 1);
    LVar3 = SendMessageA(hWnd_04,0xf0,0,0);
    *(uint *)(iVar1 + 0x26c) = (uint)(LVar3 == 1);
    LVar3 = SendMessageA(hWnd_05,0xf0,0,0);
    *(uint *)(iVar1 + 0x270) = (uint)(LVar3 == 1);
    LVar3 = SendMessageA(hWnd_06,0xf0,0,0);
    *(uint *)(iVar1 + 0x274) = (uint)(LVar3 == 1);
    LVar3 = SendMessageA(hWnd_07,0xf0,0,0);
    *(uint *)(iVar1 + 0x278) = (uint)(LVar3 == 1);
    LVar3 = SendMessageA(hWnd_08,0xf0,0,0);
    *(uint *)(iVar1 + 0x27c) = (uint)(LVar3 == 1);
    LVar3 = SendMessageA(hWnd_09,0xf0,0,0);
    *(uint *)(iVar1 + 0x280) = (uint)(LVar3 == 1);
    LVar3 = SendMessageA(hWnd_10,0xf0,0,0);
    *(uint *)(iVar1 + 0x284) = (uint)(LVar3 == 1);
    GetWindowTextA(hWnd_16,local_40,0x40);
    iVar4 = FUN_00430020(local_40,(undefined4 *)0x0);
    *(int *)(iVar1 + 0xe4) = iVar4 / 2;
    return 0;
  }
  return 0x80070057;
}


