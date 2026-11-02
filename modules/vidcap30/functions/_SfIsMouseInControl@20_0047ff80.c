/* Module: vidcap30.exe
   Function: _SfIsMouseInControl@20
   Address: 0047ff80
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfIsMouseInControl_20(HWND param_1,int param_2,LONG param_3,LONG param_4,int param_5)

{
  POINT pt;
  HWND hWnd;
  tagRECT local_10;
  
                    /* 0x7ff80  470  _SfIsMouseInControl@20 */
  hWnd = GetDlgItem(param_1,param_2);
  GetWindowRect(hWnd,&local_10);
  if (param_5 != 0) {
    MapWindowPoints((HWND)0x0,param_1,(LPPOINT)&local_10,2);
  }
  pt.y = param_4;
  pt.x = param_3;
  PtInRect(&local_10,pt);
  return;
}


