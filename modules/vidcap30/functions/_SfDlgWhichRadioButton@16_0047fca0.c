/* Module: vidcap30.exe
   Function: _SfDlgWhichRadioButton@16
   Address: 0047fca0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfDlgWhichRadioButton_16(HWND param_1,int param_2,int param_3,int param_4)

{
  UINT UVar1;
  
  while( true ) {
    if (param_3 < param_2) {
      return param_4;
    }
    UVar1 = IsDlgButtonChecked(param_1,param_2);
    if (UVar1 != 0) break;
    param_2 = param_2 + 1;
  }
  return param_2;
}


