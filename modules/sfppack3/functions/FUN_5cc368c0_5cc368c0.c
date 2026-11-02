/* Module: sfppack3.dll
   Function: FUN_5cc368c0
   Address: 5cc368c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc368c0(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5cc87df8;
  param_2[1] = DAT_5cc87dfc;
  param_2[2] = DAT_5cc87e00;
  param_2[3] = DAT_5cc87e04;
  return 0;
}


