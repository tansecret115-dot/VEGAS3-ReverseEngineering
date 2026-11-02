/* Module: sfcd.cdd
   Function: FUN_004085b0
   Address: 004085b0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_004085b0(HSFCD__ *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uchar *puVar4;
  _scsicommand local_64 [4];
  undefined4 local_60;
  
  iVar1 = *(int *)(param_1 + 0x160);
  *param_2 = 0;
  iVar2 = FUN_004194f0((undefined4 *)param_1);
  if (iVar2 == -0x7ffb1f37) {
    return -0x7ffb1f37;
  }
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0xef);
  local_60 = 0xc;
  lVar3 = FUN_004082c0((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x1a2,(uchar *)"cdr50s.cpp");
  if (lVar3 == 0) {
    puVar4 = SfScsi_GetIOBuffer(*(HSFSCSIPORT__ **)param_1);
    *param_2 = (uint)(puVar4[2] >> 2) | (uint)puVar4[1] << 6;
  }
  return lVar3;
}


