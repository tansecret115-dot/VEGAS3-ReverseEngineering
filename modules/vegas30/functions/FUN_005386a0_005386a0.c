/* Module: vegas30.exe
   Function: FUN_005386a0
   Address: 005386a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005386a0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == 400) {
    if (param_2 == 0) {
      param_2 = 0x237;
    }
    FUN_00445380(*(undefined4 *)(DAT_0064762c + 0xa0),param_2,0,0);
    return;
  }
  if (param_2 == 0) {
    param_2 = 0x22d;
  }
  FUN_0050bd90(*(undefined4 *)(DAT_0064762c + 0xa4),param_2,0,0);
  return;
}


