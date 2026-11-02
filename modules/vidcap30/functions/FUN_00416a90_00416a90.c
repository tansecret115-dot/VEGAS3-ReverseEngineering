/* Module: vidcap30.exe
   Function: FUN_00416a90
   Address: 00416a90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00416a90(undefined4 param_1)

{
  _SfQueueInsertHead_8(&DAT_005bc200,param_1);
  if (DAT_005bc28c == 0) {
    DAT_005bc28c = SetTimer(DAT_005ba4bc,1,0xfa,(TIMERPROC)0x0);
  }
  return 0;
}


