/* Module: sfcd.cdd
   Function: FUN_0040f1a0
   Address: 0040f1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040f1a0(undefined4 *param_1)

{
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined4 local_10;
  
  SfScsi_InitCmdOut((HSFSCSIPORT__ *)*param_1,local_64,0x35);
  local_60 = 10;
  local_10 = 300000;
  FUN_0040eb20(param_1,local_64);
  return;
}


