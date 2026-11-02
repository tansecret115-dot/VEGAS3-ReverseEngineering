/* Module: sfcdi.dll
   Function: FUN_5bf10280
   Address: 5bf10280
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf10280(char *param_1,byte *param_2)

{
  byte bVar1;
  
  param_1[0x14] = '\f';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  bVar1 = *param_1 << 5 | *param_2 & 0x1f;
  *param_2 = bVar1;
  *param_2 = (param_1[4] ^ bVar1) & 0x1f ^ bVar1;
  param_2[1] = (param_1[8] ^ param_2[1]) & 0x7f ^ param_2[1];
  param_2[2] = param_1[0xc];
  param_2[3] = (param_1[0x10] & 7U) << 4 | param_2[3] & 0x8f;
  return;
}


