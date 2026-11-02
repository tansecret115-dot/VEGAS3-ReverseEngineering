/* Module: sdpp3260.dll
   Function: FUN_10001940
   Address: 10001940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_10001940(undefined4 param_1,uint param_2)

{
  if ((param_2 < 0x23) && (*(int *)((int)&PTR_DAT_10008750 + param_2 * 0x16) != 0)) {
    return 1;
  }
  return 0;
}


