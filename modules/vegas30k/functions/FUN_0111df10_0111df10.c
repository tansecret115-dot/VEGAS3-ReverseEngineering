/* Module: vegas30k.dll
   Function: FUN_0111df10
   Address: 0111df10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0111df10(int param_1,HDC param_2,RECT *param_3)

{
  DWORD color;
  HWND hWnd;
  HBRUSH hbr;
  
  color = GetSysColor(5);
  SetBkColor(param_2,color);
  if ((*(byte *)(param_1 + 0xc) & 0x80) == 0) {
    hWnd = *(HWND *)(param_1 + 0x30);
    if (hWnd == (HWND)0x0) {
      hWnd = GetParent(*(HWND *)(param_1 + 0x28));
    }
    hbr = (HBRUSH)SendMessageA(hWnd,0x136,(WPARAM)param_2,*(LPARAM *)(param_1 + 0x28));
    FillRect(param_2,param_3,hbr);
  }
  FUN_0111d590(param_1,param_2);
  FUN_0111cc70(param_1,param_2);
  FUN_0111c4e0(param_1,param_2);
  FUN_0111da80(param_1,param_2);
  return;
}


