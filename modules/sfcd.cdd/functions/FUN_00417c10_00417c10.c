/* Module: sfcd.cdd
   Function: FUN_00417c10
   Address: 00417c10
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_00417c10(HSFCD__ *param_1,int *param_2)

{
  long lVar1;
  undefined1 local_8 [3];
  uint local_5;
  
  *param_2 = 0;
  FUN_00415f50((undefined4 *)param_1);
  lVar1 = FUN_00416040(param_1,0x88,(undefined4 *)local_8,5);
  if (lVar1 == 0) {
    FUN_0041f970((undefined1 *)&local_5,1);
    *param_2 = (local_5 & 0xffff) << 1;
  }
  return lVar1;
}


