/* Module: sfcd.cdd
   Function: FUN_00413b20
   Address: 00413b20
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_00413b20(HSFCD__ *param_1,uint *param_2)

{
  int iVar1;
  long lVar2;
  uchar *puVar3;
  _scsicommand local_64 [4];
  undefined4 local_60;
  
  iVar1 = *(int *)(param_1 + 0x160);
  *param_2 = 0;
  FUN_00411b10((undefined4 *)param_1);
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0xef);
  local_60 = 0xc;
  lVar2 = FUN_00411a60((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0xb22,(uchar *)"jvc20xx.cpp");
  if (lVar2 == 0) {
    puVar3 = SfScsi_GetIOBuffer(*(HSFSCSIPORT__ **)param_1);
    *param_2 = (uint)(puVar3[2] >> 2) | (uint)puVar3[1] << 6;
  }
  return lVar2;
}


