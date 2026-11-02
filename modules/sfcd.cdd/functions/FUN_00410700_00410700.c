/* Module: sfcd.cdd
   Function: FUN_00410700
   Address: 00410700
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_00410700(HSFCD__ *param_1,uint *param_2)

{
  int iVar1;
  long lVar2;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 *local_1c;
  
  iVar1 = *(int *)(param_1 + 0x160);
  *param_2 = 0;
  FUN_0040ebc0((undefined4 *)param_1);
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0xea);
  local_60 = 10;
  lVar2 = FUN_0040eb20((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x8c2,(uchar *)"cw7501.cpp");
  if (lVar2 == 0) {
    *param_2 = (uint)CONCAT11(*local_1c,local_1c[1]) * 0x93 >> 6;
  }
  return lVar2;
}


