/* Module: sfcd.cdd
   Function: FUN_00411980
   Address: 00411980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_00411980(int param_1)

{
  if (param_1 == 10) {
    return &DAT_0043e790;
  }
  if (param_1 != 0xb) {
    if (param_1 != 0xc) {
      return &DAT_0043e8c8;
    }
    return &DAT_0043e860;
  }
  return &DAT_0043e7f8;
}


