/* Module: vegas30.exe
   Function: FUN_005fc6b0
   Address: 005fc6b0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_005fc6b0(uint param_1)

{
  long lVar1;
  
  lVar1 = 0x4e005;
  if ((param_1 != 0) && (param_1 < 3)) {
    lVar1 = Transport_CanGenerateSync(param_1);
  }
  return lVar1;
}


