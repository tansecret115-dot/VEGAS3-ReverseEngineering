/* Module: sfcd.cdd
   Function: FUN_00410f30
   Address: 00410f30
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_00410f30(HSFCD__ *param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  int local_1c;
  
  iVar1 = *(int *)(param_1 + 0x160);
  puVar2 = (undefined1 *)FUN_0041f490(param_3,param_2);
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0x42);
  local_60 = 10;
  local_5a = 0x40;
  local_59 = 3;
  local_56 = *puVar2;
  local_55 = 0x10;
  local_54 = 0;
  lVar3 = FUN_00410cf0((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x1ec,(uchar *)"gencd.cpp");
  *(undefined4 *)(puVar2 + 0x1c) = 0;
  if (lVar3 == 0) {
    FUN_0041f970((undefined1 *)(local_1c + 2),1);
    if ((*(byte *)(local_1c + 8) & 0x80) != 0) {
      *(undefined4 *)(puVar2 + 0x1c) = 1;
      *(undefined4 *)(puVar2 + 0x20) = *(undefined4 *)(local_1c + 9);
      *(undefined4 *)(puVar2 + 0x24) = *(undefined4 *)(local_1c + 0xd);
      *(undefined4 *)(puVar2 + 0x28) = *(undefined4 *)(local_1c + 0x11);
    }
  }
  return lVar3;
}


