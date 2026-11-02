/* Module: mpgaout.dll
   Function: FUN_1000b08c
   Address: 1000b08c
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_1000b08c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  param_1[2] = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xb] = 8;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[9] = 0;
  param_1[0x10] = 0;
  param_1[3] = &LAB_1000b178;
  param_1[4] = &LAB_1000b200;
  param_1[6] = &LAB_1000b224;
  param_1[5] = &LAB_1000b238;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  uVar1 = (**(code **)(param_2 + 0x10))(param_2);
  uVar1 = (**(code **)(param_2 + 4))(param_1[2],uVar1);
  *param_1 = uVar1;
  uVar1 = (**(code **)(param_1[2] + 0x10))(param_1[2]);
  param_1[1] = uVar1;
  param_1[6] = &LAB_1000b254;
  param_1[5] = &LAB_1000b2b4;
  param_1[3] = &LAB_1000b3f0;
  param_1[8] = &DAT_1000b310;
  param_1[4] = &LAB_1000b4f0;
  return 0;
}


