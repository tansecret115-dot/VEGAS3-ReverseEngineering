/* Module: vidpcore.dll
   Function: FUN_5dea3070
   Address: 5dea3070
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5dea3070(uint param_1)

{
  if (DAT_5df43174 == 0) {
    DAT_5df42ecc = FUN_5dea2ed0();
    DAT_5df43174 = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_5df42ecc & param_1;
}


