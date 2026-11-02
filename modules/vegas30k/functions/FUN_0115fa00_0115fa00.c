/* Module: vegas30k.dll
   Function: FUN_0115fa00
   Address: 0115fa00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0115fa00(int param_1)

{
  if (param_1 < 1) {
    return 5000;
  }
  if (param_1 < 0x65) {
    if (param_1 < 0x32) {
      return (int)(5000 / (longlong)param_1);
    }
  }
  else {
    param_1 = 100;
  }
  return (100 - param_1) * 2;
}


