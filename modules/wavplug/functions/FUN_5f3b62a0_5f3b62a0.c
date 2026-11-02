/* Module: wavplug.dll
   Function: FUN_5f3b62a0
   Address: 5f3b62a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f3b62a0(int param_1,int param_2,uint param_3)

{
  if (0xef < param_3) {
    param_3 = param_3 - 0xf0;
  }
  if (param_3 < 0x28) {
    return ((param_2 - param_1) * param_3 + 0x14) / 0x28 + param_1;
  }
  if (param_3 < 0x78) {
    return param_2;
  }
  if (param_3 < 0xa0) {
    return (((param_2 * 0xa0 + param_1 * -0xa0) - param_3) + 0x14) / 0x28 + param_1;
  }
  return param_1;
}


