/* Module: sfcd.cdd
   Function: FUN_0041d410
   Address: 0041d410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041d410(byte *param_1,byte param_2,byte *param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  
  if (param_1 == (byte *)0x0) {
    return 0x80004003;
  }
  bVar2 = 3;
  if ((param_4 & 8) != 0) {
    bVar2 = 0x83;
  }
  if ((param_4 & 1) != 0) {
    bVar2 = bVar2 | 0x10;
  }
  if ((param_4 & 2) != 0) {
    bVar2 = bVar2 | 0x20;
  }
  pbVar1 = param_1 + 8;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[1] = param_2;
  *param_1 = bVar2;
  param_1[2] = *param_3;
  param_1[3] = param_3[1];
  param_1[4] = param_3[2];
  param_1[5] = param_3[3];
  param_1[6] = param_3[4];
  param_1[7] = param_3[5];
  pbVar1[0] = 0;
  pbVar1[1] = 0;
  pbVar1[2] = 0;
  pbVar1[3] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *pbVar1 = bVar2;
  param_1[9] = param_2;
  param_1[10] = param_3[6];
  param_1[0xb] = param_3[7];
  param_1[0xc] = param_3[8];
  param_1[0xd] = param_3[9];
  param_1[0xe] = param_3[10];
  param_1[0xf] = param_3[0xb];
  return 0;
}


