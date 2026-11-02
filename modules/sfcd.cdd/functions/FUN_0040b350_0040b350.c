/* Module: sfcd.cdd
   Function: FUN_0040b350
   Address: 0040b350
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0040b350(HSFCD__ *param_1,undefined4 *param_2)

{
  uchar uVar1;
  HSFCD__ *pHVar2;
  undefined4 *puVar3;
  byte bVar4;
  uchar *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  _scsicommand local_64 [10];
  undefined1 local_5a;
  undefined1 local_58;
  int local_1c;
  
  pHVar2 = param_1;
  puVar5 = SfScsi_GetIOBuffer(*(HSFSCSIPORT__ **)param_1);
  puVar3 = param_2;
  puVar8 = param_2;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  SfScsi_InitCmdIn(*(HSFSCSIPORT__ **)pHVar2,local_64,0x1a);
  local_5a = 0;
  local_58 = 0xc;
  uVar6 = FUN_0040aaa0((undefined4 *)pHVar2,local_64);
  if (uVar6 == 0) {
    bVar4 = *(byte *)(local_1c + 1);
    if ((bVar4 & 0x80) == 0) {
      return 0x8004e0c9;
    }
    if (((bVar4 & 0x40) != 0) || ((bVar4 & 8) == 0)) {
      *(byte *)((int)puVar3 + 2) = *(byte *)((int)puVar3 + 2) & 0xfe | 2;
    }
    switch(*(byte *)(local_1c + 1) & 3) {
    case 0:
      *(undefined1 *)(puVar3 + 2) = 0;
      break;
    case 1:
    case 2:
      *(undefined1 *)(puVar3 + 2) = 0x20;
      break;
    case 3:
      *(undefined1 *)(puVar3 + 2) = 0x10;
    }
    FUN_0040b220(pHVar2,&param_1);
    *(byte *)((int)puVar3 + 7) = ((byte)param_1 & 1) << 5 | *(byte *)((int)puVar3 + 7) & 0xdf;
    uVar6 = FUN_0040b2d0(pHVar2,0,1);
    if (uVar6 == 0) {
      uVar1 = puVar5[3];
      *(uchar *)(puVar3 + 1) = uVar1;
      FUN_0040b2d0(pHVar2,uVar1,1);
      *(uchar *)((int)puVar3 + 5) = puVar5[6];
      bVar4 = *(byte *)((int)puVar3 + 2);
      if (((bVar4 & 3) == 0) && (puVar5[2] == '\0')) {
        if (puVar5[6] == '\0') {
          bVar4 = bVar4 & 0xfc;
        }
        else {
          *(byte *)((int)puVar3 + 2) = bVar4 & 0xfd | 1;
          if (puVar5[3] == '\x01') {
            if (puVar5[6] == '\0') {
              bVar4 = bVar4 & 0xf1 | 1;
            }
            else {
              bVar4 = bVar4 & 0xf5 | 5;
            }
          }
          else {
            bVar4 = bVar4 & 0xfd | 0xd;
          }
        }
        *(byte *)((int)puVar3 + 2) = bVar4;
      }
      uVar6 = FUN_0040b2d0(pHVar2,0,0);
      if (uVar6 == 0) {
        *(uchar *)((int)puVar3 + 6) = puVar5[3];
      }
    }
  }
  return uVar6;
}


