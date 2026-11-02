/* Module: sfcd.cdd
   Function: FUN_0041d2b0
   Address: 0041d2b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041d2b0(undefined4 *param_1)

{
  _scsicommand local_64 [100];
  
  SfScsi_InitCmdOut((HSFSCSIPORT__ *)*param_1,local_64,0x35);
  FUN_004192e0((int)local_64);
  FUN_00419470(param_1,local_64,3);
  return;
}


