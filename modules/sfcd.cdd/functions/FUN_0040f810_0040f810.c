/* Module: sfcd.cdd
   Function: FUN_0040f810
   Address: 0040f810
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_0040f810(undefined4 param_1,HSFCD__ *param_2,int param_3)

{
  long lVar1;
  
  FUN_0040f610(param_2);
  lVar1 = FUN_0040f710(param_2,*(undefined4 *)(param_3 + 0xc));
  if (lVar1 != 0) {
    FUN_0040f650((undefined4 *)param_2);
    return lVar1;
  }
  return 0;
}


