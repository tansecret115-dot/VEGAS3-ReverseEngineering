/* Module: sftrans1.dll
   Function: FUN_0047e000
   Address: 0047e000
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0047e000(int param_1,LPARAM param_2,int param_3)

{
  HWND hWnd;
  WPARAM wParam;
  int local_8;
  int local_4;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x643);
  SendMessageA(hWnd,0xb0,(WPARAM)&local_8,(LPARAM)&local_4);
  if (local_8 == local_4) {
    wParam = 4;
  }
  else {
    wParam = 1;
  }
  SendMessageA(hWnd,0x444,wParam,param_2);
  if (param_3 != 0) {
    FUN_0047e550();
  }
  return;
}


