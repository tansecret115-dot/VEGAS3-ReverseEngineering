/* Module: sfcdi.dll
   Function: FUN_5bf2b5e0
   Address: 5bf2b5e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf2b5e0(uint *param_1,uint param_2)

{
  if (param_1 == (uint *)0x0) {
    return 0x80004003;
  }
  *param_1 = param_2 / 0x1194;
  param_1[1] = (param_2 % 0x1194) / 0x4b;
  param_1[2] = (param_2 % 0x1194) % 0x4b;
  return 0;
}


