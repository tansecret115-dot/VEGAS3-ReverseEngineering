/* Module: vegas30.exe
   Function: FUN_004dab40
   Address: 004dab40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_004dab40(undefined4 *param_1)

{
  FUN_004d5510();
  param_1[0xa0] = 0;
  param_1[0xa4] = 0;
  param_1[0xab] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  param_1[0xa3] = &PTR_LAB_00613c08;
  *param_1 = &PTR_LAB_00613b88;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[8] = 0;
  param_1[0x10] = param_1 + 0xa3;
  param_1[0x49] = param_1[0x49] | 0xa0;
  param_1[0xd] = param_1;
  param_1[0x50] = 0x10000;
  param_1[0xe] = param_1 + 0x48;
  param_1[0xf] = param_1 + 0x7a;
  param_1[0xab] = 0x30000;
  return param_1;
}


