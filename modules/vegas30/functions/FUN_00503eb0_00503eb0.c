/* Module: vegas30.exe
   Function: FUN_00503eb0
   Address: 00503eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00503eb0(undefined4 param_1,int *param_2,ulong param_3)

{
  *(ulong *)(*param_2 + 0x1d70) = param_3;
  Mixer_GetDeviceName((char *)(*param_2 + 0x11a8),0x40,0x100,param_3);
  return;
}


