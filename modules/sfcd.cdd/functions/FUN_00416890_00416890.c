/* Module: sfcd.cdd
   Function: FUN_00416890
   Address: 00416890
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00416890(undefined4 *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined4 local_7c [3];
  byte local_70;
  byte bStack_6f;
  byte bStack_6e;
  byte abStack_6d [9];
  _scsicommand local_64 [9];
  undefined1 local_5b;
  undefined1 local_58;
  undefined4 *local_1c;
  undefined4 local_18;
  
  iVar3 = 0;
  abStack_6d[1] = 0;
  abStack_6d[2] = 0;
  abStack_6d[3] = 0;
  abStack_6d[4] = 0;
  abStack_6d[5] = 0;
  abStack_6d[6] = 0;
  local_7c[0] = 0x8000000;
  local_7c[1] = 0;
  local_7c[2] = 0x30090000;
  local_70 = 0x22;
  bStack_6f = 8;
  bStack_6e = 0;
  abStack_6d[0] = 0;
  if (*(int *)(param_2 + 0x1d78) != 0) {
    local_70 = 0x22;
    bStack_6f = 8;
    bStack_6e = 1;
    abStack_6d[0] = 0;
    pbVar4 = (byte *)(param_2 + 0x1d7d);
    do {
      pbVar1 = pbVar4 + -1;
      bVar2 = *pbVar4;
      pbVar4 = pbVar4 + 2;
      abStack_6d[iVar3] = *pbVar1 << 4 | bVar2 & 0xf;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
    abStack_6d[6] = *(char *)(param_2 + 0x1d88) << 4;
  }
  SfScsi_InitCmdOut((HSFSCSIPORT__ *)*param_1,local_64,0x15);
  local_5b = 0x10;
  local_58 = 0x16;
  puVar5 = local_7c;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *local_1c = *puVar5;
    puVar5 = puVar5 + 1;
    local_1c = local_1c + 1;
  }
  *(undefined2 *)local_1c = *(undefined2 *)puVar5;
  local_18 = 0x16;
  FUN_00415eb0(param_1,local_64);
  return;
}


