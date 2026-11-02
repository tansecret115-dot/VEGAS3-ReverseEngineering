/* Module: vegas30k.dll
   Function: FUN_01147860
   Address: 01147860
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01147860(HWND param_1,WPARAM param_2)

{
  RECT *pRVar1;
  RECT local_30;
  RECT local_20;
  tagRECT local_10;
  
  if (&stack0x00000000 == (undefined1 *)0x20) {
    pRVar1 = (RECT *)0x0;
  }
  else {
    local_20.left = 2;
    pRVar1 = &local_20;
  }
  SendMessageA(param_1,0x100e,param_2,(LPARAM)pRVar1);
  if (&stack0x00000000 == (undefined1 *)0x30) {
    pRVar1 = (RECT *)0x0;
  }
  else {
    local_30.left = 1;
    pRVar1 = &local_30;
  }
  SendMessageA(param_1,0x100e,param_2,(LPARAM)pRVar1);
  UnionRect(&local_10,&local_20,&local_30);
  InvalidateRect(param_1,&local_10,1);
  UpdateWindow(param_1);
  return;
}


