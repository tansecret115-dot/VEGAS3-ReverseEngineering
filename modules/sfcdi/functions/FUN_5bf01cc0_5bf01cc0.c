/* Module: sfcdi.dll
   Function: FUN_5bf01cc0
   Address: 5bf01cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5bf01cc0(uint param_1)

{
  if (param_1 == 0xffff) {
    return 0xffff;
  }
  if ((param_1 & 0x80) != 0) {
    return 0x10;
  }
  if ((param_1 & 0x40) != 0) {
    return 0xc;
  }
  if ((param_1 & 0x20) != 0) {
    return 10;
  }
  if ((param_1 & 0x10) != 0) {
    return 8;
  }
  if ((param_1 & 8) != 0) {
    return 6;
  }
  if ((param_1 & 4) != 0) {
    return 4;
  }
  if ((param_1 & 2) != 0) {
    return 2;
  }
  return param_1 & 1;
}


