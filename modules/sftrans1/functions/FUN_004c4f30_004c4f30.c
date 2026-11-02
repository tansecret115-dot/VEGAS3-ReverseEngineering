/* Module: sftrans1.dll
   Function: FUN_004c4f30
   Address: 004c4f30
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004c4f30(uint param_1)

{
  if (DAT_0057bb24 == 0) {
    DAT_0057b87c = FUN_004c4d90();
    DAT_0057bb24 = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_0057b87c & param_1;
}


