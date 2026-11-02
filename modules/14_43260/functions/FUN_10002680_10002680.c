/* Module: 14_43260.dll
   Function: FUN_10002680
   Address: 10002680
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_10002680(ushort *param_1,undefined4 *param_2)

{
  *param_2 = 0x1b;
  param_2[1] = (uint)(*param_1 >> 10);
  param_2[2] = (*param_1 & 0x3e0) >> 5;
  param_2[3] = (byte)*param_1 & 0x1f;
  param_2[4] = (uint)(param_1[1] >> 0xc);
  param_2[5] = (param_1[1] & 0xf00) >> 8;
  param_2[6] = (uint)(byte)((byte)param_1[1] >> 5);
  param_2[7] = (byte)((byte)param_1[1] >> 2) & 7;
  param_2[8] = ((byte)param_1[1] & 3) << 1 | (uint)(param_1[2] >> 0xf);
  param_2[9] = (param_1[2] & 0x7000) >> 0xc;
  param_2[10] = (param_1[2] & 0xc00) >> 10;
  param_2[0xb] = (param_1[2] & 0x3e0) >> 5;
  param_2[0xc] = ((byte)param_1[2] & 0x1f) << 2 | (uint)(param_1[3] >> 0xe);
  param_2[0xd] = (param_1[3] & 0x3fc0) >> 6;
  param_2[0xe] = ((byte)param_1[3] & 0x3f) << 1 | (uint)(param_1[4] >> 0xf);
  param_2[0xf] = (param_1[4] & 0x7f00) >> 8;
  param_2[0x10] = (uint)(byte)((byte)param_1[4] >> 1);
  param_2[0x11] = ((byte)param_1[4] & 1) << 7 | (uint)(param_1[5] >> 9);
  param_2[0x12] = (param_1[5] & 0x1fc) >> 2;
  param_2[0x13] = ((byte)param_1[5] & 3) << 5 | (uint)(param_1[6] >> 0xb);
  param_2[0x14] = (param_1[6] & 0x7f0) >> 4;
  param_2[0x15] = ((byte)param_1[6] & 0xf) << 4 | (uint)(param_1[7] >> 0xc);
  param_2[0x16] = (param_1[7] & 0xfe0) >> 5;
  param_2[0x17] = ((byte)param_1[7] & 0x1f) << 2 | (uint)(param_1[8] >> 0xe);
  param_2[0x18] = (param_1[8] & 0x3f80) >> 7;
  param_2[0x19] = ((byte)param_1[8] & 0x7f) << 1 | (uint)(param_1[9] >> 0xf);
  param_2[0x1a] = (param_1[9] & 0x7f00) >> 8;
  param_2[0x1b] = (uint)(byte)((byte)param_1[9] >> 1);
  return;
}


