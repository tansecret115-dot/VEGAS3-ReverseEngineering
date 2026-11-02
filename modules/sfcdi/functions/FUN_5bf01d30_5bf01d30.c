/* Module: sfcdi.dll
   Function: FUN_5bf01d30
   Address: 5bf01d30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf01d30(uint param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 == 0xffff) {
    return 0xffff;
  }
  if (param_1 < 2) {
    return 1;
  }
  if (param_1 < 4) {
    return 2;
  }
  if (param_1 < 6) {
    return 4;
  }
  if (param_1 < 8) {
    return 8;
  }
  if (param_1 < 10) {
    return 0x10;
  }
  if (param_1 < 0xc) {
    return 0x20;
  }
  if (param_1 < 0xd) {
    return 0x40;
  }
  return (-(uint)(param_1 < 0x11) & 0xffff0081) + 0xffff;
}


