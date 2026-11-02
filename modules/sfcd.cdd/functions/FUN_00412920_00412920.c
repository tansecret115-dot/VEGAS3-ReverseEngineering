/* Module: sfcd.cdd
   Function: FUN_00412920
   Address: 00412920
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_00412920(HSFCD__ *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined4 local_5a;
  undefined4 local_56 [21];
  
  iVar1 = *(int *)(param_1 + 0x160);
  SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0xb3);
  local_60 = 0xc;
  local_5a = param_2;
  FUN_0041f9a0((undefined1 *)&local_5a,1);
  local_56[0] = param_3;
  FUN_0041f9a0((undefined1 *)local_56,1);
  lVar2 = FUN_00411a60((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x5f3,(uchar *)"jvc20xx.cpp");
  return lVar2;
}


