/* Module: vegas30k.dll
   Function: FUN_011c1440
   Address: 011c1440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_011c1440(undefined4 *param_1,undefined4 param_2,uchar *param_3)

{
  FUN_011b5cf0(param_2);
  *param_1 = &PTR_LAB_011ebde8;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  _mbscpy((uchar *)(param_1 + 0xf),param_3);
  return param_1;
}


