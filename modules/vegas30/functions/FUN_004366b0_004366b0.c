/* Module: vegas30.exe
   Function: FUN_004366b0
   Address: 004366b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004366b0(void)

{
  int iVar1;
  
  if (((DAT_0065e144 == 0) && (iVar1 = FUN_00589dc0(), iVar1 == 0)) &&
     (iVar1 = Transport_IsPlaying(), iVar1 == 0)) {
    return 1;
  }
  return 0;
}


