/* Module: sfcd.cdd
   Function: FUN_0040d010
   Address: 0040d010
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040d010(undefined4 *param_1,undefined1 param_2)

{
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_57;
  
  SfScsi_InitCmdOut((HSFSCSIPORT__ *)*param_1,local_64,0xf0);
  local_60 = 10;
  local_57 = param_2;
  FUN_0040c8e0(param_1,local_64);
  return;
}


