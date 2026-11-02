/* Module: vegas30.exe
   Function: FUN_0054d650
   Address: 0054d650
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054d650(void)

{
  int iVar1;
  
  iVar1 = Transport_IsPreviewPlaying();
  if (iVar1 != 0) {
    FUN_005fd4f0(0);
  }
  return;
}


