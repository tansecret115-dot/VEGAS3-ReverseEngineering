/* Module: vegas30.exe
   Function: FUN_004046b0
   Address: 004046b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004046b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 == 0) {
    if (DAT_0064768c != 0) {
      DAT_0064768c = 0;
      DAT_00647690 = 0;
      DAT_00647698 = 0;
      DAT_00647694 = 0;
    }
    return 1;
  }
  if (DAT_0064768c != 0) {
    return 0;
  }
  DAT_00647690 = param_3;
  DAT_0064768c = param_1;
  DAT_00647698 = param_2;
  DAT_00647694 = GetTickCount();
  return 1;
}


