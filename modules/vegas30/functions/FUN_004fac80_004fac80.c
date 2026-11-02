/* Module: vegas30.exe
   Function: FUN_004fac80
   Address: 004fac80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fac80(undefined4 *param_1,uint param_2,int param_3,undefined4 param_4,uint param_5)

{
  ClientToScreen((HWND)*param_1,(LPPOINT)&param_2);
  param_1[0x52] = param_4;
  param_1[0x53] = (param_1[0x53] ^ param_5) & 1 ^ param_1[0x53];
  param_1[0x54] = param_2;
  param_1[0x55] = param_3;
  FUN_004fba10(param_1,0x7b,*param_1,param_3 << 0x10 | param_2 & 0xffff);
  param_1[0x52] = 0;
  return;
}


