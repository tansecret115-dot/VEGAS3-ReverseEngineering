/* Module: sfcd.cdd
   Function: FUN_004161f0
   Address: 004161f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004161f0(HSFCD__ *param_1,undefined4 *param_2)

{
  byte bVar1;
  uchar *puVar2;
  long lVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_78;
  _scsicommand local_64 [10];
  undefined1 local_5a;
  undefined1 local_58;
  int local_1c;
  
  puVar2 = SfScsi_GetIOBuffer(*(HSFSCSIPORT__ **)param_1);
  puVar5 = param_2;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)param_1,local_64,0x1a);
  local_5a = 0x31;
  local_58 = 0x10;
  lVar3 = FUN_00415eb0((undefined4 *)param_1,local_64);
  if (lVar3 == 0) {
    if ((*(byte *)(local_1c + 1) & 0x80) == 0) {
      return;
    }
    switch(*(byte *)(local_1c + 1) & 3) {
    case 0:
      *(undefined1 *)(param_2 + 2) = 0;
      break;
    case 1:
    case 2:
      *(undefined1 *)(param_2 + 2) = 0x20;
      break;
    case 3:
      *(undefined1 *)(param_2 + 2) = 0x10;
    }
    if ((*(byte *)(local_1c + 1) & 8) == 0) {
      *(byte *)((int)param_2 + 2) = *(byte *)((int)param_2 + 2) & 0xfe | 2;
    }
    else {
      lVar3 = FUN_004160d0(param_1,&local_78,1);
      if (local_78._1_1_ != '\0') {
        *(byte *)((int)param_2 + 2) = *(byte *)((int)param_2 + 2) & 0xfd | 1;
      }
      *(char *)((int)param_2 + 6) = local_78._1_1_;
      *(undefined1 *)((int)param_2 + 5) = 1;
      *(undefined1 *)(param_2 + 1) = 1;
      if (lVar3 != 0) {
        return;
      }
    }
    if (((*(byte *)((int)param_2 + 2) & 3) == 2) && (lVar3 = FUN_00416170(param_1,0,1), lVar3 == 0))
    {
      *(uchar *)(param_2 + 1) = puVar2[3];
      FUN_00416170(param_1,0,1);
      *(uchar *)((int)param_2 + 5) = puVar2[6];
      bVar1 = *(byte *)((int)param_2 + 2);
      if (((bVar1 & 3) == 0) && (puVar2[2] == '\0')) {
        if (puVar2[6] == '\0') {
          bVar1 = bVar1 & 0xfc;
        }
        else {
          *(byte *)((int)param_2 + 2) = bVar1 & 0xfd | 1;
          if (puVar2[3] == '\x01') {
            if (puVar2[6] == '\0') {
              bVar1 = bVar1 & 0xf1 | 1;
            }
            else {
              bVar1 = bVar1 & 0xf5 | 5;
            }
          }
          else {
            bVar1 = bVar1 & 0xfd | 0xd;
          }
        }
        *(byte *)((int)param_2 + 2) = bVar1;
      }
      lVar3 = FUN_00416170(param_1,0,0);
      if (lVar3 == 0) {
        *(uchar *)((int)param_2 + 6) = puVar2[3];
      }
    }
  }
  return;
}


