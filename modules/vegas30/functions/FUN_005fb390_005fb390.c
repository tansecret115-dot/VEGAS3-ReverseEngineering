/* Module: vegas30.exe
   Function: FUN_005fb390
   Address: 005fb390
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005fb390(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 unaff_retaddr;
  
  lVar1 = Transport_Stop(0xa0000000,CONCAT44(unaff_retaddr,param_3));
  if (-1 < lVar1) {
    DAT_0064b150 = 0;
  }
  return;
}


