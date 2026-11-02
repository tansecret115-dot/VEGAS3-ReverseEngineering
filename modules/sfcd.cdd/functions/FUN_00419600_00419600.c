/* Module: sfcd.cdd
   Function: FUN_00419600
   Address: 00419600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00419600(HSFCD__ *param_1,_scsicommand *param_2,_scsicommand param_3,_scsicommand param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x160);
  FUN_004194f0((undefined4 *)param_1);
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,param_2,0x1a);
  param_2[10] = param_3;
  param_2[0xc] = param_4;
  uVar2 = FUN_004194d0((undefined4 *)param_1,param_2);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x114,(uchar *)"comread.cpp");
  return uVar2;
}


