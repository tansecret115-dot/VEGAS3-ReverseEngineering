/* Module: vegas30.exe
   Function: FUN_004e83d0
   Address: 004e83d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e83d0(int param_1,LPCSTR param_2)

{
  uint nCmdShow;
  
  if (param_1 != DAT_0064cfd8) {
    DAT_0064cfd8 = param_1;
    nCmdShow = -(uint)(param_1 != 0) & 8;
    ShowWindow(DAT_0064cfe0,nCmdShow);
    ShowWindow(DAT_0064cfdc,nCmdShow);
    if (param_1 == 0) {
      SendMessageA(DAT_0064cfdc,0x60c,0,0);
    }
    else {
      BringWindowToTop(DAT_0064cfdc);
      BringWindowToTop(DAT_0064cfe0);
    }
    InvalidateRect(DAT_0064ce28,(RECT *)0x0,0);
  }
  lstrcpynA(&DAT_0064ce84,param_2,0x154);
  DAT_0064cfd7 = 0;
  if (DAT_0064cfd8 != 0) {
    InvalidateRect(DAT_0064ce28,(RECT *)&DAT_0064ce74,0);
    return;
  }
  InvalidateRect(DAT_0064ce28,(RECT *)&DAT_0064ce64,0);
  return;
}


