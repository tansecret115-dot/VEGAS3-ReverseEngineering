/* Module: vidcap30.exe
   Function: _SfDlgShowControls@16
   Address: 0047fc60
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfDlgShowControls_16(HWND param_1,int *param_2,int param_3,int param_4)

{
  HWND hWnd;
  
                    /* 0x7fc60  350  _SfDlgShowControls@16 */
  if (0 < param_3) {
    do {
      hWnd = GetDlgItem(param_1,*param_2);
      ShowWindow(hWnd,-(uint)(param_4 != 0) & 8);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}


