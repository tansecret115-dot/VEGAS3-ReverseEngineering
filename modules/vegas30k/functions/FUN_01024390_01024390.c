/* Module: vegas30k.dll
   Function: FUN_01024390
   Address: 01024390
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_01024390(int *param_1)

{
  int iVar1;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint uStack_20;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  local_58 = DAT_011e67c8;
  local_54 = DAT_011e67cc;
  local_50 = DAT_011e67d0;
  local_4c = DAT_011e67d4;
  local_3c = 0x10;
  local_34 = 0x10;
  local_2c = 1;
  local_24 = 1;
  local_48[0] = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,0,0,&local_58,local_48,1,0,&DAT_011e64f8,&param_1);
  return uStack_20 & (iVar1 < 0) - 1;
}


