/* Module: sfcd.cdd
   Function: FUN_00413800
   Address: 00413800
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00413800(HSFCD__ *param_1,uint *param_2)

{
  uint *puVar1;
  bool bVar2;
  byte bVar3;
  long lVar4;
  undefined3 extraout_var;
  int iVar5;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 uStack_9c;
  ushort uStack_9b;
  uint local_94;
  uint local_90;
  uint local_8c;
  undefined4 local_88;
  undefined1 uStack_84;
  undefined1 local_83;
  ushort uStack_82;
  char cStack_80;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_53;
  uint *local_1c;
  
  iVar5 = *(int *)(param_1 + 0x160);
  lVar4 = FUN_00411b10((undefined4 *)param_1);
  if (lVar4 != 0) {
    lVar4 = FUN_00411b10((undefined4 *)param_1);
    if (lVar4 != 0) {
      FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar5 + 100),0xa31,(uchar *)"jvc20xx.cpp");
      return 0;
    }
  }
  bVar2 = FUN_00411950((int)param_1);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    iVar5 = FUN_00411f50(param_1,&local_88);
  }
  else {
    iVar5 = FUN_00412020(param_1,&local_88);
  }
  if (iVar5 == 0) {
    *param_2 = 1;
    if ((local_88._2_1_ & 3) == 0) {
      *param_2 = 0x61;
    }
    else if ((local_88._2_1_ & 3) == 1) {
      *param_2 = 5;
      bVar3 = local_88._2_1_ >> 2 & 3;
      if (bVar3 == 0) {
        *param_2 = 0x45;
      }
      else if (bVar3 == 3) {
        *param_2 = 0x85;
      }
    }
    else if ((local_88._2_1_ & 3) == 2) {
      *param_2 = 0x97;
    }
    if ((local_88._2_1_ & 0x10) != 0) {
      *param_2 = *param_2 | 8;
    }
    param_2[3] = 1;
    if (cStack_80 == '\0') {
      param_2[5] = 0;
    }
    else if (cStack_80 == '\x10') {
      param_2[5] = 3;
    }
    else if (cStack_80 == ' ') {
      param_2[5] = 2;
    }
    param_2[3] = 1;
    param_2[9] = CONCAT21(uStack_82,local_83) & 0xff;
    param_2[10] = uStack_82 & 0xff;
    param_2[8] = CONCAT11(local_83,uStack_84) & 0xff;
    lVar4 = FUN_00411d60(param_1,&local_a4,&local_a0,0xffffffff);
    if ((lVar4 == 0) && (local_a4._3_1_ != '\0')) {
      local_94 = CONCAT11(uStack_9c,local_a0._3_1_) & 0xff;
      local_90 = CONCAT21(uStack_9b,uStack_9c) & 0xff;
      local_8c = uStack_9b & 0xff;
      FUN_0041ef20((int *)(param_2 + 6),(int *)&local_94);
      if ((param_2[6] != 0) && ((*param_2 & 0x20) != 0)) {
        *param_2 = *param_2 & 0xffffff9f | 4;
      }
    }
    else {
      SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0x25);
      local_60 = 10;
      local_53 = 0;
      lVar4 = FUN_00411a60((undefined4 *)param_1,local_64);
      puVar1 = local_1c;
      if (lVar4 == 0) {
        FUN_0041f9a0((undefined1 *)local_1c,2);
        param_2[6] = *puVar1;
      }
    }
    SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0x25);
    local_60 = 10;
    local_53 = 0x80;
    iVar5 = FUN_00411a60((undefined4 *)param_1,local_64);
    if (iVar5 == 0) {
      FUN_0041f9a0((undefined1 *)local_1c,2);
      param_2[7] = *local_1c - param_2[6];
    }
    if ((*param_2 & 2) != 0) {
      param_2[7] = 0;
    }
  }
  return iVar5;
}


