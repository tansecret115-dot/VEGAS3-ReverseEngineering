/* Module: sfcd.cdd
   Function: FUN_00403030
   Address: 00403030
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00403030(HSFCD__ *param_1,undefined4 *param_2)

{
  HSFCD__ *pHVar1;
  undefined4 *puVar2;
  byte bVar3;
  uchar *puVar4;
  uint uVar5;
  int iVar6;
  uchar *puVar7;
  undefined4 *puVar8;
  _scsicommand local_64 [10];
  undefined1 local_5a;
  undefined1 local_58;
  int local_1c;
  
  pHVar1 = param_1;
  puVar4 = SfScsi_GetIOBuffer(*(HSFSCSIPORT__ **)param_1);
  puVar2 = param_2;
  puVar8 = param_2;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)pHVar1,local_64,0x1a);
  local_5a = 0;
  local_58 = 0xc;
  uVar5 = FUN_00402d20((undefined4 *)pHVar1,local_64);
  if (uVar5 == 0) {
    bVar3 = *(byte *)(local_1c + 1);
    if ((bVar3 & 0x80) == 0) {
      return 0x8004e0c9;
    }
    if (((bVar3 & 0x40) != 0) || ((bVar3 & 8) == 0)) {
      *(byte *)((int)puVar2 + 2) = *(byte *)((int)puVar2 + 2) & 0xfe | 2;
    }
    switch(*(byte *)(local_1c + 1) & 3) {
    case 0:
      *(undefined1 *)(puVar2 + 2) = 0;
      break;
    case 1:
    case 2:
      *(undefined1 *)(puVar2 + 2) = 0x20;
      break;
    case 3:
      *(undefined1 *)(puVar2 + 2) = 0x10;
    }
    FUN_00402f80(pHVar1,&param_1);
    *(byte *)((int)puVar2 + 7) = ((byte)param_1 & 1) << 5 | *(byte *)((int)puVar2 + 7) & 0xdf;
    uVar5 = FUN_00402f00(pHVar1,0x80,1);
    if (uVar5 == 0) {
      bVar3 = puVar4[3];
      puVar7 = puVar4 + 4;
      *(byte *)(puVar2 + 1) = bVar3;
      if ((bVar3 != 0) && (iVar6 = bVar3 - 1, 0 < iVar6)) {
        puVar7 = puVar7 + iVar6 * 8;
      }
      *(uchar *)((int)puVar2 + 5) = puVar7[2];
      bVar3 = *(byte *)((int)puVar2 + 2);
      if (((bVar3 & 3) == 0) && (puVar4[2] == '\0')) {
        if (puVar7[2] == '\0') {
          bVar3 = bVar3 & 0xfc;
        }
        else {
          *(byte *)((int)puVar2 + 2) = bVar3 & 0xfd | 1;
          if (puVar4[3] == '\x01') {
            if (puVar7[2] == '\0') {
              bVar3 = bVar3 & 0xf1 | 1;
            }
            else {
              bVar3 = bVar3 & 0xf5 | 5;
            }
          }
          else {
            bVar3 = bVar3 & 0xfd | 0xd;
          }
        }
        *(byte *)((int)puVar2 + 2) = bVar3;
      }
      uVar5 = FUN_00402f00(pHVar1,0,0);
      if (uVar5 == 0) {
        *(uchar *)((int)puVar2 + 6) = puVar4[3];
      }
    }
  }
  return uVar5;
}


