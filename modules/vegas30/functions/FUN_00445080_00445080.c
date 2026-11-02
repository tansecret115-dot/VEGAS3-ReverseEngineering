/* Module: vegas30.exe
   Function: FUN_00445080
   Address: 00445080
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00445080(int param_1,int param_2)

{
  HWND pHVar1;
  HWND pHVar2;
  tagRECT local_10;
  
  if (*(int *)(param_1 + 0xb4) != 0) {
    pHVar2 = *(HWND *)(param_1 + 0x234);
    pHVar1 = GetFocus();
    if (pHVar1 == pHVar2) {
      pHVar2 = GetParent(pHVar2);
      SetFocus(pHVar2);
    }
    SetWindowLongA(*(HWND *)(param_1 + 0x234),-0x15,0);
    FUN_005b83b0(*(undefined4 *)(param_1 + 0x88),1);
    _SfVideoFilterCache_UnInitView_4(*(undefined4 *)(param_1 + 0xb4));
    FUN_005b84d0(*(undefined4 *)(param_1 + 0x88),1);
    *(undefined4 *)(param_1 + 0xb4) = 0;
    SetFocus(*(HWND *)(param_1 + 8));
  }
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 2;
  GetClientRect(*(HWND *)(param_1 + 0x84),&local_10);
  FUN_004475b0(param_1,local_10.right - local_10.left,local_10.bottom - local_10.top,0,param_2);
  if (param_2 == 0) {
    InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)0x0,0);
  }
  return;
}


