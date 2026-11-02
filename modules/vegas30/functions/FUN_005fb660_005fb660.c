/* Module: vegas30.exe
   Function: FUN_005fb660
   Address: 005fb660
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_005fb660(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  long lVar1;
  
  lVar1 = Transport_StopRec(param_2,param_3);
  FUN_0058c8e0(param_1,1,0,param_4,param_5);
  if (param_3 != 0) {
    FUN_005fb6a0(0xffffffff);
  }
  return lVar1;
}


