/* Module: Setup.exe
   Function: _SfDlgEnableControls@16
   Address: 0041ba90
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfDlgEnableControls_16(HWND param_1,int *param_2,int param_3,BOOL param_4)

{
  HWND hWnd;
  
                    /* 0x1ba90  107  _SfDlgEnableControls@16 */
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


