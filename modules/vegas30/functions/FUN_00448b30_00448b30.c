/* Module: vegas30.exe
   Function: FUN_00448b30
   Address: 00448b30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00448b30(int param_1,int param_2)

{
  tagRECT local_10;
  
  if (param_1 != 0) {
    GetClientRect(*(HWND *)(param_1 + 0x84),&local_10);
    if (param_2 == 0) {
      *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 2;
      *(undefined4 *)(param_1 + 0xb4) = 0;
      SetWindowLongA(*(HWND *)(param_1 + 0x234),-0x15,0);
      MoveWindow(*(HWND *)(param_1 + 0x84),local_10.left,local_10.top,local_10.right - local_10.left
                 ,local_10.bottom - local_10.top,0);
      FUN_00446620(param_1);
      return;
    }
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfffffffd;
    SetWindowLongA(*(HWND *)(param_1 + 0x234),-0x15,param_2 + 0x1c);
    _SfVfxView_ShowPropPage_4(param_2 + 0x1c);
    *(int *)(param_1 + 0xb4) = param_2;
    MoveWindow(*(HWND *)(param_1 + 0x84),local_10.left,local_10.top,local_10.right - local_10.left,
               local_10.bottom - local_10.top,0);
    FUN_00446620(param_1);
  }
  return;
}


