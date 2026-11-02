/* Module: sfcd.cdd
   Function: FUN_00414670
   Address: 00414670
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00414670(HSFCD__ *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  int local_1c;
  undefined4 local_10;
  
  iVar2 = *(int *)(param_1 + 0x160);
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0x42);
  local_60 = 10;
  local_5a = 0x40;
  local_59 = 2;
  local_56 = 0;
  local_55 = 0x10;
  local_54 = 0;
  local_10 = 4000;
  uVar1 = FUN_004144a0((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar2 + 100),0x148,(uchar *)"pcd600.cpp");
  *(undefined4 *)(param_2 + 0x1d78) = 0;
  if (uVar1 == 0) {
    FUN_0041f970((undefined1 *)(local_1c + 2),1);
    if ((*(byte *)(local_1c + 8) & 0x80) != 0) {
      *(undefined4 *)(param_2 + 0x1d78) = 1;
      iVar2 = 0;
      do {
        *(undefined1 *)(param_2 + 0x1d7c + iVar2) = *(undefined1 *)(local_1c + 9 + iVar2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0xd);
    }
  }
  return uVar1;
}


