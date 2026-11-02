/* Module: vegas30.exe
   Function: FUN_004e72b0
   Address: 004e72b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004e72b0(undefined4 param_1)

{
  _SfQueueInsertHead_8(&DAT_0064cd88,param_1);
  if (DAT_0064ce18 == 0) {
    DAT_0064ce18 = SetTimer(DAT_00647624,1,0xfa,(TIMERPROC)0x0);
  }
  return 0;
}


