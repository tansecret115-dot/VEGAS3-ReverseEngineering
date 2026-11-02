/* Module: sfcd.cdd
   Function: FUN_004164e0
   Address: 004164e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004164e0(undefined4 *param_1)

{
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined4 local_10;
  
  SfScsi_InitCmdOut((HSFSCSIPORT__ *)*param_1,local_64,0x35);
  local_60 = 10;
  local_10 = 180000;
  FUN_00415eb0(param_1,local_64);
  return;
}


