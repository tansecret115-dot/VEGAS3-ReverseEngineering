/* Module: sfcd.cdd
   Function: FUN_00411c10
   Address: 00411c10
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_00411c10(HSFCD__ *param_1)

{
  int iVar1;
  long lVar2;
  _scsicommand local_64 [4];
  undefined4 local_60;
  
  iVar1 = *(int *)(param_1 + 0x160);
  SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0xec);
  local_60 = 0xc;
  lVar2 = FUN_00411a60((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x1d9,(uchar *)"jvc20xx.cpp");
  return lVar2;
}


