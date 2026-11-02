/* Module: vegas30.exe
   Function: FUN_00423a00
   Address: 00423a00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00423a00(int param_1)

{
  HWND hWnd;
  HDC hdc;
  BOOL BVar1;
  LONG LVar2;
  tagRECT local_50;
  tagPAINTSTRUCT local_40;
  
  hWnd = *(HWND *)(param_1 + 4);
  hdc = BeginPaint(hWnd,&local_40);
  BVar1 = RectVisible(hdc,&local_40.rcPaint);
  if (BVar1 != 0) {
    GetClientRect(hWnd,&local_50);
    LVar2 = GetWindowLongA(hWnd,-0x10);
    FUN_004236f0(param_1,hdc,&local_40.rcPaint,&local_50,LVar2);
  }
  EndPaint(hWnd,&local_40);
  return;
}


