/* Module: vegas30k.dll
   Function: FUN_011d7540
   Address: 011d7540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_011d7540(undefined4 *param_1,int *param_2)

{
  *param_1 = &PTR_LAB_011ec788;
  param_1[1] = 0;
  param_1[3] = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  param_1[0x10] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x1e] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x11] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x1f] = 0;
  param_1[0xe] = 0x55555556;
  param_1[0xb] = 0xf0;
  param_1[0xc] = 500000;
  param_1[0xf] = 0x40d45855;
  return param_1;
}


