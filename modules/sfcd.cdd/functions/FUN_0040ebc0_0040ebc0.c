/* Module: sfcd.cdd
   Function: FUN_0040ebc0
   Address: 0040ebc0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_0040ebc0(undefined4 *param_1)

{
  long lVar1;
  _scsicommand local_64 [22];
  uint local_4e;
  
  SfScsi_InitCmdIn((HSFSCSIPORT__ *)*param_1,local_64,0);
  lVar1 = FUN_0040eb20(param_1,local_64);
  if (lVar1 != 0) {
    switch(local_4e & 0xf) {
    case 2:
    case 6:
      cdr_BusyWait(200);
    case 0:
    case 1:
      SfScsi_InitCmdIn((HSFSCSIPORT__ *)*param_1,local_64,0);
      lVar1 = FUN_0040eb20(param_1,local_64);
      cdr_BusyWait(200);
    }
  }
  return lVar1;
}


