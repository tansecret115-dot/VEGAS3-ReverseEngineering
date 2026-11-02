/* Module: vegas30.exe
   Function: FUN_00498400
   Address: 00498400
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004984da) */
/* WARNING: Removing unreachable block (ram,0x004984f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00498400(undefined4 param_1,int param_2,uint param_3,int param_4,undefined4 param_5,
            undefined4 param_6,uint param_7,int param_8,undefined4 param_9,undefined4 param_10,
            double param_11)

{
  float10 extraout_ST0;
  longlong lVar1;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  if (param_2 == 0) {
    local_10._0_4_ = param_7 - param_3;
    local_10._4_4_ = (param_8 - param_4) - (uint)(param_7 < param_3);
  }
  else {
    local_10._0_4_ = param_3 - param_7;
    local_10._4_4_ = (param_4 - param_8) - (uint)(param_3 < param_7);
  }
  lVar1 = ftol();
  local_10 = lVar1;
  local_18 = ftol();
  local_20 = (double)((float10)param_11 / extraout_ST0);
  if (_DAT_006128c8 <= local_20) {
    if (_DAT_006129c8 < local_20) {
      local_20 = 4.0;
    }
  }
  else {
    local_20 = 0.25;
  }
  if (lVar1 < 1) {
    local_10 = 0;
  }
  if (local_18 < 2) {
    local_18 = 1;
  }
  FUN_00498150(param_1,(undefined4)local_20,local_20._4_4_,1);
  FUN_005c7760(param_1,&local_10,&local_18,0,0);
  return 1;
}


