/* Module: sfcd.cdd
   Function: FUN_00410d90
   Address: 00410d90
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_00410d90(undefined4 *param_1)

{
  long lVar1;
  _scsicommand local_64 [22];
  uint local_4e;
  char local_44;
  
  SfScsi_InitCmdIn((HSFSCSIPORT__ *)*param_1,local_64,0);
  lVar1 = FUN_00410cf0(param_1,local_64);
  if (lVar1 != 0) {
    switch(local_4e & 0xf) {
    case 2:
    case 6:
      if (local_44 == ':') {
        return lVar1;
      }
      cdr_BusyWait(200);
    case 0:
    case 1:
      SfScsi_InitCmdIn((HSFSCSIPORT__ *)*param_1,local_64,0);
      lVar1 = FUN_00410cf0(param_1,local_64);
      cdr_BusyWait(200);
    }
  }
  return lVar1;
}


