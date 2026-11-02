/* Module: sfppack1.dll
   Function: FUN_5cdb8ba0
   Address: 5cdb8ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdb8ba0(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5ce132d0;
  param_2[1] = DAT_5ce132d4;
  param_2[2] = DAT_5ce132d8;
  param_2[3] = DAT_5ce132dc;
  return 0;
}


