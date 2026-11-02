/* Module: sftrans1.dll
   Function: FUN_0047e2c0
   Address: 0047e2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0047e2c0(int param_1)

{
  HWND hWnd;
  int local_8;
  int local_4;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x643);
  SendMessageA(hWnd,0xb0,(WPARAM)&local_8,(LPARAM)&local_4);
  if (local_8 == local_4) {
    SendMessageA(hWnd,0x43f,1,0);
    return;
  }
  SendMessageA(hWnd,0x43f,0,0);
  return;
}


