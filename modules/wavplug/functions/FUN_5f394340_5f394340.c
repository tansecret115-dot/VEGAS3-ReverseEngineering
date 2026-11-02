/* Module: wavplug.dll
   Function: FUN_5f394340
   Address: 5f394340
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f394340(uint param_1)

{
  if ((param_1 & 7) != 0) {
    param_1 = param_1 + (8 - (param_1 & 7));
  }
  return param_1;
}


