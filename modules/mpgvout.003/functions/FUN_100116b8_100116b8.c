/* Module: mpgvout.003
   Function: FUN_100116b8
   Address: 100116b8
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_100116b8(undefined4 *param_1,int param_2)

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
  param_1[3] = &LAB_10011aa8;
  param_1[4] = &LAB_10011b30;
  param_1[6] = &LAB_10011b54;
  param_1[5] = &LAB_10011b68;
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
  param_1[3] = &LAB_10011c40;
  param_1[6] = &LAB_10011b84;
  param_1[5] = &LAB_10011be4;
  param_1[8] = &DAT_10011c38;
  param_1[4] = &LAB_10011dc0;
  return 0;
}


