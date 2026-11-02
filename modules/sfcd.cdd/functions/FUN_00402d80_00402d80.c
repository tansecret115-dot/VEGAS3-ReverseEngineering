/* Module: sfcd.cdd
   Function: FUN_00402d80
   Address: 00402d80
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00402d80(undefined4 *param_1)

{
  uint uVar1;
  _scsicommand local_64 [22];
  uint local_4e;
  
  SfScsi_InitCmdIn((HSFSCSIPORT__ *)*param_1,local_64,0);
  uVar1 = FUN_00402d20(param_1,local_64);
  if (uVar1 != 0) {
    switch(local_4e & 0xf) {
    case 2:
    case 6:
      cdr_BusyWait(200);
    case 0:
    case 1:
      SfScsi_InitCmdIn((HSFSCSIPORT__ *)*param_1,local_64,0);
      uVar1 = FUN_00402d20(param_1,local_64);
      cdr_BusyWait(200);
    }
  }
  return uVar1;
}


