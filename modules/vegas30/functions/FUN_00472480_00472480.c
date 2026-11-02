/* Module: vegas30.exe
   Function: FUN_00472480
   Address: 00472480
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00472480(int param_1)

{
  int iVar1;
  
  if ((DAT_00647770 != 0) && (DAT_00647630 != param_1)) {
    iVar1 = Transport_IsPreviewPlaying();
    if (iVar1 == 0) {
      FUN_004530a0(param_1,0);
    }
  }
  return;
}


