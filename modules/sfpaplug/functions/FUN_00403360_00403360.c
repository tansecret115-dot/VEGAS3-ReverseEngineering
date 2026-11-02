/* Module: sfpaplug.dll
   Function: FUN_00403360
   Address: 00403360
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00403360(uint param_1)

{
  if ((param_1 & 7) != 0) {
    param_1 = param_1 + (8 - (param_1 & 7));
  }
  return param_1;
}


