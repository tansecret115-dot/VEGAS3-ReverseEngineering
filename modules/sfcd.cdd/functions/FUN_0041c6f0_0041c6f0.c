/* Module: sfcd.cdd
   Function: FUN_0041c6f0
   Address: 0041c6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041c6f0(HSFCD__ *param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  undefined4 local_a4;
  undefined1 uStack_a0;
  byte bStack_9f;
  ushort local_9e;
  char cStack_9c;
  uint local_90;
  undefined4 local_80 [3];
  uint local_74;
  uint local_70;
  _scsicommand local_64 [4];
  undefined4 local_60;
  uint *local_1c;
  
  iVar3 = *(int *)(param_1 + 0x160);
  iVar2 = FUN_004194f0((undefined4 *)param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_004194f0((undefined4 *)param_1);
    if (iVar2 != 0) {
      FUN_00419270(param_1,(tCDR_ERRORDATA *)(iVar3 + 100),0x1cb,(uchar *)"mmc.cpp");
      return 0;
    }
  }
  puVar4 = &local_a4;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  iVar3 = FUN_0041c9a0(param_1,&local_a4);
  if (iVar3 == 0) {
    *param_2 = 1;
    if ((local_9e & 0x2000) != 0) {
      param_2[1] = 3;
    }
    if ((local_a4._2_2_ & 3) == 0) {
      *param_2 = 0x61;
    }
    else if ((local_a4._2_2_ & 3) == 1) {
      *param_2 = 5;
      if ((local_a4._2_2_ & 0xc0) == 0) {
        *param_2 = 0x45;
      }
      else if ((local_a4._2_2_ & 0xc0) == 0xc0) {
        *param_2 = 0x85;
      }
    }
    else if ((local_a4._2_2_ & 3) == 2) {
      *param_2 = 0x97;
    }
    if ((local_a4._2_2_ & 0x10) != 0) {
      *param_2 = *param_2 | 8;
    }
    param_2[4] = 0;
    param_2[3] = 1;
    if (cStack_9c == '\0') {
      param_2[5] = 0;
    }
    else if (cStack_9c == '\x10') {
      param_2[5] = 3;
    }
    else if (cStack_9c == ' ') {
      param_2[5] = 2;
    }
    param_2[9] = (uint)bStack_9f;
    param_2[10] = CONCAT12(cStack_9c,local_9e) & 0xff;
    param_2[8] = CONCAT11(bStack_9f,uStack_a0) & 0xff;
    if ((*param_2 & 2) == 0) {
      iVar3 = FUN_0041ca40(param_1,local_80,0xff);
      if (iVar3 == 0) {
        param_2[7] = local_70;
        param_2[6] = local_74;
      }
    }
    if ((*param_2 & 0x20) != 0) {
      local_ac = local_90 >> 8 & 0xff;
      local_a8 = local_90 & 0xff;
      local_b0 = local_90 >> 0x10 & 0xff;
      puVar1 = param_2 + 7;
      FUN_0041ef20((int *)puVar1,(int *)&local_b0);
      if (*puVar1 != 0) {
        *puVar1 = *puVar1 - 1;
      }
    }
    SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0x25);
    local_60 = 10;
    iVar3 = FUN_004194d0((undefined4 *)param_1,local_64);
    if (iVar3 == 0) {
      FUN_0041f9a0((undefined1 *)local_1c,2);
      if ((*param_2 & 2) != 0) {
        param_2[6] = *local_1c;
      }
    }
  }
  else if (*(char *)(*(int *)(param_1 + 0x160) + 0x84) == ' ') {
    iVar3 = FUN_0041af40(param_1,param_2);
    return iVar3;
  }
  return iVar3;
}


