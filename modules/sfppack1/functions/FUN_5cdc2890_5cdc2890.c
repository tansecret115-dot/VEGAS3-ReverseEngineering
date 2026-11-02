/* Module: sfppack1.dll
   Function: FUN_5cdc2890
   Address: 5cdc2890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdc2890(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5ce13860;
  param_2[1] = DAT_5ce13864;
  param_2[2] = DAT_5ce13868;
  param_2[3] = DAT_5ce1386c;
  return 0;
}


