/* Module: vegas30.exe
   Function: FUN_004fa530
   Address: 004fa530
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fa530(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) {
    if (param_2 != 0) {
      param_1[3] = param_1[3] | 0x1000;
      SetTimer((HWND)*param_1,99,param_1[0x6b],(TIMERPROC)0x0);
      return;
    }
    param_1[3] = param_1[3] & 0xffffefff;
    InvalidateRect((HWND)*param_1,(RECT *)0x0,0);
  }
  return;
}


