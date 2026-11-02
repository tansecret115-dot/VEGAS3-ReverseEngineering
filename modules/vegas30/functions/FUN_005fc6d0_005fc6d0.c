/* Module: vegas30.exe
   Function: FUN_005fc6d0
   Address: 005fc6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_005fc6d0(int param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = 0x4e005;
  if ((param_2 != 0) && (param_2 < 3)) {
    lVar1 = Transport_GenerateSync(param_1,param_2);
  }
  return lVar1;
}


