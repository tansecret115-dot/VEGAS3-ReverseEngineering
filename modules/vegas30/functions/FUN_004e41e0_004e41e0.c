/* Module: vegas30.exe
   Function: FUN_004e41e0
   Address: 004e41e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004e41e0(void)

{
  int iVar1;
  
  iVar1 = Transport_IsPreviewPlaying();
  if (iVar1 == 0) {
    FUN_00428df0(0,0);
  }
  return 0;
}


