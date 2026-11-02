/* Module: vegas30.exe
   Function: FUN_00491640
   Address: 00491640
   Source: Ghidra pseudocode (Stage 10 batch) */


HWND FUN_00491640(int param_1,HMENU param_2,int *param_3)

{
  HWND hWnd;
  WPARAM wParam;
  LPARAM lParam;
  
  hWnd = CreateWindowExA(0x204,"SfKrn_Spread_Class","",0x5001f9bc,*param_3,param_3[1],
                         param_3[2] - *param_3,param_3[3] - param_3[1],*(HWND *)(param_1 + 8),
                         param_2,DAT_006471fc,(LPVOID)0x0);
  *(HWND *)(param_1 + 0xdc) = hWnd;
  if (hWnd == (HWND)0x0) {
    return (HWND)0x0;
  }
  lParam = 0;
  wParam = _SfGetUIFont_4(100);
  SendMessageA(hWnd,0x30,wParam,lParam);
  SendMessageA(hWnd,0x43c,0x11,0);
  FUN_004903b0(hWnd,param_1);
  return hWnd;
}


