/* Module: sfcd.cdd
   Function: FUN_00412b80
   Address: 00412b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00412b80(HSFCD__ *param_1,uint param_2,int param_3,undefined4 param_4,uint *param_5)

{
  long lVar1;
  byte local_14 [3];
  byte local_11;
  undefined4 local_10 [4];
  
  local_14[0] = 1;
  local_14[1] = 1;
  FUN_00412720(local_14 + 1,(int)param_5);
  if (param_5[0xe] != 0) {
    local_14[0] = local_14[0] | 0x80;
  }
  FUN_0041f150(local_14 + 2,param_2);
  FUN_0041f150(&local_11,0);
  lVar1 = FUN_00412920(param_1,param_3 + -0x96,0x96);
  if (lVar1 == 0) {
    lVar1 = FUN_004129b0(param_1,(undefined4 *)local_14,4);
    if (lVar1 == 0) {
      local_14[0] = 0;
      if (param_5[0xe] != 0) {
        local_14[0] = 0x80;
      }
      local_14[1] = 1;
      FUN_00412720(local_14 + 1,(int)param_5);
      if (param_5[0xe] != 0) {
        local_14[0] = local_14[0] | 0x80;
      }
      FUN_0041f150(local_14 + 2,param_2);
      FUN_0041f150(&local_11,1);
      lVar1 = FUN_00412920(param_1,param_3,param_4);
      if (lVar1 == 0) {
        lVar1 = FUN_004129b0(param_1,(undefined4 *)local_14,4);
        if ((lVar1 == 0) && (param_5[7] != 0)) {
          FUN_00412870(local_10,param_5);
          FUN_004129b0(param_1,local_10,0xf);
        }
      }
    }
  }
  return;
}


