/* Module: sfcd.cdd
   Function: FUN_004194f0
   Address: 004194f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004194f0(undefined4 *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  _scsicommand local_64 [22];
  uint local_4e;
  
  iVar1 = param_1[0x58];
  SfScsi_InitCmdIn((HSFSCSIPORT__ *)*param_1,local_64,0);
  iVar3 = FUN_004194d0(param_1,local_64);
  if (iVar3 != 0) {
    switch(local_4e & 0xf) {
    case 2:
    case 6:
      bVar2 = FUN_004193d0(iVar1,(int)local_64,0x66);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        return -0x7ffb1f37;
      }
      cdr_BusyWait(200);
    case 0:
    case 1:
      SfScsi_InitCmdIn((HSFSCSIPORT__ *)*param_1,local_64,0);
      iVar3 = FUN_004194d0(param_1,local_64);
      cdr_BusyWait(200);
    }
  }
  return iVar3;
}


