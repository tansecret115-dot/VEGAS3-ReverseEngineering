/* Module: vegas30k.dll
   Function: FUN_0118e770
   Address: 0118e770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0118e770(undefined4 *param_1,int *param_2)

{
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_011ea830;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x13] = 0;
  param_1[0x18] = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 1;
  param_1[0x27] = 1;
  param_1[0x1d] = 0;
  param_1[0x1e] = 1;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x20] = 4;
  param_1[0x21] = 2;
  return param_1;
}


