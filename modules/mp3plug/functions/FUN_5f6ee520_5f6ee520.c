/* Module: mp3plug.dll
   Function: FUN_5f6ee520
   Address: 5f6ee520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6ee520(int *param_1,int param_2,int param_3)

{
  undefined4 local_90c [577];
  
  *param_1 = param_3;
  FUN_5f705390(*(uint **)(param_2 + 4),local_90c,0x240,0x480);
  FUN_5f709f70((int *)param_1[1],param_3,(int)local_90c,(float *)(param_1 + 2));
  param_1[0x243] = 0;
  param_1[0x242] = 0;
  return 0;
}


