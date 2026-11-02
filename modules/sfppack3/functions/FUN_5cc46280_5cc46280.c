/* Module: sfppack3.dll
   Function: FUN_5cc46280
   Address: 5cc46280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc46280(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5cc88f58;
  param_2[1] = DAT_5cc88f5c;
  param_2[2] = DAT_5cc88f60;
  param_2[3] = DAT_5cc88f64;
  return 0;
}


