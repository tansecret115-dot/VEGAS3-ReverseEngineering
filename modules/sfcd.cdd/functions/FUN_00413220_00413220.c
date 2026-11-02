/* Module: sfcd.cdd
   Function: FUN_00413220
   Address: 00413220
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_00413220(HSFCD__ *param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_84;
  char local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  byte local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_71;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  int local_68;
  _scsicommand local_64 [9];
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_58;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_10;
  
  iVar1 = *(int *)(param_1 + 0x160);
  puVar5 = &local_84;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_84._1_1_ = 0;
  local_80 = (-(*(int *)(iVar1 + 0x1dc) != 0) & 0xfdU) + 4;
  local_84._2_1_ = 0;
  local_84._3_1_ = 8;
  local_7f = 0;
  local_7e = 0;
  local_7d = 0;
  local_7b = 0;
  local_7a = (undefined1)((uint)param_3 >> 8);
  local_79 = (undefined1)param_3;
  local_78 = 0x21;
  local_77 = 1;
  local_68 = iVar1;
  iVar1 = cdr_GetTestMode(param_1);
  local_76 = -(iVar1 != 0) & 3;
  local_75 = 0x22;
  local_74 = 7;
  local_71 = param_2;
  local_6c = 0x31;
  local_6b = 2;
  uVar2 = cdr_GetSpeed(param_1,1);
  if (uVar2 == 0xffff) {
    local_6a = 0xff;
  }
  else {
    if ((uVar2 & 1) != 0) {
      local_6a = 0;
    }
    if ((uVar2 & 2) != 0) {
      local_6a = 1;
    }
  }
  SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0x15);
  local_5b = 0x10;
  local_58 = 0x1c;
  local_10 = 7000;
  puVar5 = &local_84;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *local_1c = *puVar5;
    puVar5 = puVar5 + 1;
    local_1c = local_1c + 1;
  }
  local_18 = 0x1c;
  lVar3 = FUN_00411a60((undefined4 *)param_1,local_64);
  FUN_00419270(param_1,(tCDR_ERRORDATA *)(local_68 + 100),0x85f,(uchar *)"jvc20xx.cpp");
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0x1a);
  local_5a = 0x3f;
  local_58 = 0xff;
  FUN_00411a60((undefined4 *)param_1,local_64);
  cdr_BusyWait(4000);
  return lVar3;
}


