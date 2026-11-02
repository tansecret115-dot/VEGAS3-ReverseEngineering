/* Module: vegas30.exe
   Function: FUN_004fb860
   Address: 004fb860
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fb860(undefined4 *param_1,LONG param_2,LONG param_3,undefined4 param_4,int param_5)

{
  if (param_1[0x1e] != 0) {
    if (param_5 != 0) {
      FUN_0040c740(DAT_0064762c);
      FUN_004fb380(param_1);
      return;
    }
    ClientToScreen((HWND)*param_1,(LPPOINT)&param_2);
    FUN_0040c570(DAT_0064762c,param_1[0x1e],param_2,param_3,param_4);
    FUN_004fb380(param_1);
  }
  return;
}


