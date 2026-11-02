/* Module: vegas30.exe
   Function: FUN_0054f510
   Address: 0054f510
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054f510(int param_1,int param_2,int param_3)

{
  uint uVar1;
  HWND hWnd;
  
  if ((param_2 == 0) || (param_3 = *(int *)(param_1 + 0x84) + 1, param_3 < 3)) {
    if (param_3 == 2) {
      if (*(int *)(param_1 + 0x84) != 2) {
        FUN_0054f6d0(param_1);
        ShowWindow(*(HWND *)(param_1 + 0x9c),0);
        ShowWindow(*(HWND *)(param_1 + 0x98),1);
        SetFocus(*(HWND *)(param_1 + 0x98));
        *(undefined4 *)(param_1 + 0x84) = 2;
      }
      goto LAB_0054f6a7;
    }
    if (param_3 == 0) goto LAB_0054f588;
    if ((param_3 != 1) || (*(int *)(param_1 + 0x84) == 1)) goto LAB_0054f6a7;
    FUN_0054f6d0(param_1);
    if (*(int *)(param_1 + 0x84) == 2) {
      ShowWindow(*(HWND *)(param_1 + 0x98),0);
      ShowWindow(*(HWND *)(param_1 + 0x9c),1);
    }
    *(undefined4 *)(param_1 + 0x84) = 1;
    uVar1 = GetWindowLongA(*(HWND *)(param_1 + 0x9c),-0x10);
    if ((uVar1 & 3) == 0) {
      SetWindowLongA(*(HWND *)(param_1 + 0x9c),-0x10,uVar1 & 0xfffffbff | 3);
    }
    SendMessageA(*(HWND *)(param_1 + 0x9c),0x101e,0,(uint)*(ushort *)(param_1 + 0x588));
    hWnd = *(HWND *)(param_1 + 0x9c);
  }
  else {
LAB_0054f588:
    if (*(int *)(param_1 + 0x84) == 0) goto LAB_0054f6a7;
    FUN_0054f6d0(param_1);
    if (*(int *)(param_1 + 0x84) == 2) {
      ShowWindow(*(HWND *)(param_1 + 0x98),0);
      ShowWindow(*(HWND *)(param_1 + 0x9c),1);
    }
    *(undefined4 *)(param_1 + 0x84) = 0;
    uVar1 = GetWindowLongA(*(HWND *)(param_1 + 0x9c),-0x10);
    if (((byte)uVar1 & 3) == 3) {
      SetWindowLongA(*(HWND *)(param_1 + 0x9c),-0x10,uVar1 & 0xfffffffc | 0x400);
    }
    FUN_0054a000(param_1);
    hWnd = *(HWND *)(param_1 + 0x9c);
  }
  SetFocus(hWnd);
LAB_0054f6a7:
  InvalidateRect(*(HWND *)(param_1 + 0xa0),(RECT *)0x0,1);
  FUN_0054d0c0(param_1);
  return;
}


