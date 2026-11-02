/* Module: vegas30.exe
   Function: FUN_00538740
   Address: 00538740
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00538740(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xc) == 400) {
    FUN_004457c0(*(undefined4 *)(DAT_0064762c + 0xa0),param_2);
    return;
  }
  FUN_0050c010(*(undefined4 *)(DAT_0064762c + 0xa4),param_2);
  return;
}


