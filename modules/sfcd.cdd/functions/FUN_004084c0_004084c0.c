/* Module: sfcd.cdd
   Function: FUN_004084c0
   Address: 004084c0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_004084c0(HSFCD__ *param_1)

{
  int iVar1;
  long lVar2;
  _scsicommand local_64 [4];
  undefined4 local_60;
  
  iVar1 = *(int *)(param_1 + 0x160);
  SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0xe1);
  local_60 = 0xc;
  lVar2 = FUN_004082c0((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x15e,(uchar *)"cdr50s.cpp");
  return lVar2;
}


