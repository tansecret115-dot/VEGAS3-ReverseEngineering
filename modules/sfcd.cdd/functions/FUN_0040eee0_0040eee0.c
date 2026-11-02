/* Module: sfcd.cdd
   Function: FUN_0040eee0
   Address: 0040eee0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040eee0(HSFCD__ *param_1,undefined4 *param_2)

{
  int iVar1;
  byte bVar2;
  uchar *puVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 local_38 [12];
  undefined4 local_2c [3];
  char local_20;
  undefined4 local_18 [3];
  int local_c;
  
  iVar1 = *(int *)(param_1 + 0x160);
  puVar3 = SfScsi_GetIOBuffer(*(HSFSCSIPORT__ **)param_1);
  puVar7 = param_2;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = 0;
  lVar4 = FUN_0040ed40(param_1,local_18,-1);
  if (lVar4 == 0) {
    bVar2 = *(byte *)((int)param_2 + 2) & 0xfc;
    *(byte *)((int)param_2 + 2) = bVar2;
    if (local_c != -0x96) {
      *(byte *)((int)param_2 + 2) = bVar2 | 1;
    }
  }
  else {
    FUN_004192a0(iVar1 + 100,local_2c);
    if (local_20 == -0x40) {
      *(byte *)((int)param_2 + 2) = *(byte *)((int)param_2 + 2) & 0xfe | 2;
    }
  }
  lVar4 = FUN_0040ecb0(param_1,0x24,(undefined4 *)local_38,0xc);
  if (lVar4 != 0) {
    return;
  }
  uVar6 = local_38._2_4_ & 0xff;
  if (uVar6 != 0) {
    if (uVar6 == 1) {
      *(undefined1 *)(param_2 + 2) = 0x10;
      goto LAB_0040efa2;
    }
    if (uVar6 == 2) {
      *(undefined1 *)(param_2 + 2) = 0x20;
      goto LAB_0040efa2;
    }
  }
  *(undefined1 *)(param_2 + 2) = 0;
LAB_0040efa2:
  if (((*(byte *)((int)param_2 + 2) & 3) == 2) && (lVar4 = FUN_0040ee60(param_1,0,1), lVar4 == 0)) {
    *(uchar *)(param_2 + 1) = puVar3[3];
    FUN_0040ee60(param_1,0,1);
    *(uchar *)((int)param_2 + 5) = puVar3[6];
    bVar2 = *(byte *)((int)param_2 + 2);
    if (((bVar2 & 3) == 0) && (puVar3[2] == '\0')) {
      if (puVar3[6] == '\0') {
        bVar2 = bVar2 & 0xfc;
      }
      else {
        *(byte *)((int)param_2 + 2) = bVar2 & 0xfd | 1;
        if (puVar3[3] == '\x01') {
          if (puVar3[6] == '\0') {
            bVar2 = bVar2 & 0xf1 | 1;
          }
          else {
            bVar2 = bVar2 & 0xf5 | 5;
          }
        }
        else {
          bVar2 = bVar2 & 0xfd | 0xd;
        }
      }
      *(byte *)((int)param_2 + 2) = bVar2;
    }
    lVar4 = FUN_0040ee60(param_1,0,0);
    if (lVar4 == 0) {
      *(uchar *)((int)param_2 + 6) = puVar3[3];
    }
  }
  return;
}


