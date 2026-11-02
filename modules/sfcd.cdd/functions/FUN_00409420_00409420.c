/* Module: sfcd.cdd
   Function: FUN_00409420
   Address: 00409420
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00409420(HSFCD__ *param_1,uint param_2,int param_3,undefined4 param_4)

{
  long lVar1;
  undefined4 local_4;
  
  local_4._0_2_ = 0x101;
  FUN_0041f150((byte *)((int)&local_4 + 2),param_2);
  FUN_0041f150((byte *)((int)&local_4 + 3),0);
  lVar1 = FUN_004091c0(param_1,param_3 + -0x96,0x96);
  if (lVar1 == 0) {
    lVar1 = FUN_00409250(param_1,0,&local_4,4);
    if (lVar1 == 0) {
      local_4 = CONCAT22(local_4._2_2_,0x100);
      FUN_0041f150((byte *)((int)&local_4 + 2),param_2);
      FUN_0041f150((byte *)((int)&local_4 + 3),1);
      lVar1 = FUN_004091c0(param_1,param_3,param_4);
      if (lVar1 == 0) {
        FUN_00409250(param_1,0,&local_4,4);
      }
    }
  }
  return;
}


