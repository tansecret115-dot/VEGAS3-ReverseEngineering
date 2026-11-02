/* Module: mp3plug.dll
   Function: FUN_5f70b240
   Address: 5f70b240
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5f70b240(undefined4 param_1,float *param_2)

{
  undefined4 extraout_ECX;
  
  FUN_5f709cb0(param_1,param_2);
  FUN_5f709cb0(extraout_ECX,param_2 + 1);
  *param_2 = *param_2 + param_2[3] + param_2[1];
  param_2[1] = param_2[3] + param_2[1] + param_2[2];
  param_2[2] = param_2[2] + param_2[3] + param_2[5];
  param_2[3] = param_2[3] + param_2[5] + param_2[4];
  param_2[4] = param_2[4] + param_2[5] + param_2[7];
  param_2[5] = param_2[5] + param_2[7] + param_2[6];
  param_2[6] = param_2[6] + param_2[7] + param_2[9];
  param_2[7] = param_2[7] + param_2[9] + param_2[8];
  param_2[8] = param_2[8] + param_2[9] + param_2[0xb];
  param_2[9] = param_2[9] + param_2[0xb] + param_2[10];
  param_2[10] = param_2[10] + param_2[0xb] + param_2[0xd];
  param_2[0xb] = param_2[0xb] + param_2[0xd] + param_2[0xc];
  param_2[0xc] = param_2[0xc] + param_2[0xd] + param_2[0xf];
  param_2[0xd] = param_2[0xd] + param_2[0xf] + param_2[0xe];
  param_2[0xe] = param_2[0xe] + param_2[0xf] + param_2[0x11];
  param_2[0xf] = param_2[0xf] + param_2[0x11] + param_2[0x10];
  param_2[0x10] = param_2[0x10] + param_2[0x11];
  return;
}


