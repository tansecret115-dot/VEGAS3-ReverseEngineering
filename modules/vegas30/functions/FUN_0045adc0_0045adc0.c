/* Module: vegas30.exe
   Function: FUN_0045adc0
   Address: 0045adc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045adc0(int param_1,undefined4 param_2,UINT param_3,UINT param_4)

{
  UINT_PTR UVar1;
  
  if (*(int *)(param_1 + 0x180) == 0) {
    if (param_3 == 0) {
      param_3 = 0x4b;
    }
    if (param_4 != 0) {
      *(UINT *)(param_1 + 0x184) = param_3;
      param_3 = param_4;
    }
    UVar1 = SetTimer(*(HWND *)(param_1 + 4),2,param_3,(TIMERPROC)0x0);
    *(UINT_PTR *)(param_1 + 0x180) = UVar1;
    if (UVar1 != 0) {
      FUN_004530a0(param_1,0x7fff);
      *(undefined4 *)(param_1 + 0x188) = param_2;
    }
  }
  return;
}


