/* Module: sfppack3.dll
   Function: FUN_5cc41830
   Address: 5cc41830
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc41830(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5cc88a40;
  param_2[1] = DAT_5cc88a44;
  param_2[2] = DAT_5cc88a48;
  param_2[3] = DAT_5cc88a4c;
  return 0;
}


