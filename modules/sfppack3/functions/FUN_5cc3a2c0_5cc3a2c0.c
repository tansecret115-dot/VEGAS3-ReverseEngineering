/* Module: sfppack3.dll
   Function: FUN_5cc3a2c0
   Address: 5cc3a2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc3a2c0(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5cc88268;
  param_2[1] = DAT_5cc8826c;
  param_2[2] = DAT_5cc88270;
  param_2[3] = DAT_5cc88274;
  return 0;
}


