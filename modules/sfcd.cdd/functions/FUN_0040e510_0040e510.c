/* Module: sfcd.cdd
   Function: FUN_0040e510
   Address: 0040e510
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_0040e510(HSFCD__ *param_1,uint *param_2)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  _scsicommand local_64 [4];
  undefined4 local_60;
  
  iVar1 = *(int *)(param_1 + 0x160);
  *param_2 = 0;
  FUN_0040c980((undefined4 *)param_1);
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0xec);
  local_60 = 10;
  lVar2 = FUN_0040c8e0((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x8d2,(uchar *)"cdu92x.cpp");
  if (lVar2 == 0) {
    puVar3 = (uint *)SfScsi_GetIOBuffer(*(HSFSCSIPORT__ **)param_1);
    FUN_0041f9a0((undefined1 *)puVar3,2);
    *param_2 = *puVar3 >> 10 & 0x3fff;
  }
  return lVar2;
}


