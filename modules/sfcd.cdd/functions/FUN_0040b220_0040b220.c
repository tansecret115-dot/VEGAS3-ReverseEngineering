/* Module: sfcd.cdd
   Function: FUN_0040b220
   Address: 0040b220
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0040b220(HSFCD__ *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  int local_1c;
  undefined4 local_10;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x160);
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0x42);
  local_60 = 10;
  local_5a = 0x40;
  local_59 = 0xf0;
  local_56 = 0;
  local_55 = 0x10;
  local_54 = 0;
  local_10 = 4000;
  uVar2 = FUN_0040aaa0((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar1 + 100),0x32f,(uchar *)"cdr100.cpp");
  if (uVar2 == 0) {
    FUN_0041f970((undefined1 *)(local_1c + 2),1);
    if ((*(byte *)(local_1c + 7) & 0x40) != 0) {
      *param_2 = 1;
    }
  }
  return uVar2;
}


