/* Module: mp3rw.dll
   Function: FUN_00475200
   Address: 00475200
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00475200(int param_1)

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


