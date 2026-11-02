/* Module: vegas30.exe
   Function: FUN_004fa590
   Address: 004fa590
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fa590(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) {
    if (param_2 != 0) {
      param_1[3] = param_1[3] | 0x2000;
      SetTimer((HWND)*param_1,99,param_1[0x6b],(TIMERPROC)0x0);
      return;
    }
    param_1[3] = param_1[3] & 0xffffdfff;
    InvalidateRect((HWND)*param_1,(RECT *)0x0,0);
  }
  return;
}


