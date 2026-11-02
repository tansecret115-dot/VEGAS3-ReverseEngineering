/* Module: sdpp3260.dll
   Function: FUN_10002a60
   Address: 10002a60
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_10002a60(int param_1)

{
  return *(int *)((int)&PTR_DAT_10008750 + param_1 * 0x16) != 0;
}


