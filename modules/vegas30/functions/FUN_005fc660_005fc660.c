/* Module: vegas30.exe
   Function: FUN_005fc660
   Address: 005fc660
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_005fc660(uint param_1,int param_2)

{
  long lVar1;
  
  lVar1 = 1;
  if ((param_1 != 0) && (param_1 < 3)) {
    if (param_2 != 0) {
      lVar1 = Transport_CanGenerateSync(param_1);
      return lVar1;
    }
    lVar1 = Transport_CanEnableExternalSync(param_1);
  }
  return lVar1;
}


