/* Module: sfcd.cdd
   Function: FUN_00408800
   Address: 00408800
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_00408800(HSFCD__ *param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  
  iVar1 = *(int *)(param_1 + 0x160);
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0x43);
  local_60 = 10;
  local_55 = 0x10;
  local_56 = param_2;
  local_54 = 0;
  if (param_3 != 0) {
    local_53 = 0x40;
  }
  lVar2 = FUN_004082c0((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x225,(uchar *)"cdr50s.cpp");
  return lVar2;
}


