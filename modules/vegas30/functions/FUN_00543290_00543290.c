/* Module: vegas30.exe
   Function: FUN_00543290
   Address: 00543290
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00543290(void)

{
  DAT_006575ec = DAT_006575ec + 1;
  if (DAT_006575ec == 1) {
    ResetEvent(DAT_006575e8);
    FUN_00542e40(&DAT_006575d0,1);
    WaitForSingleObject(DAT_006575e8,0xffffffff);
  }
  return;
}


