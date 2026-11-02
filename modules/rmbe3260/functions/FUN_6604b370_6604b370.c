/* Module: rmbe3260.dll
   Function: FUN_6604b370
   Address: 6604b370
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6604b370(byte *param_1,undefined4 *param_2,undefined2 *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  void *this;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  *param_2 = 0;
  pbVar5 = &DAT_6606e9b0;
  pbVar3 = param_1;
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_6604b3ab:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_6604b3b0;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_6604b3ab;
    pbVar3 = pbVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_6604b3b0:
  if (iVar4 == 0) {
    puVar2 = operator_new(0x18);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2 = FUN_6604c570(puVar2);
      goto LAB_6604b529;
    }
  }
  else {
    pbVar5 = &DAT_6606e9a8;
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_6604b3fd:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_6604b402;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_6604b3fd;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_6604b402:
    if (iVar4 == 0) {
      puVar2 = operator_new(0x10);
      if (puVar2 != (undefined4 *)0x0) {
        puVar2 = FUN_6604c0f0(puVar2);
        goto LAB_6604b4ca;
      }
LAB_6604b4c8:
      puVar2 = (undefined4 *)0x0;
LAB_6604b4ca:
      if (puVar2 != (undefined4 *)0x0) {
        return;
      }
      *param_2 = 0x8007000e;
      return;
    }
    pbVar5 = &DAT_6606e9a0;
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_6604b44f:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_6604b454;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_6604b44f;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_6604b454:
    if (iVar4 == 0) {
      puVar2 = operator_new(0x18);
      if (puVar2 != (undefined4 *)0x0) {
        puVar2 = FUN_6604bd40(puVar2);
        goto LAB_6604b529;
      }
    }
    else {
      pbVar5 = &DAT_6606e998;
      pbVar3 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_6604b4a1:
          iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_6604b4a6;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_6604b4a1;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_6604b4a6:
      if (iVar4 == 0) {
        this = operator_new(0x1a);
        if (this != (void *)0x0) {
          puVar2 = FUN_6604baa0(this,*param_3);
          goto LAB_6604b4ca;
        }
        goto LAB_6604b4c8;
      }
      pbVar3 = &DAT_6606e990;
      do {
        bVar1 = *param_1;
        bVar6 = bVar1 < *pbVar3;
        if (bVar1 != *pbVar3) {
LAB_6604b507:
          iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_6604b50c;
        }
        if (bVar1 == 0) break;
        bVar1 = param_1[1];
        bVar6 = bVar1 < pbVar3[1];
        if (bVar1 != pbVar3[1]) goto LAB_6604b507;
        param_1 = param_1 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_6604b50c:
      if (iVar4 != 0) {
        *param_2 = 0x80040fc0;
        return;
      }
      puVar2 = operator_new(0x34);
      if (puVar2 != (undefined4 *)0x0) {
        puVar2 = FUN_6604b5a0(puVar2);
        goto LAB_6604b529;
      }
    }
  }
  puVar2 = (undefined4 *)0x0;
LAB_6604b529:
  if (puVar2 != (undefined4 *)0x0) {
    return;
  }
  *param_2 = 0x8007000e;
  return;
}


