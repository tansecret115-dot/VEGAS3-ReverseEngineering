/* Module: vegas30.exe
   Function: FUN_0051fc80
   Address: 0051fc80
   Source: Ghidra pseudocode (Stage 10 batch) */


HWND FUN_0051fc80(HWND param_1,HMENU param_2,WPARAM param_3,uint param_4)

{
  HWND hWnd;
  
  hWnd = CreateWindowExA(0,"Combobox","",param_4 | 0x54010004,0,0,0,0,param_1,param_2,DAT_006471fc,
                         (LPVOID)0x0);
  if ((hWnd != (HWND)0x0) && (param_3 != 0)) {
    SendMessageA(hWnd,0x30,param_3,0);
  }
  return hWnd;
}


