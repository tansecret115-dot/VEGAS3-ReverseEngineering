/* Module: vegas30.exe
   Function: FUN_00404660
   Address: 00404660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00404660(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    if (DAT_00647684 != 0) {
      DAT_00647684 = 0;
      DAT_00647688 = 0;
    }
    return 1;
  }
  if (DAT_00647684 != 0) {
    return 0;
  }
  DAT_00647684 = param_1;
  DAT_00647688 = param_2;
  return 1;
}


