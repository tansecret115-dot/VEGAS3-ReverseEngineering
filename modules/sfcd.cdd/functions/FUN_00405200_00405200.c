/* Module: sfcd.cdd
   Function: FUN_00405200
   Address: 00405200
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00405200(undefined4 *param_1)

{
  _scsicommand local_64 [100];
  
  SfScsi_InitCmdOut((HSFSCSIPORT__ *)*param_1,local_64,0x35);
  FUN_004192e0((int)local_64);
  FUN_00404d50(param_1,local_64);
  return;
}


