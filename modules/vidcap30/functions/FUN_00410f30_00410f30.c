/* Module: vidcap30.exe
   Function: FUN_00410f30
   Address: 00410f30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00410f30(int param_1,LPCSTR param_2)

{
  uint nCmdShow;
  
  if (param_1 != DAT_005bbfe0) {
    DAT_005bbfe0 = param_1;
    nCmdShow = -(uint)(param_1 != 0) & 8;
    ShowWindow(DAT_005bbfe8,nCmdShow);
    ShowWindow(DAT_005bbfe4,nCmdShow);
    if (param_1 == 0) {
      SendMessageA(DAT_005bbfe4,0x60c,0,0);
    }
    else {
      BringWindowToTop(DAT_005bbfe4);
      BringWindowToTop(DAT_005bbfe8);
    }
    InvalidateRect(DAT_005bbe30,(RECT *)0x0,0);
  }
  lstrcpynA(&DAT_005bbe8c,param_2,0x154);
  DAT_005bbfdf = 0;
  if (DAT_005bbfe0 != 0) {
    InvalidateRect(DAT_005bbe30,(RECT *)&DAT_005bbe7c,0);
    return;
  }
  InvalidateRect(DAT_005bbe30,(RECT *)&DAT_005bbe6c,0);
  return;
}


