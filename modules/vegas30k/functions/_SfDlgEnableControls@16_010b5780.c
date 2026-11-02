/* Module: vegas30k.dll
   Function: _SfDlgEnableControls@16
   Address: 010b5780
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfDlgEnableControls_16(HWND param_1,int *param_2,int param_3,BOOL param_4)

{
  HWND hWnd;
  
                    /* 0xb5780  896  _SfDlgEnableControls@16 */
  if (0 < param_3) {
    do {
      hWnd = GetDlgItem(param_1,*param_2);
      EnableWindow(hWnd,param_4);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}


